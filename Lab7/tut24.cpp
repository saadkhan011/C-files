#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "please enter your first number : ";
    cin >> a;
    cout << "please enter your second number : ";
    cin >> b;
    cout << "please enter your third number : ";
    cin >> c;
    if(a>b){
        if(a>c){
            cout << "a is greater than b and c ";
        }
    }
    if(b>a){
        if(b>c){
            cout << "b is greater than a and c ";
        }
    }
    if(c>b){
        if(c>a){
            cout << "c is greater than b and a ";
        }
    }


    return 0 ;
}