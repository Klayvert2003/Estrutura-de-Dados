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
    int valor=0, contador=1, soma=0;

    while( valor != -50 )
    {
        printf("%d. digite uma numeracao: ", contador);
        scanf("%d", &valor);
        if( valor != -50 )
        {
            soma += valor;
            contador++;
        }
    }
    contador--;
    printf("\nSomatoria: %d", soma);
    printf("\nMedia: %.1f\n", (float)soma/contador);
    getch();
return 0;
}

 



