#include <iostream>
using namespace std;
int main()
{

    const int size = 20;
    int array[size];
    int counter = 0;

    cout << " enter a values into array " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
        counter++;
        if (array[i] == -1)
        {
            break;
        }
    }
    for (int i = 0; i < counter-1; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < counter-1; i++)
    {
        for (int j = counter - 1; j > 0; j--)
        {
            if (array[j] > array[j - 1])
            {
                int temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            }
        }
    }
    for (int i = 0; i < counter -1; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
