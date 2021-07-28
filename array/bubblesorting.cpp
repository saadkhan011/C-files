#include <iostream>
using namespace std;
int main()
{
    const int size = 5;
    int arr[size] = {1, -4, -8, 3, 5};
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = size-1; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }



// // 2nd method
//     const int size = 5;
//     int arr[size] = {1, -4, -8, 3, 5};
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j > size-1; j++)
//         {
//             if (arr[j] < arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i];
//     }

    return 0;
}