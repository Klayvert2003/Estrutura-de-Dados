#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main()
{	
	int i, tam = 3, indice1, indice2;

	struct data_nasc
	{
		int dia;
		int mes;
		int ano;
	};
	
	struct membros
	{
		char nome[50];
		struct data_nasc nasc;
		float mensalidade;
		int dependentes;
	};
	
	struct membros clube[tam];
	
	for(i=0; i<3;i++)
	{
		cout << "insira nome: " << endl;
		cin >> clube[i].nome;
		
		cout << "insira o dia de nascimento: " << endl;
		cin >> clube[i].nasc.dia;
		
		cout << "insira o mes do nascimento: " << endl;
		cin >> clube[i].nasc.mes;
		
		cout << "insira o ano do nascimento: " << endl;
		cin >> clube[i].nasc.ano;
		
		cout << "insira a mensalidade: " << endl;	
		cin >> clube[i].mensalidade;
		
		cout << "insira o numero de dependentes: " << endl;	
		cin >> clube[i].dependentes;
	}
	
	int maior_mens, maior_dep;
	
	maior_mens = clube[i].mensalidade;
	maior_dep = clube[0].dependentes;
	
	for(i=0;i<tam;i++)
	{
		if(clube[i].mensalidade > maior_mens)
		{
		maior_mens = clube[i].mensalidade;
		indice1 = i;
		}
	
		if(clube[i].dependentes > maior_dep)
		{
		maior_mens = clube[i].dependentes;
		indice2 = i;
		}
		cout << "A pessoa que paga a maior mensalidade: " << endl;
		cout << clube[indice1].nome;
		cout << clube[indice1].mensalidade;
		
		cout << "A pessoa que tem maior numero de dependentes: " << endl;
		cout << clube[indice2].nome;
		cout << clube[indice2].dependentes;
	}
		
	return 0;
}
