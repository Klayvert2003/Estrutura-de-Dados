#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

using namespace std;


main()

{

	int x,y,tam;
		char nome[25];
		cout << "digite um nome: ";
		fgets(nome, 25, stdin);
	
		for (int i = 0; i < 4; ++i){
			printf ("%c", nome[i]);
		}
	return 0;

}
	


