#include <iostream>
using namespace std;
int main()
{
    const int size = 3; 
    int array[size] = {111,153 ,3};
    int temp, a, sum =0;
    for (int i = 0; i < size; i++)
    {
        temp = array[i];
        for (int j = 0; temp != 0;)
        {
            a = temp%10;
            temp = temp/10;
            sum = sum + (a*a*a);
        }
        if (sum == array[i])
        {
            cout << "number is armstrong"<<sum<<endl;
        }
        else{
            cout << "number is not armstrong"<<sum<<endl;
        }
    sum =0;    
    }


    for (int i = 0; i < size; i++)
    {
        temp = array[i];
        for (int j = 0; temp != 0;)
        {
            a = temp%10;
            temp = temp/10;
            sum = sum *10+a;
        }
        if (sum == array[i])
        {
            cout << "number is palindrome"<<sum<<endl;
        }
        else{
            cout << "number is not palindrome"<<sum<<endl;
        }
    sum =0;    
    }


    
    



    return 0;
}