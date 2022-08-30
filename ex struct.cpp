#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
	struct funcionarios
	{
		int cod;
        char nome[50];
        float salario;
        char depto[50];
        char cargo[50];
	};

    struct funcionarios empresa[4];
    //ou é possíverl fazer tambem:
	// int i;
    //for(i= 0; i < 4; i++)
    for(int i = 0; i < 4; i++)
    {
    	cout << "Digite o codigo: " << endl;
    	cin >> empresa[i].cod;
    	
    	cout << "Digite o nome: " << endl;
    	cin >> empresa[i].nome;
    	
    	cout << "Digite o salario: " << endl;
		cin >> empresa[i].salario;
  
  		cout << "Digite o departamento: " << endl;  	
    	cin >> empresa[i].depto;
    	
    	cout << "Digite o cargo: " << endl;
    	cin >> empresa[i].cargo;
    	
    	cout << endl;
    	
    	cout << "Digite o codigo: " << endl;
    	cin >> empresa[i].cod;
    	
    	cout << "Digite o nome: " << endl;
    	cin >> empresa[i].nome;
    	
    	cout << "Digite o salario: " << endl;
		cin >> empresa[i].salario;
  
  		cout << "Digite o departamento: " << endl;  	
    	cin >> empresa[i].depto;
    	
    	cout << "Digite o cargo: " << endl;
    	cin >> empresa[i].cargo;
    	
    	cout << endl;
    	
    	cout << "Digite o codigo: " << endl;
    	cin >> empresa[i].cod;
    	
    	cout << "Digite o nome: " << endl;
    	cin >> empresa[i].nome;
    	
    	cout << "Digite o salario: " << endl;
		cin >> empresa[i].salario;
  
  		cout << "Digite o departamento: " << endl;  	
    	cin >> empresa[i].depto;
    	
    	cout << "Digite o cargo: " << endl;
    	cin >> empresa[i].cargo;
    	
    	cout << endl;
    	
    	cout << "Digite o codigo: " << endl;
    	cin >> empresa[i].cod;
    	
    	cout << "Digite o nome: " << endl;
    	cin >> empresa[i].nome;
    	
    	cout << "Digite o salario: " << endl;
		cin >> empresa[i].salario;
  
  		cout << "Digite o departamento: " << endl;  	
    	cin >> empresa[i].depto;
    	
    	cout << "Digite o cargo: " << endl;
    	cin >> empresa[i].cargo;
    	
    	cout << endl;
	}


    cout << "mostra todos os funcionarios." << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << empresa[i].cod << endl;
        cout << empresa[i].nome << endl;
        cout << empresa[i].salario << endl;
        cout << empresa[i].depto << endl;
        cout << empresa[i].cargo << endl;
    }
	
	return 0;
}
