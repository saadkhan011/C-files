// character cancatenation
#include <iostream>
using namespace std;
int main()
{
    const int size1 = 6, size2 = 7, size3 =size1+size2;
    char arr1[size1]= "Hello"; 
    char arr2[size2]= "World!"; 
    char arr3[size3]; 
    int i;
    for (i = 0; arr1[i] != '\0'; i++)
    {
      arr3[i]=arr1[i];  
    }
    arr3[i]= ' ';
    i++;
    for (int j = 0; arr2[j] != '\0'; j++,i++)
    {
        arr3[i]=arr2[j];
        
    }
    // i=11;
    
    cout << arr3;
    
    

    return 0;
}