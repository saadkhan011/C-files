// prime number
#include <iostream>
using namespace std;
int main()
{
    int a, num, found, size = 10;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 9, 21, 10};
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        
        found=1;
      for (int a=2; a < arr[i] ; a++)
      {
            if (arr[i] % a == 0)
            {
                found = 0;   
                break;
            }
          
      } 
        if (found == 0)
        {
            cout << "not prime number :"<<arr[i]<<endl; 
        }
        else
        cout << "prime number :"<<arr[i]<<endl;

    }
    
    

    return 0;
}