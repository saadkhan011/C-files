#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int found, num2=0;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
        if (array[i]==-1)
        {
            size = i;
            break;
        }
        
    }
    for (int  i = 0; i < size; i++)
    {
        cout << array[i]<<" ";
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size; j++)
        {
            if (array[i]>array[j])
            {
                num2++;
            }    
        }    
        cout << num2<<" ";
        num2=0;
    }

    
    return 0;
}
