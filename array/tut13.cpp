#include <iostream>
using namespace std;
int main()
{
    const int size1 = 10, size2 = 10;
    int flag;
    int arr1[size1] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[size2] = {1, 2, 3, 4, 5, 6, 7, 8, 6, 10};
    if (size1 == size2)
    {
        for (int i = 0; i < size1; i++)
        {
            if (arr1[i] != arr2[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << " Your number are same";
        }
        else{
            cout << " Your number are not same";
        }
    }
    else
        cout << "Size are not same";

    return 0;
}