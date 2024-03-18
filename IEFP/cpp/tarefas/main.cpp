#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <string>
#include <cstring>
using namespace std;

#ifdef _WIN32
    const string clear = "cls";
#else
    const string clear = "clear";
#endif

using std::this_thread::sleep_for;
using std::chrono::milliseconds;


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
    *    4 - Em V                                      *
    *    5 - Deslizante                                *
    *    T - Todos                                     *
    *    E - Encerrar                                  *
    *                                                  *
    ****************************************************
    )" << endl;
}

/*--------------------------------------------------------*/

void diagonalEsquerda(string str)
{
    for (int index = 0; str[index] != '\0'; index++) {
        for (int j = 0; j < index; j++) {
            cout << ' ';
        }
        sleep_for(milliseconds(100));
        cout << str[index] << endl;
    }

    sleep_for(milliseconds(1000));
}

/*--------------------------------------------------------*/

void diagonalEsquerdaInvert(string str)
{
    int length = size(str);

    for (int index = length - 1; index >= 0; index--) {
        for (int j = 0; j < length - index - 1; j++) {
            cout << ' ';
        }
        sleep_for(milliseconds(100));
        cout << str[index] << endl;
    }

    sleep_for(milliseconds(1000));
}

/*--------------------------------------------------------*/

void diagonalCruzadas(string str)
{
    int length = size(str);

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (i == j || j == length - i - 1) 
                cout << str[j];
            else
                cout << " ";
        }
        cout << endl;
        sleep_for(milliseconds(100));
    }
    
    sleep_for(milliseconds(1000));
}

/*--------------------------------------------------------*/

void diagonalEmV(string str)
{
    int length = size(str);

    
    sleep_for(milliseconds(1000));
}

/*--------------------------------------------------------*/

int main ()
{

    string str;
    cout << "escreva uma palavra: " << endl;
    cin >> str;
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
            case '4':                   //Em V
                clearScreen();
                diagonalEmV(str);
                break;
            case '5':                   //Deslizante

            case 'T':
            case 't':
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

/*
NOTAS:

gustavo resolve o clearScreen()
e o cin >> str;
*/