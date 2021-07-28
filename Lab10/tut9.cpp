#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int arr[size];
    cout << "Please enter percentage of students :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];   
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
       
        if (arr[i]>=90 && arr[i]<=100)
        {
            cout<<"grade is A"<<endl;
        }
        if (arr[i]>=80 && arr[i]<=89)
        {
            cout<<"grade is B"<<endl;
        }
        if (arr[i]>=65 && arr[i]<=79)
        {
            cout<<"grade is C"<<endl;
        }
        if (arr[i]>=50 && arr[i]<=64)
        {
            cout<<"grade is D"<<endl;
        }
        if (arr[i]>=0 && arr[i]<=49)
        {
            cout<<"grade is F"<<endl;
        }
    }
    
    

    return 0;
}