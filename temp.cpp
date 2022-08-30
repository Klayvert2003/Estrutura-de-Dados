#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<locale.h>
using namespace std;


main()

{
float temp[10],t=10;
float C[10];
int i;setlocale(LC_ALL,"PORTUGUESE");

printf("Digite os valores da temperatura em graus Farenheit : ");

for(i=0;i<10;i++)
  {
    scanf("%f",&temp[i]);
  }
 for(i=0;i<10;i++)
   {
     printf("\n\t Posição[%d]- Temp em Graus Celsius: %f\n",i,(0.55555*(temp[i]-32)));
    }
return 0;

}

	


