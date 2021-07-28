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
      for (int j = i+1; j < size; j++)
      {
          if (array[j] > array[i])
          {
            //   found = array[i];
              array[i]=array[j];     
              array[j]=array[j+1]; 
          }   
      } 
    }
      for (int  i = 0; i < size; i++)
    {
        cout << array[i]<<" ";
    }

    
    return 0;
}
