#include<iostream>
#include<windows.h>
using namespace std;
main()
{
  int redroses;
  int whiteroses;
  int tulips;
  float price_of_redroses;
  float price_of_whiteroses;
  float price_of_tulips;
  float total_price;
  float discount;
  float payable_amount;
  string flower_name;
  cout<< " enter no. of red roses: ";
  cin>>redroses;
  cout<< " enter no. of white roses : ";
  cin>>whiteroses;
  cout<< " enter no. of tulips: ";
  cin>> tulips;
  price_of_redroses=redroses*2.00;
  price_of_whiteroses=whiteroses*4.10;
  price_of_tulips=tulips*2.50;
  total_price=price_of_redroses+price_of_whiteroses+price_of_tulips;
  if(total_price>200)
  {
  discount=(total_price/100)*20;
  payable_amount=total_price-discount;
  
   cout << "total_price is : " << total_price << endl;
   cout << "payable_amount is: " << payable_amount << endl;
  }
  if(total_price<=200)
  {
   payable_amount=price_of_redroses+price_of_whiteroses+price_of_tulips;
   cout<< " payable amount is : " << payable_amount << endl;
  }
}
  
  
  
  
  