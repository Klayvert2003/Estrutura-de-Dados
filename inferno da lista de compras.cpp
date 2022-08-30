#include <stdio.h>
#include <stdlib.h>
#include <locale>

using namespace std;

/*
	Dona Josefa tem uma lista de compras do supermercado, com 10 itens. 
	Cada item tem um valor pr�-definido pelo mercado (usar ENUM).
	O programa deve usar uma fun��o e passar essa lista como parametro da fun��o. 
	Dentro dessa deve verificar os valores dos itens da lista.
	Como as coisas est�o caras, dona Josefa s� vai comprar os itens at� no m�ximo 10% acima do valor. 
	Usar Switch-case para cada item da lista de compras. 
	Escolha voc� os valores de cada item da lista. 
	Exiba uma mensagem dizendo se dona Josefa comprou ou n�o o item.
*/

enum lista_mercado {aveia = 5, pera = 3, cafe = 10, banana = 4, pao = 1, presunto = 8, mussarela = 9, leite = 6, manteiga = 2, maracuja = 7};


int main()
{
  setlocale(LC_ALL, "Portuguese");
  
  int item, valor;
 for(item=0;item < (valor + 10/100);item ++)
 	{
 		scanf(item);
 		printf("Digite os itens que deseja: ", item);
				
	}
  
  //Testando se o valor est� na faixa v�lida usando os valores da enum
  if((item >= aveia) && (item <= maracuja)) 
  {
  
    //switch que determina qual mes ser� impresso na tela
    switch(item)
    {
	    case aveia:
	   	printf("� o item ", item);
	    break;
	    
	    case pera:
		printf("� o item ", item);
	    break;
	    
	    case cafe:
	    printf("� o item ", item);
	    break;
	    
	    case banana:
	    printf("� o item ", item);
	    break;
	    
	    case pao:
	   	printf("� o item ", item);
	    break;
	    
	    case presunto:	    	
		printf("� o item ", item);
	    break;
	    
	      }
  }
  else //sen�o estiver na faixa v�lida exibe mensagem
  {
    printf("Valor INVALIDO!!!", item);
    
    printf("Os valores validos para a lista de compra sao: ");
    
    for(item = aveia; item <= maracuja; item++)
      printf("item: ", item);
  }
  
  system ("Pause");
  return 0;
}
