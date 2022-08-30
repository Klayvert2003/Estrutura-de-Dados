#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
  int i, a;
   
  cout << a;
  cin >> a;
  
  srand(time(NULL));
  
  for (i = 0; i < 10; i++)
  {
    cout << rand() % 100 << endl;
  }
  
  return 0;
}
