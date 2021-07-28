#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int found = 0, num2 =0;
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
        if (array[i]%2==0)
        {
            found++;
        }
        if (array[i]%2!=0)
        {
            num2++;
        }
        
    }
   
        cout << "even Number is present :"<<found<<endl;
        cout << "odd Number is present :"<<num2;
    
    return 0;
}
