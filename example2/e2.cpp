#include<iostream>
using namespace std;
void add(int n1, int n2);
void multiply(int n1 , int n2);
void subtract(int n1 , int n2);
void divide(int n1 , int n2);

main()
{
  int n1;
  int n2;
  char operation;
  cout<< " enter first no. " ;
  cin>>n1;
  cout << " enter second no. " ;
  cin>>n2;
  cout<< " enter operator( +,_,*,/) ";
  cin>>operation;
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
    multiply(n1,n2)
  }
  
void add(int n1, int n2)
  {
  int sum;
  sum=n1+n2;
  cout<< " sum is " << sum << endl;
  }
void multiply(int n1,int n2)
  {
  int product;
  product=n1*n2;
  cout << " product is " << product << endl;
  }
void subtract(int n1 , int n2)
  {
  int sub;
  sub=n1-n2;
  cout<< " subtraction is : " << sub << endl;
  }
void divide(int n1 , int n2)
  {
  int division;
  division=n1/n2;
  cout<< " division is " << division << endl;
  }