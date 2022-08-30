/*
ENUM

As Enumera��es, s�o um tipo definido pelo usuario, utilizando-se de uma lista de identificadores. 
Os indentificadores desta lista, se assemelham a constantes.
As enumerations definem um novo tipo de vari�vel e limita desde o come�o os valores.
O formato da declara��o da enum � o seguinte -

enum [Nome_do_Tipo_enum] {
   identificador1,
   identificador2;
   ...
   identificadorN;
} [uma ou mais variaveis enum];  

    Exemplo: enum {black, blue, green, cyan, red, purple, yellow, white} cores;
    A maneira mais simples de interpretar uma enumeration � imagina-la como uma matriz 
	de apenas uma linha. Temos o nome da linha e temos as v�rias c�lulas na linha. 
	Cada constante enumerada (muitas vezes chamado de enumerator) tem um valor inteiro (caso n�o seja 
	especificado ele come�a em zero)

Exemplo:

*/
	
	
#include <iostream>
#include <locale>
using namespace std;

//defini��o do enum
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
  cout << "Digite o numero do m�s: ";
  cin >> mes;
  
  //Testando se o valor est� na faixa v�lida usando os valores da enum
  if((mes >= Janeiro) && (mes <= Dezembro))
  {
  
    //switch que determina qual mes ser� impresso na tela
    switch(mes)
    {
	    case Janeiro:
	    	cout << "Janeiro � o mes " << mes << endl;
	    break;
	    
	    case Fevereiro:
	    cout << "Fevereiro � o mes " << mes << endl;
	    break;
	    
	    case Marco:
	    	cout << "Marco � o mes " << mes << endl;
	    break;
	    
	    case Abril:
	    	cout << "Abril � o mes " << mes << endl;
	    break;
	    
	    case Maio:
	    	cout << "Maio � o mes " << mes << endl;
	    break;
	    
	    case Junho:
	    	cout << "Junho � o mes " << mes << endl;
	    break;
	    
	    case Julho:
	    	cout << "Julho � o mes " << mes << endl;
	    break;
	    
	    case Agosto:
	    	cout << "Agosto � o mes " << mes << endl;
	    break;
	    
	    case Setembro:
	    	cout << "Setembro � o mes " << mes << endl;
	    break;
	    
	    case Outubro:
	    	cout << "Outubro � o mes " << mes << endl;
	    break;
	    
	    case Novembro:
	    	cout << "Novembro � o mes " << mes << endl;
	    break;
	    
	    case Dezembro:
	    	cout << "Dezembro � o mes " << mes << endl;
	    break;
    
    }
  }
  else //sen�o estiver na faixa v�lida exibe mensagem
  {
    cout << "Valor INVALIDO!!!\n";
    
    cout << "Os valores validos para os meses do ano sao: \n\n";
    //Loop que exibe a faixa de valores v�lida
    //Note que os valores da enum s�o na realidade inteiros
    //ent�o podemos incrementa-los e usar no loop
    for(mes = Janeiro; mes <= Dezembro; mes++)
      printf("Mes: %d \n",mes);
  }
  
  system ("Pause");
  return 0;
}
