// finding number
#include <iostream>
using namespace std;
int main()
{
    const int size = 10;
    int num, found = 0;
    cout << "enter the number ths=at you want to find :";
    cin >> num;
    int arr[size]{2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    for (int i = 0; i < size; i++)
    {
        if (num == arr[i])
        {
            found = 1;
        }

        // cout << arr[i]<<" ";
    }
    if (found == 1)
    {
        cout << "Your number has found";
    }
    else
        cout << "your number is not found";

    return 0;
}