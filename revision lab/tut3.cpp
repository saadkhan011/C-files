#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int found = 0;
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
    int num;
    cout << " please enter the number to check :";
    cin >> num;
    for (int i = 0; i < size; i++)
    {
        if (num == array[i])
        {
            found++;
        }
        
    }
   
        cout << "Number is present :"<<found;
    
    return 0;
}
