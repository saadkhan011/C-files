#include<iostream>
using namespace std;
int main()
{
    int book_name, days, fine;
    cout << "please enter the number of days for late returning :";
    cin >> days;
    if (days<=5)
    {
        cout << "your fine is 50 paise";
    }
    else if (days>=6 && days<=10)
    {
        cout << "your fine is 1 rupees";
    }
    else if (days>10 && days<=30)
    {
        cout << "your fine is 5 rupees";
    }
    else
        cout << "your membership has gone";
    
 
    return 0;
}