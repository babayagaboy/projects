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
<<<<<<< HEAD
    int start = 0;
    int totalLength = str.size();

=======
    vector<string> parts;
    string reverse_str;
    int start = 0;
    int totalLength = str.size();

    for (int i = 0; i < totalLength; ++i) {
        if (str[i] == ' ') {
            parts.push_back(str.substr(start, i - start));
            start = i + 1;
        }
    }

    parts.push_back(str.substr(start));
    
    for(int i = parts.size() - 1; i >= 0; --i) {
        reverse_str += parts[i];
        reverse_str += " ";
    }

>>>>>>> refs/remotes/origin/main
    for (int i = 0; i < str.size(); ++i) {
        for (int j = str.size() - 1; j > i; --j) {
            cout << " ";
        }

        cout << reverse_str[i] << endl;
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
        for (int i = length - 1; i > 0; --i)
            str2[i] = str2[i - 1];
        str2[0] = temp;

        sleep_for(milliseconds(50));
    }
}

/*--------------------------------------------------------*/

int main (int argc, char ** argv)
{
    signal(SIGINT, handleSIGINT);

    string str;

    if (argc > 1) {
        for (int i = 1; i < argc; ++i) {
            str += argv[i];
            if (i < argc - 1) {
                str += ' ';
            }
        }
    }

    else
        cout << "ERRO NO NUMERO DE ARGUMENTOS";

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
            case '4':                   //Diagonal Direcao, Ordem Invertida
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