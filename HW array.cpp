#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() 
{
  int numS=0;
  int Quiz[10],Mid[10],Final[10];
  char menu;
  int std,quiz,mid,final;
  cout << "======================================="  << endl;
  cout << setw(20) << " MENU "  << endl;
  cout << "======================================="  << endl;
  cout << setw(30) << "1. Input student records " << endl;
  cout << setw(33) << "2. View all student records " << endl;
  cout << setw(13) << "3. Exit " << endl;
  
  do 
  {
    cout << "Select menu : ";
    cin >> menu;
    if (menu=='1')
    {
      cout << "Input number of student : " ;
      cin >> numS;
      for (int i=0 ;i<numS;i++)
      {
        cout << "Number" << i+1 << endl;
        cout << "Input Quiz : " ;
        cin >> Quiz[i];
        cout << "Input Midterm : " ;
        cin >> Mid[i];
        cout << "Input Final : " ;
        cin >> Final[i];
        cout << endl;
      }
    }
    else if (menu == '2')
    {
      cout << "------------------------------------------" << endl;
      cout << "StdID    Quiz    Midterm    Final" << endl;
      cout << "------------------------------------------"<< endl;
      for (int i = 0 ; i < numS ; i++)
      {
        cout << i+1 << setw(10) << Quiz[i] << setw(10) << Mid[i] << setw(10) << Final[i] << endl;
        cout << endl;
      }
    }
    else if (menu == '3') exit(0);
  }while(true);
  return(0);
}