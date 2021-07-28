#include<iostream>
using namespace std;
int main()
{
    const int size1 =  5, size2 =5, size3 = 10;
    int arr1[size1]={2,3,4,5,6};
    int arr2[size2]={7,8,9,10,11};
    int arr3[size3];
    int i=0;
    while (i<size1)
    {
        arr3[i] = arr1[i];
        i++;
    }
    for (int j = 0; j < size2; j++, i++)
    {
        arr3[i]=arr2[j];
    }
    for (int d = 0; d < size3; d++)
    {
        cout << arr3[d]<<" ";
    }
    
    

    return 0;
}