#include<iostream>
#include<windows.h>
using namespace std;
void iftrue(string , string);
void iffalse(string , string );
main()
{
  string a;
  string b;
  cout<< " enter a: ";
  cin>>a;
  cout<< " enter b ";
  cin>>b;
  iftrue(a,b);
  iftrue(a,b);
}

void iftrue(string a , string b)
{
  if(a==b)
   {
     cout<< " false " << endl;
   }
}
void iffalse( string a , string b )
{
   if(a!=b)
    {
     cout<< " true" << endl;
    }
}
     
  
 