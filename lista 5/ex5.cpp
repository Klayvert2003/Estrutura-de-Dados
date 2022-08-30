#include <iostream>
#include <stdlib.h>
#include <locale>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
	
	int count = 10, *temp, sum = 0;temp = &count;
	*temp = 20;
	temp = &sum;
	*temp = count;
	
	cout << "count = " << count << " *temp = " << *temp << " sum = " << sum;
	
	return 0;
} 

//Retorno:
//count = 20 *temp = 20 sum = 20
