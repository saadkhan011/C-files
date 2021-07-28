#include<iostream>
using namespace std;
int main()
{
    float num, inch, centimeter, gallon, liter, kiklometer,
    mile,kilometer, pound, ounce, farenheit, celcius;
    char opr;
    cout << "Enter your value : ";
    cin >> num;
    cout << "Enter type of conversion : ";
    cin >> opr;
    if(opr=='I'){
        cout << 2.54*num<<" centimeter";
    }
    else if(opr=='C'){
        cout << 0.393701*num<<" inches";
    }
    else if(opr=='G'){
        cout << 0.264172*num<<" Liter";
    }
    else if(opr=='L'){
        cout << 0.264172*num<<" gallon";
    }
    else if(opr=='M'){
        cout << 1.60934*num<<" Kilometer";
    }
    else if(opr=='K'){
        cout << 0.621*num<<" mile";
    }
    else  if(opr=='P'){
        cout << 0.453*num<<" kilogram";
    }
    else if(opr=='O'){
        cout << 16*num<<" ounce";
    }
    else if(opr=='F'){
        cout << (num-32)*(5/9)<<" celcius";
    }
    else 
        cout << "Invalid entry";

    return 0;
}