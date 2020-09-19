#include<iostream>
#include<string>
#include<time.h>
using namespace std;
int Guess(int);
int main()
{
    srand(time(NULL));
    int num = 1 + rand() % 10 + 1;

    cout << " ### Welcome to guessing number game ### " << endl ;
    cout << " Secret number has been chosen " << endl ;

    int random = Guess(num) ;

    cout << " Congratulation " << endl ;
    cout << " the secret number is " << num << endl ;
    cout << " You made " << random << " guesses " << endl ;
    return 0;
}
int Guess (int num)
{
    int inputnum , random = 0 ;
    do
    {
        cout << " Guess the number (1 to 10) : " ;
        cin >> inputnum;
        if ( inputnum < num ) cout << " The secret number is lower " << endl ;
        else if (inputnum > num ) cout << " The secret number is hight " << endl;

        random++ ;

    }while ( inputnum != num );
    return random;
}