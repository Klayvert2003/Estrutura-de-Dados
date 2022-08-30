#include <iostream>
#include <stdlib.h>
#include <locale>
using namespace std;

int letra(char c);
int letra(char c)
{
	switch (c) 
	{
		case 'a':
			return 1;
			break;
		case 'e':
			return 1;
			break;
		case 'i':
			return 1;
			break;
		case 'o':
			return 1;
			break;
		case 'u':
			return 1;
			break;
		default:
			return 0;
	}
}

int main()
{
	char c;
	int i;
	
	cout << "Digite o caracter para verificar:" << endl;
	cin >> c;
	
	i = letra(c);
	if (i == 1)
		cout << "Vogal" << endl;
	else
		cout << "Consoante";
	
	return 0;
}
