#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

using namespace std;


int multiplica (int v1, int v2);
	void soma(int v1, int v2);
	int multiplica(int vet);
	char sobrenome(char nome);
	
	void soma (int v1, int v2)
	{
		cout << "Soma: " << v1 + v2 << endl;
	}
	
	int multiplica (int v1, int v2)
	{
		int resultado;
		resultado = v1 * v2;
		return v1 * v2;
	}
	
	int multiplica (int vet[])
	{
		int result;
		result = vet[0] * vet[1];
		return result;
	}
	
	char *sobrenome(char nome[])
	{
		char sobrenome [25];
		char nome_completo[50];
		cout << "Qual o seu sobrenome? " << endl;
		cin >> sobrenome;
		cout << "Olá, " << nome << " " << sobrenome << endl;
		
		strcat(nome, sobrenome);
		strcpy(nome_completo, strupr(nome));
		return nome_completo;
	}
	
int main (int argc, char *argv[])
{
	setlocale (LC_ALL, "Portuguese");
	
	int num1, num2, result_mult;
	int vet[2];
	char nome[25], nome_completo[50];
	
	cout << "Qual o seu nome?" << endl;
	cin >> nome;
	cout << "Digite o primeiro numero" << endl;
	cin >> num1;
	cout << "Digite o segundo numero" << endl;
	cin >> num2;
	
	result_mult = multiplica(num1,num2);
	cout << "Multiplicação sem vetor: " << result_mult << endl;
	
	/*Passagem de parâmetro por valor: cria uma cópia da variável nome*/ 
	soma(num1,num2);
	
	vet[0] = num1;
	vet[1] = num2;
	/*Passagem de parâmetro por valor: cria uma cópia da variável nome*/
	result_mult = multiplica(vet);
	cout << "Multiplicação com vetor: " << result_mult << endl;
	
	/*Passagem de parâmetro por valor: cria uma cópia da variável nome*/
	
	//nome_completo = sobrenome(nome)
	strcpy(nome_completo,sobrenome(nome));
	cout << "Nome completo: " << nome_completo << endl; 
}
