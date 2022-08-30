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

	float num[10], t;
	float C[10];
	int i;setlocale(LC_ALL,"PORTUGUESE");
	
	cout << "Digite seu valor: ";

	for(int i = 1; i<= 10; i++){
	

		for(i=1;i<=10;i++)
		  {
		    scanf("%f",&num[i]);
		  }
		 for(i=1;i<=10;i++)
		   {
		     printf("\n\t Posição[%d]- Temp em Graus Celsius: %f\n",i,(0.55555*(num[i]-32)));
		    }
		return 0;

}
	
}

