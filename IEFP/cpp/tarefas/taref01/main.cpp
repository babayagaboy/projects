#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <string>
#include <cstring>
#include <csignal>
#include <vector>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

#ifdef _WIN32
    const string clear = "cls";
#else
    const string clear = "clear";
#endif

void clearScreen() 
{
    system(clear.c_str());
}

void showMenu()
{
    cout << R"(
    ****************************************************
    *                                                  *
    *  EFEITO                                          *
    *                                                  *
    *    1 - Diagonal Esquerda                         *
    *    2 - Diagonal Esquerda, Texto Invertido        *
    *    3 - Diagonais Cruzadas                        *
    *    4 - Diagonal Direita, Palavras Ordem Inversa  *
    *    5 - Em V                                      *
    *    6 - Deslizante                                *
    *    T - Todos                                     *
    *    E - Encerrar                                  *
    *                                                  *
    ****************************************************
    )" << endl;

    cout << "OPCAO> ";
}

/*--------------------------------------------------------*/

void diagonalEsquerda(string str)
{
    for (int i = 0; i < str.size(); i++) {
        for (int j = 0; j < i; j++) {
            cout << ' ';
        }
        sleep_for(milliseconds(100));
        cout << str[i] << endl;
    }

    sleep_for(milliseconds(1000));
}

/*--------------------------------------------------------*/

void diagonalEsquerdaInvert(string str)
{
    int length = str.size();

    for (int i = length - 1; i >= 0; i--) {
        for (int j = 0; j < length - i - 1; j++) {
            cout << ' ';
        }
        sleep_for(milliseconds(100));
        cout << str[i] << endl;
    }

    sleep_for(milliseconds(1000));
}

/*--------------------------------------------------------*/

void diagonalCruzadas(string str)
{
    int length = str.size();

    for (int i = 0; i < str.size(); i++) {
        for (int j = 0; j < length; j++) {
            if (i == j || j == length - i - 1) 
                cout << str[i];
            else
                cout << " ";
        }
        cout << endl;
        sleep_for(milliseconds(100));
    }
    
    sleep_for(milliseconds(1000));
}

/*--------------------------------------------------------*/

void diagonalDirOrdInvert(string str)
{
    vector<string> parts;
    int start = 0;
    int totalLength = str.size(); // Initialize totalLength with the length of the string

    // Split the input string by spaces
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == ' ') {
            parts.push_back(str.substr(start, i - start));
            parts.push_back(" ");
            start = i + 1;
        }
    }
    parts.push_back(str.substr(start)); // Last part after the last space

    // Print each part vertically with a newline between characters
    for (size_t i = 0; i < str.size(); ++i) {
        // Print preceding spaces
        for (int j = str.size() - 1; j > i; --j) {
            cout << " ";
        }
        // Print the character
        cout << str[--totalLength] << "\n";
        sleep_for(milliseconds(100));
    }

    sleep_for(milliseconds(1000));
}

/*--------------------------------------------------------*/

void diagonalEmV(string str)
{
    int length = str.size();
    int k = (length - 1) * 2;

    for (int i = 0; i < length; i++) 
    {
        if (i != length - 1)
            cout << string(i, ' ') << str[i] << string(k, ' ') << str[length - i - 1] << endl;

        else
            cout << string(i, ' ') << str[i] << string(k, ' ') << str[length - i - 1] << endl;

        k -= 2;

        sleep_for(milliseconds(100));
    }

    sleep_for(milliseconds(1000));
}

/*--------------------------------------------------------*/

bool continuarExecutando = true;

void handleSIGINT(int signal)
{
    continuarExecutando = false;
}

void textoDeslizante(string str) 
{
    cout << "PRESSIONE CTRL + C PARA SAIR DO EFEITO" << flush;
    sleep_for(milliseconds(3000));
    clearScreen();
    
    string str2 = str + string(40 - str.size() , ' ');
    int length = str2.size();

    continuarExecutando = true;

    while (continuarExecutando)
    {
        cout << "\r" << str2 << flush;
        char temp = str2[length - 1];
        for (size_t i = length - 1; i > 0; --i)
            str2[i] = str2[i - 1];
        str2[0] = temp;

        sleep_for(milliseconds(50));
    }
}

/*--------------------------------------------------------*/

int main ()
{
    signal(SIGINT, handleSIGINT);

    string str = "HUGO GUTTERRES FORMANDO ABCDE";
    char escolha;


    while (true)
    {
        clearScreen();
        showMenu();

        cin >> escolha;

        switch (escolha)
        {
            case '1':                   //Diagonal Esquerda 
                clearScreen();
                diagonalEsquerda(str);
                break;
            case '2':                   //Diagonal Esquerda, Texto Invertido 
                clearScreen();
                diagonalEsquerdaInvert(str);
                break;
            case '3':                   //Diagonais Cruzadas 
                clearScreen();
                diagonalCruzadas(str);
                break;
            case '4':                   
                clearScreen();
                diagonalDirOrdInvert(str);
                break;
            case '5':                    //Em V
                clearScreen();
                diagonalEmV(str);
                break;
            case '6':                    //Deslizante
                clearScreen();
                textoDeslizante(str);
                break;
            case 'T':
            case 't':
                clearScreen();
                diagonalEsquerda(str);
                clearScreen();
                diagonalEsquerdaInvert(str);
                clearScreen();
                diagonalCruzadas(str);
                clearScreen();
                diagonalDirOrdInvert(str);
                clearScreen();
                diagonalEmV(str);
                clearScreen();
                textoDeslizante(str);
                break;
            case 'E':
            case 'e':
                return 0;
            default:
                cout << "opcao invalida" << endl;
                sleep_for(milliseconds(1000));
                break;
        }
    }
}