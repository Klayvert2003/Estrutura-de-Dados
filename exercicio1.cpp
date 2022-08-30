#include<iostream>
#include<cstdlib>

using namespace std;

main()
{
    int soma=0, num;

    for (num=1;num<=100;num++)
    	soma=soma+num;
	
    cout << endl << " O TOTAL DA SOMA EM: 	" << soma ; 
    cout << "\n\n" ; 
    system("pause");
    return(0);
}
