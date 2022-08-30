#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
main()
{
int x,tam;
int ca,ce,ci,co,cu;
char nome[30];
// inicializei todas as variaveis com zero porque sao contadores
ca = ce = ci = co = cu = 0;
printf("Digite uma frase: ");
gets(nome);
tam = strlen(nome);
for (x=1; x <= tam-1; x++)
{
if (nome[x] == 'a' || nome[x] == 'A')
ca++;
else
if (nome[x] == 'e' || nome[x] == 'E')
ce++;
else
if (nome[x] == 'i' || nome[x] == 'I')
ci++;
else
if (nome[x] == 'o' || nome[x] == 'O')
co++;
else
if (nome[x] == 'u' || nome[x] == 'U')
cu++;
}
printf("\n\nA frase tem:\n");
printf("\n%d letra a",ca);
printf("\n%d letra e",ce);
printf("\n%d letra i",ci);
printf("\n%d letra o",co);
printf("\n%d letra u",cu);
printf("\n\n");
system("pause");
return 0;
}
