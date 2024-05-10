#ifndef __EASY_UTILS_HPP__
#define __EASY_UTILS_HPP__

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
    inline std::string ft_input(const std::string& msg)
    {
        std::cout << msg;
        std::string str;
        std::getline(std::cin, str);
        return str;
    }

    template <typename T>
    std::string ft_to_string(const T& t)
    {
        std::ostringstream oss;
        oss << t;
        return oss.str();
    }

    template <typename T>
    inline T ft_convert(const std::string& str)
    {
        std::istringstream iss(str);
        T item;
        if(!(iss >> item))
            throw std::invalid_argument("Error: failed to convert " + str);
        return item;
    }

    struct print_params {
        std::string sep{" "};
        std::string end{"\n"};
    };

    template <typename Container>
    void ft_print(const Container& cont, const print_params& p = print_params())
    {
        if (cont.size() > 0) 
        {
            auto iter = begin(cont);
            std::cout << *iter;

            for(++iter; iter != end(cont); ++iter) {
                std::cout << p.sep << *iter;
            }
        }
        std::cout << p.end;
    }

    template <typename Container, typename Item>
    inline int ft_find_index(const Container& cont, const Item& item, int start_index = 0)
    {
        auto it = std::find(std::begin(cont) + start_index, std::end(cont), item);
        if (it != std::end(cont)) 
            return std::distance(std::begin(cont), it);
        return -1;
    }

    template <typename Container, typename Item>
    inline bool ft_in(const Container& cont, const Item& item)
    {
        auto it = std::find(std::begin(cont), std::end(cont), item);
        if (it != std::end(cont)) 
            return true;
        return false;
    }
}

#endif