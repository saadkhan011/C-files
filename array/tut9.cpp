// minimum number
#include <iostream>
using namespace std;
int main()
{
    const int size = 10;
    int min;
    int arr[size]{2, 4, 6, 8, 10, -1, 4, 444, 34, 78};
    min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
          min = arr[i];
        }
    }
  
        cout << "minimum number is :"<<min;
   
    return 0;
}