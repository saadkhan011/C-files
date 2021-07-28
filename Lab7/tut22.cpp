#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "please enter your first number : ";
    cin >> a;
    cout << "please enter your second number : ";
    cin >> b;
    if(a>b){
        cout << "a is greater than b"<<endl;
        cout << "Enter value of a : "<<a <<endl;
        cout << "Enter value of b : "<<b<<endl;;
        }
    if(b>a){    
        cout << "b is greater than a"<<endl;
        cout << "Enter value of a : "<<a <<endl;
        cout << "Enter value of b : "<<b<<endl;;
    }


    return 0 ;
}