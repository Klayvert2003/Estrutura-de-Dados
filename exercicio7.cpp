#include <stdio.h>
#include <string.h>

using namespace std;

int main(void)
{
  char nome[100], sobrenome[100];
  int comprimento;
  
  printf("Entre com seu nome: ");
  gets(nome);
  comprimento = strlen(nome);
  
  printf("Seu nome tem  %d caracteres.\n", comprimento);
  
  printf("Entre com seu sobrenome: ");
  gets(sobrenome);
  comprimento = strlen(sobrenome);
  
  printf("Seu sobrenome tem  %d caracteres.\n", comprimento);
}
