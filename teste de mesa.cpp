/*Criar um algorítmo que leia do teclado os elementos de uma matriz de inteiros de 4 X 4 e depois imprimir a matriz */
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{

int matriz[4][4];
int lin, col;

int valor;

for (lin=0; lin<4; lin++)

	{
		for (col=0;col<4;col++)
	{
		cout << "Digite um valor ";
		cin >> valor;
		matriz[lin][col] = valor;
	}

}
	for (lin=0; lin<4; lin++)
	cout << endl;
{
	for (col=0;col<4;col++)
{

	cout << "o valor da matriz e: " << 
	matriz[lin][col];


}

}

}
