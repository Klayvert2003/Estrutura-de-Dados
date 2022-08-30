#include <iostream>
#include <locale>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct produtos
    {
        char nome[10][50];
    };
    
struct produtos produtos;

int main() {

 int i;
 float cat[10], cat1[10], *p_cat;

 for(i=0; i<=9; i++) {
	 cout << "Informe o valor do produto: " << i+1 << " :";
	 cin >> cat[i];
	 cout << "Informe o nome do produto: " << i+1 << " :";
	 cin >> produtos.nome[i];
	 cout << endl;
 }

 for(i=0; i<=9; i++) {
	 p_cat = &cat[i];
	 *p_cat = *p_cat+(*p_cat * 0.0478);
	 cat1[i] = *p_cat;
	 cout <<   produtos.nome[i] << " --- Preco reajustado do produto: "  << cat1[i] << endl ;

 }
 
 	return 0;
 }
	
	


