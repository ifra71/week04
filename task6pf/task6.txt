#include<iostream>
using namespace std;
main()
{
  string day;
  int total_purchase;
  float discount;
  float output;
  
  cout<<" enter day ";
  cin>> day;
  cout<< " enter total purchase ";
  cin>>total_purchase;
  if(day== "sunday") 
  discount=(total_purchase/100)*10;
  output=total_purchase-discount;
  {
   cout<< " output is : " << output <<endl;
  }
  if(day!="sunday")
  output=total_purchase;
  {
   cout<< " output is : " << output << endl;
  }
 }
  
  
 