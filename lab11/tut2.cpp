// for factorial
#include <iostream>
using namespace std;
int main()
{
    int size = 10, num =1;
    int arr[size] = {1, 2, 3, 14, 5, 6, 8, 8, 12, 10};
    for (int i = 0; i < size; i++)
    {
        
    for (int j = 1; j <= arr[i]; j++)
    {
        num = num*j;
    }
    cout <<num;
    cout <<endl;

    num=1;
    }
    
    
    

    return 0;
}