/*Homework2*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name , surname ;
    float Salary , Sale ,Total,Percent ;
    cout << "Enter Name : ";
    cin >> name ;
    cin >> surname ;
    cout << "Enter Salary : ";
    cin >> Salary ;
    cout << "Enter Sale : ";
    cin >> Sale ;
    cout << "Enter Commission Percent : ";
    cin >> Percent ;

    Total = (Sale*Percent/100)+Salary ;
    cout << "------out put------" << endl;
    cout << "Your Name = " << name << " " << surname << endl ;
    cout << "Total Revenue "<<Total << " Bath" << endl ;

    // Sunisa Thakphirom;
    return 0;
}
