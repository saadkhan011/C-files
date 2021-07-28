#include<iostream>
using namespace std;
int main()
{
    const int size =10;
    int arr[size]={2,4,6,8,10,12,14,16,18,20};
    for (int i = size-1; i >= 0; i--)
    {
        cout << arr[i]<<" ";
    }
    // int size =10;
    // int arr[size]={2,4,6,8,10,12,14,16,18,20};
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i]<<" ";
    // }
    
    
    
    return 0;
}