#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <sstream>

using namespace std;


int tam = 9;

int num[9];
int mat[3][3];


populando()
{
	int n;
	int *pi;
	
	for (int i= 0; i < tam; i++)
	{
		
		cout << "Informe o número: " << endl;
		cin >> n;
		
		pi = &n;
		num[i] = *pi;
	}
}

ordenar()
{
	int temp;
	
    for(int i=0; i<(tam-1); i++)
    {
    	for (int j=0; j<(tam-i-1); j++)
    	{
        	if (num[j] > num[j+1])
            {
            	temp = num[j];
            	num[j] = num[j+1];
            	num[j+1] = temp;
            }
        }
    }
}

listarVetor()
{
	int *ptr;
	
	system("cls");
	cout << "\n\nNúmeros ordenados [Vetor]\n";
	for (int i = 0; i < tam; i++)
	{
		ptr = &num[i];
		cout << *ptr << ", ";
	}
	cout << endl;
}

matriz()
{
	int ctrl = 0;
	
    for(int i=0; i < 3; i++)
    	for (int j=0; j < 3; j++)
    	{    		
    		mat[i][j] = num[ctrl];
    		ctrl++;
		}
}

listarMatriz()
{
	int *ptr;
	cout << "\n\nNúmeros ordenados [Matriz]\n";
    for(int i=0; i < 3; i++)
    {
    	for (int j=0; j < 3; j++)
		{
			ptr = &mat[i][j];
			cout << *ptr << ", ";
		}
		cout << endl;
	}
	cout << endl;
}

int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	populando();
	ordenar();
	
	matriz();
	listarVetor();
	listarMatriz();
	
	cout << endl;
	system("pause");
	return 0;
}
