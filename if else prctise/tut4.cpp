#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char opr;
    cout << "Please enter first number : ";
    cin >> num1;
    cout << "Please enter first number : ";
    cin >> num2;
    cout << "Please enter Operator number : ";
    cin >> opr;
    if(opr=='+'){
        cout << num1+num2;
    }
    if(opr=='-'){
        cout << num1-num2;
    }
    if(opr=='*'){
        cout << num1*num2;
    }
    if(opr=='%'){
        cout << num1+num2;
    }
    if(opr=='/'){
        cout << num1+num2;
    }
    

    return 0;
}