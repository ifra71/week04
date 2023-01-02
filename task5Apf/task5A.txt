#include<iostream>
#include<windows.h>
using namespace std;
void largerno(int n1 , int n2);
main()
{
  int n1;
  int n2;
  largerno(n1,n2);
}
void largerno(int n1 , int n2 )
{
  while(true)
  {
  int n1;
  int n2;
  cout<< "enter first no. ";
  cin>>n1;
  cout<<"enter second no. " ;
  cin>>n2;
  if(n1>n2)
   {
     cout<<" n1 is larger " << n1 << endl;
   }
  if(n2>n1)
  {
   cout<< " n2 is larger " << n2 << endl;
  }
  }
}
  
