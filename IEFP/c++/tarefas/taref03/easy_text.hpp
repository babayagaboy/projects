#ifndef __EASY_TEXT_HPP__
#define __EASY_TEXT_HPP__

#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include <map>
#include <iterator>
#include <algorithm>
#include <vector>


namespace easy_std
{
    inline bool ft_is_white_space(char ch) 
    {
        return (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r' || ch == '\f' || ch == '\v');
    }

    inline bool ft_is_white_space(const std::string& str) 
    {
        for (char ch : str) {
            if (!ft_is_white_space(ch)) {
                return false;
            }
        }
        return true;
    }
    
    inline bool ft_is_digit(const char ch)
    {
        return (ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9');
    }

    inline bool ft_is_digit(const std::string& str) 
    {
        for (char ch : str) {
            if (!ft_is_digit(ch)) {
                return false;
            }
        }
        return true;
    }

    inline char ft_to_lower(char ch)
    {
        if (ch >= 65 && ch <= 90)
            return ch + 32;
        return ch;
    }

    inline char ft_to_upper(char ch)
    {
        if (ch >= 97 && ch <= 122)
            return ch - 32;
        return ch;
    }

    inline std::string ft_to_lower(const std::string& str) 
    {
        std::string result = str;
        for (char& ch : result) {
            ch = ft_to_lower(ch);
        }
        return result;
    }

    inline std::string ft_to_upper(const std::string& str) 
    {
        std::string result = str;
        for (char& ch : result) {
            ch = ft_to_upper(ch);
        }
        return result;
    }

    inline std::string& ft_trim_left(std::string& str)
    {
        int i = 0;
        while (i < str.size() && ft_is_white_space(str[i])) 
        {
            ++i;
        }
        str.erase(0, i);
        return str;
    }
    
    inline std::string& ft_trim_right(std::string& str)
    {
        int i = str.size();
        while (i > 0 && std::isspace(str[i - 1])) 
        {
            --i;
        }
        str.erase(i);
        return str;
    }

    inline std::string& ft_trim(std::string& str)
    {
        str = ft_trim_left(str);
        str = ft_trim_right(str);
        return str;
    }

    inline std::string& ft_reverse(std::string& str)
    {
        int length = str.length();
        
        for (int i = 0; i < length / 2; ++i) {
            char temp = str[i];
            str[i] = str[length - i - 1];
            str[length - i - 1] = temp;
        }
        return str;
    }

    inline std::string& ft_reversed(const std::string& str)
    {
        std::string reversed;
    
        reversed.reserve(str.size() + 1);
        for (auto ch = str.rbegin(); ch != str.rend(); ++ch) {
            reversed.push_back(*ch);
        }
        return reversed;
    }

    inline std::string& ft_replace(std::string& str, char ch1, char ch2, int start = 0, int end = -1)
    {
        start = (start < 0) ? 0 : start;
        end = (end < 0 || end > str.size() ? str.size() : end);

        for (int i = start; i < end; ++i) {
            if (str[i] == ch1) {
                str[i] = ch2;
            }
        }
        return str;
    }

    inline std::string& ft_replace(std::string& str, const std::string& substr1, const std::string& substr2, int start = 0, int end = -1)
    {
        start = (start < 0) ? 0 : start;
        end = (end < 0 || end > str.size() ? str.size() : end);

        int occur = str.find(substr1, start);
        while (occur != std::string::npos && occur < end) {
            str.replace(occur, substr1.length(), substr2);
            occur = str.find(substr1, occur + substr2.length());
        }
        return str;
    }

    inline std::vector<std::string> ft_split(const std::string& str, const std::string& delim)
    {
        std::vector<std::string> tokens;
        int start = 0, end = 0;

        while ((end = str.find(delim, start)) != std::string::npos) {
            tokens.push_back(str.substr(start, end - start));
            start = end + delim.length();
        }
        tokens.push_back(str.substr(start));

        return tokens;
    }
    
    inline std::string ft_join(const std::vector<std::string>& parts, const std::string& delim)
    {
        if (parts.empty())
            return "";

        std::string result = parts[0];
        for (int i = 1; i < parts.size(); ++i) {
            result += delim + parts[i]; 
        }
        return result;
    }
}

#endif