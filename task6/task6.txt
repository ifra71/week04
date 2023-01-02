#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printA();
void printW();
void printa();
void printI();
void printS();

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

  int main()
  {
    system("cls");
    cout<<" ";
  
    gotoxy(0,0);
    printA();
    printW();
    printa();
    printI();
    printS();
    
   }

void printA()
{  
  gotoxy(0,1);
  cout<< "            #####                            "             << endl;
  gotoxy(0,2);
  cout<< "         ##       ##                         "      <<endl;
  gotoxy(0,3);
  cout<<"         ##         ##                      "      <<endl;
  gotoxy(0,4);
  cout<< "       ##           ##                   "      <<endl;
  gotoxy(0,5); 
  cout<< "       ##            ##                  "      << endl;
  gotoxy(0,6);
  cout<< "       ###############                  "         <<endl;
  gotoxy(0,7);
  cout<< "       ###############                 "            << endl ;
  gotoxy(0,8);
  cout<< "      ##              ##              "                <<endl;
  gotoxy(0,9);
  cout<<"       ##              ##              "               <<endl;
  gotoxy(0,10);     
  cout<<"       ##              ##              "               <<endl;
  gotoxy(0,11);
}

void printW()
{
  gotoxy(0,12);
  cout << "     ###           ###           "       <<endl;
  gotoxy(0,13);
  cout << "      ###   #    ###                 "       <<endl;
  gotoxy(0,14); 
  cout << "       ##   ##   ##                 "       <<endl;
  gotoxy(0,15);
  cout << "        ###     ###                "       <<endl;
  gotoxy(0,16);
  cout << "         ##     ##                "        <<endl;
  gotoxy(0,17);
}
 
void printa()
{  
  gotoxy(0,18);
  cout<< "            #####                            "             << endl;
  gotoxy(0,19);
  cout<< "         ##       ##                         "      <<endl;
  gotoxy(0,20);
  cout<<"         ##         ##                      "      <<endl;
  gotoxy(0,21);
  cout<< "       ##           ##                   "      <<endl;
  gotoxy(0,22); 
  cout<< "       ##            ##                  "      << endl;
  gotoxy(0,23);
  cout<< "       ###############                  "         <<endl;
  gotoxy(0,24);
  cout<< "       ###############                 "            << endl ;
  gotoxy(0,25);
  cout<< "      ##             ##              "                <<endl;
  gotoxy(0,26);
  cout<<"       ##             ##              "               <<endl;
  gotoxy(0,27);    
  cout<<"       ##             ##              "               <<endl;
  gotoxy(0,28);
}
void printI()
{
  gotoxy(0,29);
  cout<< "         #####           " << endl;
  gotoxy(0,30);
  cout<< "         #####           " << endl;
  gotoxy(0,31);
  cout<< "         #####            " << endl;
  gotoxy(0,32);
  cout<< "         #####            " << endl;
  gotoxy(0,33);
  cout<< "         #####            " << endl;
  gotoxy(0,34);
  cout<< "         #####            " << endl;
  gotoxy(0,35);
  cout<< "         #####            " << endl;
  gotoxy(0,36);
  cout<< "         #####            " << endl;
  gotoxy(0,37);
  cout<< "         #####            " << endl;
}  

void printS()
{
  gotoxy(0,38);
  cout<<"        ##############             " <<endl;
  gotoxy(0,39);
  cout<<"        ##                           "<<endl;
  gotoxy(0,40);
  cout<<"         ##                         " <<endl;
  gotoxy(0,41);
  cout<<"          ###                        "<<endl;
  gotoxy(0,42);
  cout<<"            ####                          " <<endl;
  gotoxy(0,43);
  cout<<"               ###                         " <<endl;
  gotoxy(0,44);
  cout<<"                 ##                       "<<endl;
  gotoxy(0,45);
  cout<<"                   ##                   "<<endl;
  gotoxy(0,46);
  cout<<"         #############                  " <<endl;
}             

  