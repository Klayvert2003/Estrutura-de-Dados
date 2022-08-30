#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
using namespace std;


main()


{


char nome 		[50];
char sobrenome	[50];

printf("\nEscreva seu primeiro nome\n");

gets(nome);

printf("\nEscreva seu sobrenome\n");

gets(sobrenome);
strcat (nome," ");
strcat (nome,sobrenome);
printf("\n\nNome completo: %s", nome);



}

 



