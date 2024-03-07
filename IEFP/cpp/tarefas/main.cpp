#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <string>


using namespace std;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

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

void diagonalEsquerda(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; j <= i; j++) {
            cout << ' ' << endl;
        }
        cout << str[i] << endl;
    }
}

int main ()
{
    char str[] = "gustavo";
    char escolha;

    showMenu();

    cin >> escolha;

    switch (escolha)
    {
    case 1:
        diagonalEsquerda(str);
        break;
    
    default:
        break;
    }
}