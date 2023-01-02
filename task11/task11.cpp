#include<iostream>
#include<windows.h>
using namespace std;
void challan(int speed);
main()
{
  int speed;
  cout<< " enter speed : " << endl;
  cin>> speed;
  challan(speed);
}
void challan( int speed )
{
  int speeding;
  if(speeding>100)
   {
    cout<< " HALT.. YOU WILL BE CHALLANED"<< endl;
   }
   if(speeding<100)
    {
     cout<< " perfect.you are going good "<<endl;
    }
}