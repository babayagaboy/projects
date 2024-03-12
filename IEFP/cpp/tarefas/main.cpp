#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <string>
#include <cstring>

    //system("clear"); mac
    //system("cls"); wind

using namespace std;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

void showMenu()
{
    system("cls");
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

void diagonalEsquerda(char *str)
{
    for (int index = 0; str[index] != '\0'; index++) {
        for (int j = 0; j < index; j++) {
            cout << ' ';
        }
        sleep_for(milliseconds(100)); // nao esquecer de aumentar o tempo
        cout << str[index] << endl;
    }

    sleep_for(milliseconds(1000));
}

/*--------------------------------------------------------*/

void diagonalEsquerdaInvert(char *str)
{
    int lenght = strlen(str); // fazer proprio strlen() se nao for aceite

    for (int index = lenght - 1; index >= 0; index--) {
        for (int j = 0; j < lenght - index - 1; j++) {
            cout << ' ';
        }
        sleep_for(milliseconds(100));
        cout << str[index] << endl;
    }

    sleep_for(milliseconds(1000));
}

/*--------------------------------------------------------*/

void diagonalCruzadas(char *str)
{
    int lenght = strlen(str);
    char k;
    int i;
    int j;

    i = 1;

    for (int index = 0; str[index] != '\0'; index++) {
        for (j = 0; j < index; j++) {
            cout << '_';
        }
        cout << str[index];

        for (int n = lenght - 1; n > index - 1; n -= 1) {
            cout << '_';
        }

        cout << str[index] << endl;
        sleep_for(milliseconds(10));
    }
    cin >> k;
}

/*--------------------------------------------------------*/

int main ()
{
    char str[] = "JOSE MOURINHO";
    char escolha;

    while (true)
    {
        showMenu();

        cin >> escolha;

        switch (escolha)
        {
            case '1':                   //Diagonal Esquerda 
                system("cls");
                diagonalEsquerda(str);
                break;
            case '2':                   //Diagonal Esquerda, Texto Invertido 
                system("cls");
                diagonalEsquerdaInvert(str);
                break;
            case '3':                   //Diagonais Cruzadas 
                system("cls");
                diagonalCruzadas(str);
                break;
            case '4':                   //Em V

            case '5':                   //Deslizante

            //case 'T' || 't':
                break;
            //case 'E' || 'e':
                break;
            default:
                cout << "opcao invalida" << endl;
                sleep_for(milliseconds(1000));
                break;
        }
    }
}

/*
0J           XJ
1 O      x-1 O


      y
-           +


J            J
*/