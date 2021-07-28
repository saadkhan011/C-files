#include <iostream>
using namespace std;
int main()
{
    const int size = 4;
    int num1, num2, num3, num4, even_count = 0;
    cout << "Please enter the number for array :";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    int arr[size] = {num1, num2, num3, num4};
    cout << "The number that stored in array is :";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << "The " <<i+1 <<" number in the array is even number :" << arr[i]<<endl;
            even_count++;
        }
    }
    // cout << endl;
    cout << "The counting of even number in the array is :" << even_count << endl;

    return 0;
}