#include <iostream>
#include <locale>
#include "fila.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	elem elemento;
	Fila Fila1;
	int erro;
	cout << "Vamos inserir elementos na fila: " << endl;
	Create(&Fila1);
	for(int i=0; i<TAM_FILA; i++){
		cout << "Elemento " << i+1 << endl;
		cin >> elemento;
		Enter(&Fila1, &elemento, &erro);
	}
	
	cout << "Total de elementos na fila: " << Fila1.total << endl;
	cout << "Inicio da Fila: " << Fila1.inicio << endl;
	cout << "Fim da Fila: " << Fila1.fim << endl;
	cout << "Conferir se os meus elementos estão na fila" << endl;
	Print(&Fila1);
	
	cout << endl<< "Retirando um elemento da fila" << endl;
	elemento = Out(&Fila1, &erro);
	
	/*
	// esvaziando a fila
	for(; Fila1.total>0;){
		elemento = Out(&Fila1, &erro);
	}
	cout << endl << "Inicio da Fila depois de esvaziar a fila: " << Fila1.inicio << endl;
	cout << "Fim da Fila depois de esvaziar a fila: " << Fila1.fim << endl;
	*/
	cout << endl << "Quem está no inicio da Fila: " << Fila1.itens[Fila1.inicio] << endl;
	cout << "Quem está no fim da Fila: " << Fila1.itens[Fila1.fim] << endl;
	
	/*
	cout << "Retirar um elemento da fila: " << endl;
	elemento = Out(&Fila1, &erro);
	cout << "Elemento retirado: " << elemento << endl;
	*/
	cout << endl << "Verificando quais elementos permaneceram fila" << endl;
	Print(&Fila1);
}

