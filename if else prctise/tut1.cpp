#include<iostream>
using namespace std;
int main()
{
    int original_year, leap_year;
    cout << "please enter the year";
    cin >> original_year;
    if(original_year%4==0){
        cout << "year is leap";
    }
    else{
        cout<< "not leap year";
    }
    return 0;
}