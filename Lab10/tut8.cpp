// For finding index
#include <iostream>
using namespace std;

int main() {
    int size = 10;
    int arr[size]={2,3,4,5,4,5,6,3,3,8};
    cout << "Please enter the number to find its location :";
    int num;
    cin >> num;
    cout << "The location of "<<num<<" is :"; 
    for (int i = 0; i < size; i++)
    {
        if (num==arr[i])
        {
            cout << i<<" ";
        }
        
    }

    

    
    
    

    return 0;
}