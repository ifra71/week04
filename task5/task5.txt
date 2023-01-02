#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printname();


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
  
    gotoxy(30,14);
    printname();
   
   }
void printname()
{
  gotoxy(30,14);
  cout << "    ##########    ###########        ##########           #####        " << endl;
   gotoxy(30,15);
  cout<< "        ##         ##                  ##        #         #     #        " << endl;
   gotoxy(30,16);
  cout<< "        ##         ##                  ##         #        #     #    " << endl;
   gotoxy(30,17);
  cout<< "        ##         #########           ##        #         #  #  #       " << endl;
  gotoxy(30,18);
  cout<< "        ##         ##                  ##      #           #     #    " << endl;
   gotoxy(30,19);
  cout<< "        ##         ##                  ##    ##            #     #     " << endl;
   gotoxy(30,20);
  cout<< "        ##         ##                  ##      ##          #     #     " << endl;
   gotoxy(30,21);
  cout<< "     #########     ##                  ##       ##        ##     ##        " << endl;
   gotoxy(30,22);
}