#include<iostream>
#include<cstdlib>
using namespace std;
	main ()
	{
		int soma = 0, x;
		for (x = 0; x<= 100;x++) //x = x+2 / x = x*2 pg / x--
				{
					soma = soma + x;
				}
		cout << endl << "O TOTAL DA SOMA E: " <<soma;
		cout <<"\n\n";
		system("pause");
		return(0);
}

