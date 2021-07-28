#include <iostream>
using namespace std;
int main()
{
    int size = 4, count = 0 , sum = 0;
    int array[size] = {1, 2, 3, 4};
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << i;
        }
    }
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {

            cout << array[i];
        }
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            count++;
        }
    }
    cout << count;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            sum = sum + array[i];
        }
    }
    cout << sum;

    return 0;
}