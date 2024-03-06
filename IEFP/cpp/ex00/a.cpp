#include <iostream>
#include <cstdio>

using namespace std;

int main (void)
{
    double moneywanney = 0;
    float total;

    cout << "digite o seu valor em euros: " << endl;
    cin >> moneywanney;

    total = moneywanney *1.09;

    cout << "o seu valor em dollar e: " , total;
}