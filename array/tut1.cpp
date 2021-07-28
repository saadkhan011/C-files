#include<iostream>
using namespace std;
int main()
{
    const int size =5;
    int arr[size];
    for (int i= 0; i < size; i++)
    {
        cin>>arr[i];
    }
    for (int i= 0; i < size; i++)
    {
        cout<<arr[i]<<""<<endl;
    }
    int sum;
    for (int i = 0; i < size; i++)
    {
        sum = sum+arr[i];
    }
    cout << sum;
    
    
    return 0;
}