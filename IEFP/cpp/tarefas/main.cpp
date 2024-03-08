#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <string>
#include <cstring>


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

void diagonalEsquerda(char *str)
{
    for (int index = 0; str[index] != '\0'; index++) {
        for (int j = 0; j < index; j++) {
            cout << ' ';
        }
        sleep_for(milliseconds(300));
        cout << str[index] << endl;
    }

    sleep_for(milliseconds(1000));
}

void diagonalEsquerdaInvert(char *str)
{
    int lenght = strlen(str); // fazer proprio strlen() se nao for aceite

    for (int index = lenght - 1; str[index] != '\0'; index--) {
        for (int j = 0; j < lenght - index; j++) {
            cout << ' ';
        }
        sleep_for(milliseconds(300));
        cout << str[index] << endl;
    }

    sleep_for(milliseconds(1000));
}

void diagonalCruzadas(char *str)
{
    int lenght = strlen(str);

    for (int index = 0; str[index] != '\0' ; index++)
    {
        for (int j = 0; j < index / 2; j++) {
            cout << ' ';
        }
        sleep_for(milliseconds(300));
        cout << str[index] << endl;
        for (int j = 0; j <= (lenght - 1) / 2; j--)
        {
            cout << ' ';
        }
        
    }
        
}

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
            case '1':           //Diagonal Esquerda 
                system("cls");
                diagonalEsquerda(str);
                escolha = ' ';
            case '2':           //Diagonal Esquerda, Texto Invertido 
                system("cls");
                diagonalEsquerdaInvert(str);
                escolha = ' ';
            case '3':           //Diagonais Cruzadas 
                system("cls");
                diagonalCruzadas(str);
                escolha = ' ';
            case '4':           //Em V

            case '5':           //Deslizante

            case 'T' || 't':

            //case 'E' || 'e':
                break;
            default:
                cout << "opcao invalida" << endl;
        }
    }
}