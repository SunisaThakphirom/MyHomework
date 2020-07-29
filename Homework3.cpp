#include <iostream>
using namespace std;
int main()
{
    float first,second,third,mid_term1,mid_term2,final1,final2,total,quizz_final;
    cout << "============QUIZZES============="<<endl;
    cout << "Enter first quizz (10) : ";
    cin >> first;
    cout << "Enter second quizz (10) : ";
    cin >> second;
    cout << "Enter third quizz (10) : ";
    cin >> third ;
    cout << "============MID-TERM============"<<endl;
    cout << "Enter mid-term (40) : ";
    cin >> mid_term1;
    cout << "============FINAL==============="<<endl;
    cout << "Enter final (50) : ";
    cin >> final1;
    quizz_final= (first+second+third)/3;
    cout << "Quizz final : " <<  quizz_final << endl;
    cout << "Mid-term : ";
    cin >> mid_term2;
    cout << "Final : ";
    cin >> final2;
    total = mid_term2+final2;
    cout << "Total : "<< quizz_final + total <<endl;
    cout << "Your score is " << ((total>=50)? "Pass." : "FALL") <<endl;
    return 0;
}