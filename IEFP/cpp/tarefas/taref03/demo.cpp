#include "easy_utils.hpp"
#include "easy_text.hpp"
#include "easy_random.hpp"

using namespace std;
using namespace easy_std;

int main()
{
    cout << "\n******************** TESTES ********************\n" << endl;
///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n******************** INPUT *********************\n" << endl;

    // string nome = ft_input("Qual o seu nome? ");
    // cout << "O seu nome é " << nome << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n****************** TO_STRING *******************\n" << endl;

    int num1 = 10;
    string num_str1 = ft_to_string(num1);

    cout << "o numero 10 conertido para string: " << num_str1 << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n******************* CONVERT ********************\n" << endl;

    // num_str2 = ft_input("Digite um numero: ");
    // num2 = ft_convert<int>(num_str2);
    // cout << "O seu num mais 1 é " << num2 + 1 << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n******************** PRINT *********************\n" << endl;

    list<string> frase = {"Hello" , "World"};

    cout << "frase sem separadores e o finalizador" << endl;

    for (const auto& element : frase) {
        cout << element << endl;
    }

    cout << "frase com os separadores e o finalizador default" << endl;

    ft_print(frase);

    cout << "frase com os separadores e o finalizador customizados \' , \' e \' ! \'" << endl;

    print_params custom = {", ", "!"};

    ft_print(frase, custom);

    cout << endl;
    
///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n***************** FIND_INDEX *******************\n" << endl;

    vector<int> numbers1 = {1, 5 ,2, 3, 4, 5};

    cout << "a lista de numeros: ";
    ft_print(numbers1);
    cout << endl;

    cout << "index do numero 3: ";
    int index1 = ft_find_index(numbers1, 3);
    cout << index1 << endl;

    cout << "index do numero 7: ";
    int index2 =ft_find_index(numbers1, 7);
    cout << index2 << endl;

    cout << "index do numero 5 mas com o star_index de 3: ";
    int index3 =ft_find_index(numbers1, 5, 3);
    cout << index3 << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n********************* IN ***********************\n" << endl;

    vector<int> numbers2 = {1 ,2, 3, 4, 5};

    cout << "a lista de numeros: ";
    ft_print(numbers2);
    cout << endl;

    cout << "existe o numero 3: ";
    cout << (ft_in(numbers2, 3) ? "true" : "false") << endl;

    cout << "existe o numero 7: ";
    cout << (ft_in(numbers2, 7) ? "true" : "false") << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n*************** IS_WHITE_SPACE *****************\n" << endl;

    char ch1 = ' ';
    string str2 = "   \t ";
    string str3 = "  Hello  ";

    cout << "ch1: \"" << ch1 << "\""<< endl;
    cout << "str2: \"" << str2 << "\"" << endl;
    cout << "str3: \"" << str3 << "\"" << endl;

    cout << "Is ch1 a whitespace? " << (ft_is_white_space(ch1) ? "true" : "false") << endl; 
    cout << "Is str2 entirely whitespace? " << (ft_is_white_space(str2) ? "true" : "false") << endl;
    cout << "Is str3 entirely whitespace? " << (ft_is_white_space(str3) ? "true" : "false") << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n****************** IS_DIGIT ********************\n" << endl;

    char ch2 = '4';
    string str5 = "1234";
    string str6 = "123456g78";

    cout << "ch1: \"" << ch2 << "\""<< endl;
    cout << "str2: \"" << str5 << "\"" << endl;
    cout << "str3: \"" << str6 << "\"" << endl;

    cout << "Is ch1 a digit? " << (ft_is_digit(ch2) ? "true" : "false") << endl; 
    cout << "Is str2 entirely digits? " << (ft_is_digit(str5) ? "true" : "false") << endl;
    cout << "Is str3 entirely digits? " << (ft_is_digit(str6) ? "true" : "false") << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n************** TO_LOWER / UPPER ****************\n" << endl;

    char ch3 = 'a';
    char ch4 = 'B';
    string str7 = "abc";
    string str8 = "DEF";
    string str9 = "abcDEF";


    cout << "ch1: \"" << ch3 << "\""<< endl;
    cout << "ch2: \"" << ch4 << "\"" << endl;

    cout << "str1: \"" << str7 << "\""<< endl;
    cout << "str2: \"" << str8 << "\"" << endl;
    cout << "str3: \"" << str9 << "\"" << endl;

    cout << "ch1 with to lower " << ft_to_lower(ch3) << endl; 
    cout << "ch2 with to lower " << ft_to_lower(ch4) << endl;

    cout << "ch1 with to upper " << ft_to_upper(ch3) << endl; 
    cout << "ch2 with to upper " << ft_to_upper(ch4) << endl;

    cout << "str1 with to lower " << ft_to_lower(str7) << endl; 
    cout << "str2 with to lower " << ft_to_lower(str8) << endl;
    cout << "str3 with to lower " << ft_to_lower(str9) << endl;

    cout << "str1 with to upper " << ft_to_upper(str7) << endl; 
    cout << "str2 with to upper " << ft_to_upper(str8) << endl;
    cout << "str3 with to upper " << ft_to_upper(str9) << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n************* TRIM_LEFT / RIGHT ****************\n" << endl;

    string str10 = "       Hello World       ";

    cout << "Before trimming: '" << str10 << "'" << endl;
    ft_trim_left(str10);
    cout << "After trimming to the left: '" << str10 << "'" << endl;

    ft_trim_right(str10);
    cout << "After trimming to the right: '" << str10 << "'" << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n******************* TRIM ***********************\n" << endl;

    string str11 = "       Hello World       ";

    cout << "Before trimming: '" << str11 << "'" << endl;
    ft_trim(str11);
    cout << "After trimming: '" << str11 << "'" << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n****************** REVERSE *********************\n" << endl;

    string str12 = "Hello World";

    cout << "Before reverse: '" << str12 << "'" << endl;
    ft_reverse(str12);
    cout << "After reverse: '" << str12 << "'" << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n***************** REVERSED *********************\n" << endl;

    string str13 = "Hello World";

    cout << "Original string: " << str13 << endl;
    string reversed = ft_reversed(str13);
    cout << "Reversed string: " << reversed << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n***************** REPLACE **********************\n" << endl;

    string str14 = "Hello World";

    cout << "Original string: " << str14 << endl;
    ft_replace(str14, 'l', '1', 0, 5);
    cout << "After replacement: " << str14 << endl;

    string str15 = "Hello World";

    cout << "Original string: " << str15 << endl;
    ft_replace(str15, "World", "Universe");
    cout << "After replacement: " << str15 << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n****************** SPLIT ***********************\n" << endl;

    string str16 = "Hello,World,!";
    vector<string> tokens = ft_split(str16, ",");

    cout << "Original string: " << str16 << endl;
    cout << "Splited string: ";

    for (const auto& token : tokens) {
        cout << "{" << token << "} ";
    }

    cout << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n******************* JOIN ***********************\n" << endl;

    vector<string> parts = {"Hello", "World", "!"};

    cout << "Splited string: ";

    for (const auto& part : parts) {
        cout << "{" << part << "} ";
    }
    cout << endl;
    
    string joined = ft_join(parts, ",");
    cout << "Joined string: " << joined << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n***************** RAND_GEN *********************\n" << endl;

    mt19937 rng1 = ft_rand_gen();

    cout << "Random number: " << rng1() << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n****************** RANDINT *********************\n" << endl;

    int random_number1 = ft_randint(1, 10);
    cout << "Random number between 1 and 10: " << 1 << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n****************** RANDOM **********************\n" << endl;

    double random_number2 = ft_random(0.0, 10.0);
    cout << "Random number between 0.0 and 10.0: " << random_number2 << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n******************* SEED ***********************\n" << endl;

    ft_seed(123);
    
    cout << "Seed 123:" << endl;
    cout << "Random number 1: " << ft_random(0.0, 1.0) << endl;
    cout << "Random number 2: " << ft_random(0.0, 1.0) << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n****************** CHOICE **********************\n" << endl;
    
    vector<int> numbers3 = {1, 2, 3, 4, 5};

    cout << "Numbers: ";

    for (const auto& number : numbers3) {
        cout << number << " ";
    }

    cout << endl;

    int random_number = ft_choice(numbers3);
    cout << "Random number: " << random_number << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n***************** SHUFFLE_ *********************\n" << endl;

    vector<int> numbers4 = {1, 2, 3, 4, 5};

    cout << "Numbers: ";
    for (const auto& number : numbers4) {
        cout << number << " ";
    }
    
    cout << endl;

    ft_shuffle_(numbers4);
    cout << "Shuffled numbers: ";
    for (const auto& num : numbers4) {
        cout << num << " ";
    }
    cout << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << "\n****************** SAMPLE **********************\n" << endl;
    
    vector<int> numbers5 = {1, 2, 3, 4, 5};
    int sample_size = 3;
    
    cout << "Numbers: ";
    for (const auto& number : numbers5) {
        cout << number << " ";
    }
    
    cout << endl;

    vector<int> sampled = ft_sample<int>(numbers5, sample_size);
    cout << "Sampled numbers:";
    for (const auto& num : sampled) {
        cout << " " << num;
    }
    cout << endl;

    
}
