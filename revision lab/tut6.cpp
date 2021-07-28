#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int found, num2;
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
    int num;
    cout << " please enter the target to check :";
    cin >> num;
    for (int  i = 0; i < size; i++)
    {
        cout << array[i]<<" ";
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size; j++)
        {
            if (array[i]+array[j]==num)
            {
                found = i;
                num2=j;
                break;
            }    
        }    
    }
    cout << endl;
    cout << "[ "<<num2;
    cout << ", "<<found<<" ]";
    
    return 0;
}
