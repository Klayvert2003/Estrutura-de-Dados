#include <iostream>
#include <stdlib.h>

int main() 
{
	struct pessoa
	{
		char nome[50];
		char sexo[10];
		int *idade;
	};
	
	struct pessoa *pessoa1=NULL, *pessoa2=NULL, *pessoa3=NULL;
	
	pessoa1= (int*)malloc(num*sizeof(int));
	
	
	for(int i=0; i<num; i++)
	{
		cout << "Qual o nome da pessoa:" << endl;
		cin >> pessoa1[i].nome;
		cout << "Qual o sexo da pessoa (M/F): " << endl;
		cin >> pessoa1[i].sexo;
		int idade;
		//int *temp = (int*)malloc(sizeof(int));
		//pessoa1[i].idade = temp;
		pessoa1[i].idade = (int*)malloc(1*sizeof(int));
		cout << "Qual a idade da pessoa: " << endl;
		//cin >> pessoa1[i].idade;
		cin >> *pessoa1[i].idade;
	}
	
	return 0;
}
