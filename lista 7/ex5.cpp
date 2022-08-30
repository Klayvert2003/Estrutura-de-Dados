#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	elem rec;
	bool erro;
	Pilha pi1, pi2, pi3;
	
	Create(&pi1);
	Create(&pi2);
	Create(&pi3);
	
	for(int i=0; i<20; i++){ 
		
		cout << "insira o numero" << endl;
		cin >> rec;
		
		if(rec<0){
		
			Push(&pi3, &rec, &erro);
			
		}
		
		else{
			
			if(rec%2==0){
				Push(&pi1, &rec, &erro);
			}
			
			else{
				Push(&pi2, &rec, &erro);
			}
			
		}
			
	}
	
	cout << endl;
	
	cout << "pilha de pares: " << endl;
	for(int i=0; i<20; i++)
	{
		cout << pi1.itens[i] << ", ";
	}
	
	cout << endl;
	
	cout << "pilha de impares: " << endl;
	for(int i=0; i<20; i++){
		cout << pi2.itens[i] << ", ";
	}
	
	cout << endl;
	
	cout << "pilha de negativos: " << endl;
	for(int i=0; i<20; i++){
		cout << pi3.itens[i] << ", ";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
