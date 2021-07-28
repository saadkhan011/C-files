// maximum number
#include <iostream>
using namespace std;
int main()
{
    const int size = 10;
    int max;
    int arr[size]{2, 4, 6, 8, 10, -1, 4, 444, 34, 78};
    max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
          max = arr[i];
        }
    }
  
        cout << "maximum number is :"<<max;
   
    return 0;
}