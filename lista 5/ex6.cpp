#include <iostream>
#include <locale>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{//Declaração de variáveis e ponteiros
    int x; int*p;
    float y; float *l;  
    char z[3] ; char *m;

    //Apontamento de ponteiros
    p = &x;
    l = &y;
    m = &z[3];
    
    //Impressão dos valores antes da modificação
    cout << "Digite 3 numeros inteiros "  << endl;
    cin >> *p;
     cin >> *p;
      cin >> *p;
    
    cout << "Digite 3 decimais " << endl;
    cin >> *l;
	 cin >> *l;
	  cin >> *l;
	  
	cout << "Digite tres letras " << endl;
	cin >> *m;
		cin >> *m;
			cin >> *m;

   
    *p = 2014;
    *l = 9.99;
    *m =  'y'; 

	cout << "Apos a troca de valores inteiros ficou " << *p <<" " << *p <<" " << *p<< endl;
   	cout << "Apos a troca de valores decimais ficou " << *l <<" " << *l <<" " << *l<< endl;
  	cout << "Apos a troca de caracteres ficou " << *m <<" " << *m <<" " << *m<< endl;


    return 0;
}
