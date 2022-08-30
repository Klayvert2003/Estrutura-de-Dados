#include <iostream>
#include <locale>

using namespace std;

int main() {
void empilha (int *p[], int *topo, int valor){


	if (*topo<10)

	{
	
		p[*topo] = valor;
	
		*topo++;

	}

	else

		cout << "Pilha cheia!";

}


	int desempilha (int *p[], int *topo){

	if (*topo>0)

	{

		*topo--;
	
		return *p[*topo];

	}

	else

		cout << "Pilha vazia!";

	}


	return 0;
}
