#include<iostream>
#include<windows.h>
using namespace std;
void iftrue(int n1 , int n2);

main()
{
  while(true)
  {
  int n1;
  int n2;
  cout << " enter first number : " ;
  cin>> n1;
  cout << " enter second number : " ;
  cin>> n2;
  iftrue(n1 , n2 );
  }
}
void iftrue(int n1 , int n2)
{
  int num1;
  int num2;
  if(n1==n2)
   {
     cout<< " true " << endl;
   }
   if(n1!=n2)
   {
     cout << " false " << endl;
   }
}
 

