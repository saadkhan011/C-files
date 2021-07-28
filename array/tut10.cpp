// replacing the number
#include <iostream>
using namespace std;
int main()
{
    const int size = 10;
    int start = 0;
    int end = size-1;
    int index, iter = 0, num, flag = 0;
    int arr[size]={2, 4, 6, 8, 10, 12, 14, 16, 34, 78};
    cout << "Please enter the number :";
    cin >> num;
    while (start<=end)
    {
        index = (start+end)/2;
        cout << index;
        iter++;
        
        if (num == arr[index])
        {
            flag = 1;
            break;
        }
        
        else if (num < arr[index])
        {
            end = index -1;
          
        }
        else
        {
            start = index + 1;
            
        }
        
    }
    cout << ++iter<<endl;
  if (flag)
  {
      cout << "number found";
  }
  else
    cout << "Number not found";
  
     
   
    return 0;
}