#include<iostream>
#include<windows.h>
using namespace std;
void add(int n1 , int n2);
void subtract(int n1 , int n2);
void product(int n1 , int n2);
void divide(int n1, int n2);
main()
{
  while(true)
  {
  int n1;
  int n2;
  char operation;
  cout << " enter first number : " ;
  cin>> n1;
  cout << " enter second number : ";
  cin>> n2;
  cout<< " enter operator(+,-,*,/): " ;
  cin>> operation;

  if(operation== '+')
   {
     add(n1,n2);
   }
  if(operation== '-')
   {
     subtract(n1,n2);
   }
  if(operation=='*')
   {
     product(n1,n2);
    }
   if(operation=='/')
    {
      divide(n1,n2);
    }
   }
}

void add(int n1 , int n2)
{
  int sum;
  sum=n1+n2;
  cout<<" sum is : "<< sum << endl;
}
void subtract(int n1 , int n2 )
{
  int minus;
  minus=n1-n2;
  cout<<" minus is : " << minus<<endl;
}

void product(int n1 , int n2 )
{
  int multiply;
  multiply=n1*n2;
  cout<< " multiplication is :"<< multiply << endl;
}

void divide(int n1 , int n2 )
{
  int division;
  division=n1/n2;
  cout<< " division is : " << division << endl;
}

