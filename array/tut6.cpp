// finding frequency
#include <iostream>
using namespace std;
int main()
{
    const int size = 10;
    int num, count = 0;
    cout << "enter the number ths=at you want to find :";
    cin >> num;
    int arr[size]{2, 4, 6, 8, 10, 12, 2, 2, 8, 20};
    for (int i = 0; i < size; i++)
    {
        if (num == arr[i])
        {
            count++;
        }

        // cout << arr[i]<<" ";
    }
    if (count > 0)
    {
        cout << "Your number has found :"<<count;
    }
    else
        cout << "your number is not found";

    return 0;
}