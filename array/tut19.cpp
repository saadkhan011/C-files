// finding number
#include <iostream>
using namespace std;
int main()
{
    const int size = 3; 
    int array[size] = {2,4,3};
for (int i = 0; i < size; i++)
    {
       array[i]=array[i+1];
    
       array[0]=array[size-1];
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
    
    }
    return 0;
}