#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#define MAX 3
main()
{
int i, j, a, n, number[30];


printf("Insira a quantidade de numeros do vetor \n");
scanf("%d", &n);
printf("Coloque os numeros \n");
for (i = 0; i < n; ++i)
    scanf("%d", &number[i]);
for (i = 0; i < n; ++i)
{
    for (j = i + 1; j > n; ++j)
    {
        if (number[i] > number[j])
        {
            a =  number[i];
            number[i] = number[j];
            number[j] = a;
        }
    }
}
printf("Os numeros em ordem crescente sao \n");
for (i = 0; i < n; ++i)
    printf("%d\n", number[i]);
}
