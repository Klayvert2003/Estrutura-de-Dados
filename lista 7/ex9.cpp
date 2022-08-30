
#include <iostream>
#include <cstdlib>
#include <locale>
#include "pilha.h"
#include <stdio.h>

int atoi(const char *str);
using namespace std;


int main(){
	char b;
	Pilha Pilha1;
	bool erro;
	int num_elem;
	
	setlocale(LC_ALL, "Portuguese");
	
	Create(&Pilha1);

	for(int i=0; i<4; i++){
		cout << "Empilhando" << endl;
		cin >> b;	
		Push(&Pilha1, &b, &erro);
	}
	cout << "Topo da Pilha1: " << Pilha1.itens[Pilha1.topo] << endl;
	
	for(int i=0; i<2; i++){	
		cout << "desempilhando" <<endl;
		Pop(&Pilha1, &erro);
		
	}
		cout << "Topo da Pilha1: " << Pilha1.itens[Pilha1.topo] << endl;
		
	for(int i=0; i<2; i++){
		cout << "Empilhando" << endl;
		cin >> b;	
		Push(&Pilha1, &b, &erro);
	}
		cout << "Topo da Pilha1: " << Pilha1.itens[Pilha1.topo] << endl;
	
		for(int i=0; i<1; i++){
		cout << "desempilhando" <<endl;
		Pop(&Pilha1, &erro);
	}
		cout << "Topo da Pilha1: " << Pilha1.itens[Pilha1.topo] << endl;
}

