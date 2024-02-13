#include <iostream>

using namespace std;

int ft_bin2dec(int binary)
{
    int rem = binary;
    int decimal = 0 , base = 1;

    while (binary != 0)
    {
        rem = binary % 10; //em 1001 (9) rem vai ser igual a 100.1 <- este 1 
        decimal = decimal + rem * base; //e vai acrescentar no nr decimal 1 em base de 2
        binary = binary / 10; //passa o numero a frente (100)
        base = base * 2; //aumenta  abase para 2*2 e repete
    }
    return decimal;
}

int main()
{
    int binary;

    cout << "binary:";
    cin >> binary;
    cout << "the converted binary is: " << ft_bin2dec(binary);
    cin >> binary;
    return 0;
}