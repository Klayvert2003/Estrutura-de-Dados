/*
ENUM

As Enumerações, são um tipo definido pelo usuario, utilizando-se de uma lista de identificadores. 
Os indentificadores desta lista, se assemelham a constantes.
As enumerations definem um novo tipo de variável e limita desde o começo os valores.
O formato da declaração da enum é o seguinte -

enum [Nome_do_Tipo_enum] {
   identificador1,
   identificador2;
   ...
   identificadorN;
} [uma ou mais variaveis enum];  

    Exemplo: enum {black, blue, green, cyan, red, purple, yellow, white} cores;
    A maneira mais simples de interpretar uma enumeration é imagina-la como uma matriz 
	de apenas uma linha. Temos o nome da linha e temos as várias células na linha. 
	Cada constante enumerada (muitas vezes chamado de enumerator) tem um valor inteiro (caso não seja 
	especificado ele começa em zero)

Exemplo:

*/
	
	
#include <iostream>
#include <locale>
using namespace std;

//definição do enum
enum meses_do_ano {Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho,
Julho, Agosto, Setembro, Outubro, Novembro, Dezembro};

enum frutas {uva=6, banana, abacaxi, melancia, pera};
enum marcas {ford, channel, adidas};

#define banana 8
#define pera 10

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  
  int mes;
  cout << "Digite o numero do mês: ";
  cin >> mes;
  
  //Testando se o valor está na faixa válida usando os valores da enum
  if((mes >= Janeiro) && (mes <= Dezembro))
  {
  
    //switch que determina qual mes será impresso na tela
    switch(mes)
    {
	    case Janeiro:
	    	cout << "Janeiro é o mes " << mes << endl;
	    break;
	    
	    case Fevereiro:
	    cout << "Fevereiro é o mes " << mes << endl;
	    break;
	    
	    case Marco:
	    	cout << "Marco é o mes " << mes << endl;
	    break;
	    
	    case Abril:
	    	cout << "Abril é o mes " << mes << endl;
	    break;
	    
	    case Maio:
	    	cout << "Maio é o mes " << mes << endl;
	    break;
	    
	    case Junho:
	    	cout << "Junho é o mes " << mes << endl;
	    break;
	    
	    case Julho:
	    	cout << "Julho é o mes " << mes << endl;
	    break;
	    
	    case Agosto:
	    	cout << "Agosto é o mes " << mes << endl;
	    break;
	    
	    case Setembro:
	    	cout << "Setembro é o mes " << mes << endl;
	    break;
	    
	    case Outubro:
	    	cout << "Outubro é o mes " << mes << endl;
	    break;
	    
	    case Novembro:
	    	cout << "Novembro é o mes " << mes << endl;
	    break;
	    
	    case Dezembro:
	    	cout << "Dezembro é o mes " << mes << endl;
	    break;
    
    }
  }
  else //senão estiver na faixa válida exibe mensagem
  {
    cout << "Valor INVALIDO!!!\n";
    
    cout << "Os valores validos para os meses do ano sao: \n\n";
    //Loop que exibe a faixa de valores válida
    //Note que os valores da enum são na realidade inteiros
    //então podemos incrementa-los e usar no loop
    for(mes = Janeiro; mes <= Dezembro; mes++)
      printf("Mes: %d \n",mes);
  }
  
  system ("Pause");
  return 0;
}
