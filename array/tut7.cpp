// replacing the number
#include <iostream>
using namespace std;
int main()
{
    const int size = 10;
    int num, replace, found = 0;
    cout << "enter the number that you want to removee :";
    cin >> num;
    cout << "enter the number thsat you want to add :";
    cin >> replace;
    int arr[size]{2, 4, 6, 8, 10, 10, 14, 16, 18, 20};
    for (int i = 0; i < size; i++)
    {
        if (num == arr[i])
        {
            found = 1;
            arr[i] = replace;
        }

        // cout << arr[i]<<" ";
    }
    if (found == 1)
    {
        cout << "Your number has replace :";
    }
    else
        cout << "your number is not replaces :";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}