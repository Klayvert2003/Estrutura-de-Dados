#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{

int arr[5] = { 30, 20, 50, 70, 10 };
int *parr = &arr[4];
int inx = 0;
inx = *parr++;
parr = &inx;
cout << inx << endl;
cout << *parr << endl;
cout << &arr[4];
}

//a) Sim, o c�digo compila.
//b) Ap�s executar o programa o valor de inx � 10.
//c) Ao iniciar o programa o ponteiro parr est� apontando para &arr[4] (endere�o de arr[4]) que est� alocado em 0x6ffe10.
