#include<iostream>
using namespace std;
int main()
{
    int uppercase, num, lowercase, number = 0, special_character;
    char value;
    cout << "Enter 10 character : ";
    while (num < 10 )
    {
        cin >> value;
        if(value>='A' && value <='Z'){
            uppercase++;
        }
        else if(value>='a' && value <='z'){
            lowercase++;
        }
        else if(value>='0' && value <='9'){
            number++;
        }
        else{
            ++special_character;
        }
        num++;
    }
    cout << "Total Capital Letters are: " <<uppercase<<endl;
    cout <<"Total Small Letters are: "<< lowercase<<endl;
    cout << "Total Integer values are: "<<number<<endl;
    cout << "Total Special characters are: "<< special_character<<endl;
    
    return 0;
}