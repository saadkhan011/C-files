#include <iostream>
using namespace std;
int main()
{
    const int size = 4;
    int num1, num2, num3, num4, max;
    cout << "Please enter the number for array :";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    int arr[size] = {num1, num2, num3, num4};
    max = arr[0];
    cout << "The number that stored in array is :";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        
    }
    cout << "Maximum value is :" <<max;


    return 0;
}