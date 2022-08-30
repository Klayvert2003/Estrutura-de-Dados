#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

 int main(void)
 {
    int vetor[10];
    int x, i;
 
    printf ("digite 10 numeros\n");
    for (i = 0; i < 10; i++) 
    {
       scanf("%d", &vetor);
    }
    i = 1;
    x = vetor[0];
 
    while (i < 10) 
    {
    	int x;
        if (vetor < x)
        {
           x = vetor;
        }
        i++;
    }
 
    printf("\n O maior numero que voce digitou foi %d .\n",x);
 getch ();
    return 0;
 }
