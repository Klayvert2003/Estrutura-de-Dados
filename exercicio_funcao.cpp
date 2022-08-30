#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

void maximo_minimo(int v[], int *tam, int *max, int *min);

void maximo_minimo(int v[], int *tam, int *max, int *min)
{
	for(int i=0;i<*tam;i++)
	{	
		if(v[i] > *max)
		{
			*max = v[i];
		}
		
		if(v[i] < *min)
		{
			*min = v[i];
		}
	}
	cout << *min << endl;
	cout << *max << endl;
}

int main()
{
	int v[] = {10, 80, 5, -10, 45, -20, 100, 200, 10};
	int max=v[0], min=v[0];
	
	int tam = sizeof(v)/sizeof(*v);
	cout << tam;
	
	
	maximo_minimo(v, &tam, &max, &min);
}
