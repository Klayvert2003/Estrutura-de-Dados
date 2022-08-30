#include <cstring>
#include <iostream>

using namespace std;

int main(void)
{
  char nome[100], sobrenome[100];
  int resultado;
  
  printf("entre com um nome: ");
  gets(nome);
  printf("entre com seu sobrenome: ");
  gets(sobrenome);
  
  resultado = strcmp(nome, sobrenome);
  
  
  if (resultado == 0)
  printf("igual\n");
  else if (resultado > 0)
  
  printf("o segundo e maior\n");
  else
  printf("o primeiro e maior\n");

}

