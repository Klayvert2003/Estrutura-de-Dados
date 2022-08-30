#include <iostream>
#include <stdlib.h>
#include <locale>

using namespace std;

//int main()
// {	
 	//a)
 	//int a,b,*c;
 	//a = 3;
 	//b = 4;
 	//c = &a;
	//b++;
 	//*c = a+2;
 	//cout << a << b;
 	
 	//Nesse caso a = 5 pois o ponteiro apontando pra ele faz com que ele pegue seu valor inicial e some 2 logo = 5, e b = 5
 	
 	
 	//b)
 	//int a,b,*c;
	//a = 4;
	//b = 3;
	//c = &a;
	//*c = *c +1;
	//c = &b;
	//b = b+4;
	//cout << a << b << *c;
	//a = 5 por conta da linha "*c = *c +1;" onde o ponteiro faz com que ele some 1 ao seu valor original.
	//b = 7 porque o ponteiro aponta para o endereço de 'b' fazendo com que seu valor original seja somado 4.
	//c = 7 pois como aponta por ultimo a variavel 'b' logo ele tem o mesmo valor.
	
	
	//c)
	//int a,b,*c,*d,*f;
	//a = 4;
	//b = 3;
	//c = &a;
	//d = &b;
	//*c /= 2;
	//f = c;
	//c = d;
	//d = f;
	//cout << *c << *d;
	//c = 3, d = 2. Foi feita apenas a troca de valores através dos ponteiros 'c', 'd', 'f'.
	//o valor inicial da variável 'a' foi alterada pela linha "*c /= 2;" que faz com que o local apontado pelo ponteiro 'c' tenha seu valor dividido por 2.
	
	
	//d)
	
	int calcula(int);
	int main()
	{
	int a,b,c;
	char d;a=1;
	b=2;
	c=3;
	d='A';
	a+=b*c;
	d=(a>7)?d-1:d+1;
	b = calcula(b);
	c = calcula(calcula(a));
	a = c++;
	cout << a << endl << b << endl << c << endl << d << endl;
	}
	
	int calcula(int x)
	{
	int i;if ((x=x*2)>5) return(x+3);
	for(i=0;i<10;i++)
	{
	if (i<5) continue;
	if (x>8) break;
	x+=2;
	}
	return(x);
	}
	// O resultado final foi = a)37, b)10, c)38, e d)B.
	
