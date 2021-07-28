#include <iostream>
using namespace std;
int main()
{
    const int size = 10;
    int a, num, sum, count = 0;
    int arr[size] = {42, 2, 33, 5, 2, 44, 555, 4, 6,2222};
    for (int j = 0; j < size; j++)
    {
      cout << arr[j]<<" ";
      
    }
        cout<< endl;
    
    for (int i = 0; i < size; i++)
    {
        
        num = arr[i];
        while (num != 0)
        {
            count++;
            num = num / 10;
           
        }
        cout <<count<<" ";
        count = 0;
    }

    return 0;
}
