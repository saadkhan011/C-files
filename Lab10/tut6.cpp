#include <iostream>
using namespace std;

int main() {
    int size = 10;
    int arr[size];
    cout << "Please enter ten number :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The values stored in array is :";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    
    

    return 0;
}