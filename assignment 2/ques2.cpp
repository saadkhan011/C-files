#include<iostream>
using namespace std;
int main()
{
    int value , sum;
    sum = 0;
    cout << "Please enter your value : ";
    cin >> value;
    while (value!= 0)
    {
        sum = sum + value%10;
        value = value/10;
    }
    cout << "Sum of digits is : "<< sum;
    
    
    return 0;
}