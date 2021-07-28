// for checking elemints in character array
#include <iostream>
using namespace std;
int main()
{
    const int size = 10;
    int found = 0;
    char array[size] = "ABC";
    char array1[size] = "ADcC";
    int i, j;
    for (i = 0; array[i] != '\0'; i++)
        ;
    for (j = 0; array1[j] != '\0'; j++)
        ;
    if (i == j)
    {
        for (int k = 0; array[k] != '\0'; k++)
        {
            if (array[k] == array1[k])
            {
                found = 1;
               
            }
        }
    }
    else
        cout << "Size are not same" << i << " and " << j;
    if (found ==1)
    {
        cout << "Elements are same";
    }
    else 
        cout << "Elements are not same";
    
    return 0;
}