#include<iostream>
using namespace std;
int main()
{
    int quad, x_axis, y_axis, origin;
    char opr;
    cout << "please esnter character : "; 
    cin >> opr;
    if(opr >='A' && opr <= 'Z'){
        cout << "Your character is uppercase";
    }
    else if(opr >='a' && opr <= 'z'){
        cout << "Your character is Lowercase";
    }
    else if(opr >='1' && opr <= '9'){
        cout << "Your character is Integer";
    }
    else
    cout << "special charater";
    return 0;
}