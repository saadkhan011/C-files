#include<iostream>
using namespace std;
int main()
{
    const int size =5;
    int arr[size]={2,3,4,5,6};
    for (int i= 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout <<endl;
    for (int i= 0; i < size; i++)
    {
        cout<<i<<" ";
    }
       
    
    return 0;
}