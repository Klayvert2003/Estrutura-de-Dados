/*
4)	Construa um programa utilizando uma pilha que resolva o seguinte problema:
Armazene as placas dos carros (apenas os números) que estão estacionados numa rua sem saída estreita.
Dado uma placa verifique se o carro está estacionado na rua.
Caso esteja, informe a sequência de carros que deverá ser retirada para que o carro em questão consiga sair.
*/
#include <iostream>
#include <cstdlib>
#include <locale>
#include "pilha.h"
#include <stdio.h>
using namespace std;


int main(){
	elem placas;
	Pilha rua;
	bool erro;
	int num_elem;
	
	setlocale(LC_ALL, "Portuguese");
	
	Create(&rua);
	
	for(int i=0; i<5; i++)
	{
		cout << "placas de carros " << i+1 <<": " << endl;
		cin >> placas;
		Push(&rua, &placas, &erro);
	}
	

	cout << "Elementos da rua: " << endl;
	for(int i=0; i<5; i++)
	{
		cout << rua.itens[i] << endl;
	}
	
	Pilha carro;
	int carros;
	
	Create(&carro);
	
	for(int i=0; i<5; i++){

	cout << "Informe a placa dos carros: " << endl;
	cin >> carros;
	Push(&carro, &carros, &erro);
	}	
	
	cout << "elementos de carro: " << endl;
	for(int i=0; i<5; i++)
	{
		cout << carro.itens[i] << endl;
	}

		
		if(carros!=placas){
			cout << "o seu carro n�o est� estacionado nesta rua!" << endl;
		}
		else{
			cout << "o seu carro est� estacionado na rua" << endl;
			Pop(&rua, &erro);
			cout << "Topo da rua: " << rua.itens[rua.topo] << endl;
			cout << "carros desempilhados: " << carro.itens[carro.topo] << endl;
	
		}
	
		
	
}

