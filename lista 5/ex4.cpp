#include <iostream>
#include <locale>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int main()
{
	char *pc;
	char str[80];
	
	pc = &str[80];

	strcat (str, "Luis ");
	strcat (str, "Fernando ");
	strcat (str, "Vitoria ");
	strcat (str, "Leticia ");
	
	cout << str << endl;
	
	return 0;
}
