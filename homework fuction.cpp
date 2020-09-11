#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[50];
    int str2,i;
    cout << " Input String : " ;
    cin >> str ;
    str2 = strlen(str);

    cout << " Reverse String : " ;
    for ( i = str2-1 ; i >= 0 ; i-- )
    {
        cout << (char) toupper(str[i]);
    }
    return 0;
}