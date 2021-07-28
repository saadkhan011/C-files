// finding index
#include <iostream>
using namespace std;
int main()
{
    // first method
    // const int size = 10;
    // int num, found = 0;
    // cout << "enter the number ths=at you want to find :";
    // cin >> num;
    // int arr[size]{2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    // for (int i = 0; i < size; i++)
    // {
    //     if (num == arr[i])
    //     {
    //         cout<<"The index of "<<arr[i]<< " is :"<<i;
    //     }
    // }
    // return 0;


// 2nd method
    const int size = 10;
    int num, index = 0;
    cout << "enter the number that you want to find :";
    cin >> num;
    int arr[size]{2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    for (int i = 0; i < size; i++)
    {
        if (num == arr[i])
        {
            index =i;
        }
    }
    if (index > 0)
    {
        cout << "Your index has found :"<<index;
    }
    else
        cout << "your number is not found";

    return 0;
}