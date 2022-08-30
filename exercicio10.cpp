#include <stdlib.h>
#include <locale.h>
#include <string.h>
void imprimir();
int i, aux, troca, numero[15];
int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("\n--------------------------------------------");
    printf("\nInicializando o vetor");
    for(i=0; i<15; i++)
    {
        numero[i] = 0;
    }
    imprimir();
    printf("\n--------------------------------------------");
    printf("\nInserindo valores \n");
    for(i=0; i<15; i++)
    {
        printf("\n|Posição %d |Digite um número: \t", i);
        scanf("%d%*c",&numero[i]);
    }
    printf("\n--------------------------------------------");
    imprimir();
    printf("\n--------------------------------------------");
    printf("\nVetor em ordem crescente");
    troca = 1;
    while (troca == 1)
    {
        troca = 0;        
        for (i = 0; i <= 3; i++)
        {
            if (numero[i] > numero[i + 1])
            {
                troca = 1;
                aux = numero[i];
                numero[i] = numero[i + 1];
                numero[i + 1] = aux;
            }
        }
    }
    printf("\n--------------------------------------------");
    printf("\nValores ordenados");
    imprimir();
    printf("\n--------------------------------------------");
    printf("\nvetor em ordem decrescente");
    troca = 1;
    while (troca == 1)
    {
        troca = 0;        
        for (i = 0; i <= 3; i++)
        {
            if (numero[i] < numero[i + 1])
            {
                troca = 1;
                aux = numero[i];
                numero[i] = numero[i + 1];
                numero[i + 1] = aux;
            }
        }
    }
    printf("\n--------------------------------------------");
    printf("\nValores ordenados");
    imprimir();
    printf("\n--------------------------------------------");
  
}
    
 void imprimir()
{
    printf("\n--------------------------------------------");
    for (i=0; i<15; i++)
    {
        printf("\n|Posicao: %d | Número: %d|", i, numero[i]);
    }
}
