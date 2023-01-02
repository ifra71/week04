#include<iostream>
using namespace std;
void chkresult(int marks);
main()
{
  int marks ;
  while(true)
 {
  cout << " enter your marks ";
  cin >> marks;
  chkresult(marks);
  }
}
void chkresult(int marks)
{ 
 if(marks>50)
  {
    cout << " PASS " ;
  }
  if(marks<50)
  {
    cout << " FAIL " ;
  }
  if(marks==50)
  {
    cout << " WORK HARD BRO";
  }
}
