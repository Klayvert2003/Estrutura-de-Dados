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
 int x, vet[10], num, encontrado=0;
 for(int x=0;x<=10;x++)
 {
 printf("\n[%d] Digite um numero: ",x);
 scanf("%d",&vet[x]);
 }
 printf("\n\n");
 printf("Digite um valor a ser pesquisado: ");
 scanf("%d",&num);
 for(int x=0;x<=10;x++)
 if(vet[x]==num)
 {
 printf("\n O numero %d esta na posicao %d: ",num,x);
 printf("\n O numero %d foi o numero %d a ser digitado: ",num,(x+1));
 encontrado=1;
 }
 if(encontrado!=1)
 printf("\n Este numero nao existe");
 printf("\n\n");
 system("pause");
 return(0);
 
}


