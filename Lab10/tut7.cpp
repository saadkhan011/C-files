// For finding frequency
#include <iostream>
using namespace std;

int main() {
    int size = 10;
    int arr[size]={2,3,4,5,4,5,6,3,3,8};
    cout << "Please enter the number to find its frequency :";
    int num, found;
    cin >> num;
    for (int i = 0; i < size; i++)
    {
        if (num==arr[i])
        {
            found++;
        }
        
    }
    // if (found=1)
    // {
        cout << found  ;
    // }
    
    
    
    

    return 0;
}