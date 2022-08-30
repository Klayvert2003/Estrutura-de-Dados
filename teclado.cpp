#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

using namespace std;


main()

{


	int x = 0, inteiros;
		cout << "Digite um numero: " << endl;
	cin >> x;
	
	cout << "Voce digitou o numero: " << x << endl;
		for (inteiros = x ; x <= 100;inteiros++) //x = x+2 / x = x*2 pg / x--
				{
					x = inteiros * x;
				}
		cout << endl << "O TOTAL DA SOMA E: " <<inteiros;
		cout <<"\n\n";


	return 0;

}
	


