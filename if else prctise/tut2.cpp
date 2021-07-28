#include <iostream>
using namespace std;
int main()
{
    int a, b,c,d,e, num, original_num, reverse;
    cout << "enter five digit number : ";
    cin >> original_num;

    a =  original_num%10;
    original_num = original_num/10;
    cout << a<<endl;
    cout << original_num <<endl;

    b =  original_num%10;
    original_num = original_num/10;
    cout << b<<endl;
    cout << original_num <<endl;

    c =  original_num%10;
    original_num = original_num/10;
    cout << c <<endl;
    cout << original_num <<endl;

    d =  original_num%10;
    original_num = original_num/10;
    cout << d <<endl;
    cout << original_num <<endl;

    e =  original_num%10;
    original_num = original_num/10;
    cout << e <<endl;
    cout << original_num <<endl;

    reverse = a*1+b*10+c*100+d*1000+e*10000;
    cout << reverse; 


 

    return 0;
}