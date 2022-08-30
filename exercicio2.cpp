#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;


int main(void)
{
	long int fibonacci(int n);
//Sequencia fibonacci 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55..
    int n;
    cout << "Escolha a posicao: ";
    cin >> n;
    cout << "Posicao da sequencia de fibonnaci: " << n << fibonacci(n);
}

long fibonacci(int n)
{
    int cont;
    long int x = 0, z = 1;
    
    if(n % 2 == 0)
    {
        for(cont = 2; cont != n; cont = cont + 2)
        {
            x = x + z;
            z = x + z;
        }
        return z;
    }
    else
    {
        for(cont = 1; cont != n; cont = cont + 2)
        {
            x = x + z;
            z = x + z;
        }
            return x;
    }
}
