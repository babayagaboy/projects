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
    *    4 - Diagonal Direita, Palavras Ordem Inversa  *
    *    5 - Em V                                      *
    *    6 - Deslizante                                *
    *    T - Todos                                     *
    *    E - Encerrar                                  *
    *                                                  *
    ****************************************************
    )" << endl;

    cout << "OPCAO>";
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
    int length = size(str);

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
    int length = size(str);

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

void textDeslizante(string str)
{
    int limit = 10;

    while (true)
    {
        for (int i = 0; i < limit - str.size(); i++)
        {
            clearScreen();
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            cout << str;
        }
    }
}

/*--------------------------------------------------------*/

int main ()
{

    string str = "JOSE MOURINHO";
    cout << "escreva uma palavra: " << endl;
    // cin >> str;
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
                textDeslizante(str);
                break;
            case 'T':
                clearScreen();
                diagonalEsquerda(str);
                diagonalEsquerdaInvert(str);
                diagonalCruzadas(str);
                diagonalDirOrdInvert(str);
                diagonalEmV(str);
                textDeslizante(str);
                break;
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

*/