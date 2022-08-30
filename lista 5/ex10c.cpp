#include <iostream>
#include <locale>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
int i, x, v[10];
int *p;
p= &v[10];
p = p+1;

for(i=0;i<10;i++)
{
cout << "Digite o valor da posicao " << i << endl;
cin >> v[i];
}

for(i=0;i<10;i++)
{
for(x=i+1;x<10;x++)
{
if(v[i]>v[x])
{
*p=v[i];
v[i]=v[x];
v[x]=*p;
}
}
}

for(i=0;i<10;i++)
{
cout << "Os valores em ordem crescente sao: " << v[i] << endl;
}



getchar();
cout << endl;
return(0);

}
