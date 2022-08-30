#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

 
int main(void)
{
    float raio, altura, volume;
 
    cout << "RAIO   = "; cin >> raio;
    
    
    cout << "ALTURA = "; cin >> altura;
    
 
    volume = 3.14159 * raio * raio * altura;
 
    cout << "VOLUME = " << volume;
    
    return 0;
}
