#include<iostream>
void output();
using namespace std;
main()
{
  while(true)
  {
  string day;
  int total_purchase;
  output();
  }
}

void output()
{
  string day ;
  int total_purchase;
  float discount;
  float payable_amount;
  cout << " enter days ";
  cin>> day;
  cout << " enter total_purchase " ;
  cin >> total_purchase;
  if(day== "sunday")
  discount=(total_purchase/100)*10;
  payable_amount=total_purchase-discount;
    {
   cout<< " payable_amount is : " << payable_amount << endl;
   }
   if(day!="sunday")
    payable_amount=total_purchase;
     {
      cout<< " payable_amount is : "<< payable_amount << endl;
     }
}
   
  