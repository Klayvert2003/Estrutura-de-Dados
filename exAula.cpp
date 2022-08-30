#include <iostream>
#include "fila.h"
#include <locale>

using namespace std;

int main() 
{
	do{
		
	int operacao;
	cout << "Escola uma das opções a seguir:" << endl;
	cout << "1- Inserir na fila" << endl;
	cout << "2- Retirar da fila" << endl;
	cout << "3- Exibir na fila" << endl;
	cout << "4- Sair do programa" << endl;
	cin >> operacao;

	setlocale(LC_ALL, "Portuguese");
	
	int op, elemento;
	Fila F1;
	op = operacao;
	int  erro;
	Create(&F1);
	
	switch(op)
	{
		case 1:
		cout << "Inserindo na Fila" << endl;
		cin >> elemento;
		Enter(&F1, &elemento, &erro);
		break;
	
		case 2:
		cout << "Retirando da fila" << endl;
		cin >> elemento;
		elemento = Out(&F1, &erro);
		break;
		
		case 3:
	
		case 4: break;
	}		
}while(operacao != 4);
	return 0;
}
