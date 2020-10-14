#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void display(string name[5] , float price[5][3])
{
   cout<<"No."<<setw(15)<<setfill(' ')<<"product"<<setw(15)<<setfill(' ')<<"price"<<setw(22)<<setfill(' ')<<"vat7%"<<setw(22)<<setfill(' ')<<"Net"<<endl;
   for (int i=0 ; i<5 ; i++)
  {
    cout << i+1 <<setw(15)<< name[i] << setw(20) << price[i][0] << setw(20) << price[i][1] << setw(20) << price[i][2] << endl;;
 }
} 
void calprice(float price[5][3])
{
  for (int i = 0; i < 5; i++) 
  {
		price[i][1] = (price[i][0] * 7/100);
		price[i][2] = price[i][0] + price[i][1];
	}
}
int main() {
	string name[5];
	float price[5][3];
	for (int i = 0; i < 5; i++) {
		cout << "Enter Product Name: ";
		cin >> name[i];
		cout << "\tprice: ";
		cin >> price[i][0];
	}
	calprice(price);
	display(name, price);
	system("pause");
	return 0;
}