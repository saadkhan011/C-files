#include <iostream>
using namespace std;
int main()
{
    int size = 10, a = 0, sum = 0, num;
    int arr[size] = {1, 2, 35, 4, 5, 6, 87, 88, 9, 10};

    for (int i = 0; i < size; i++)
    {
        num = arr[i];
        while (num > 0)
        {
            a = num % 10;
            sum = (sum * 10) + a;
            num = num / 10;
        }
        if (arr[i] == sum)
        {
            cout << "your number is palindrome :" << sum;
            cout << endl;
            sum = 0;
        }
        else
        {
            cout << "your number is not palindrome :" << sum;
            cout << endl;
            sum = 0;
        }
    }

    return 0;
}