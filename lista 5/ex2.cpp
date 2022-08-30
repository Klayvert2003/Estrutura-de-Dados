#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
	
	int i;
		
	struct produto
	{
		char nome[30];
		int codigo;
		double preco;
		char fornecedor[50];
	};


	
	struct produto pro[5];
	
	for(i=0; i<5; i++)
	{
	
		cout << "Insira nome: " << endl;
		cin >> pro[i].nome;
		cout << "Insira o codigo: " << endl;
		cin >> pro[i].codigo;
		cout << "Insira o preco: " << endl;
		cin >> pro[i].preco;
		cout << "Insira o fornecedor: " << endl;
		cin >> pro[i].fornecedor;
	
	};
	
	for(i=0; i<5; i++)
	{
	
		cout << "Cliente numero " << i << endl;
		cout << "Nome: " << pro[i].nome << endl;
		cout << "Codigo: " << pro[i].codigo << endl;
		cout << "Preco: " << pro[i].preco << endl;
		cout << "Fornecedor: " << pro[i].fornecedor << endl;
		cout << "---------------------------------------------" << endl;	
	
	};
	
	
	return 0;
	
}
