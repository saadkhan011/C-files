#include <iostream>
using namespace std;
int main()
{
    const int size = 40;
    int v = 0;
    int count =0;
    char found;
    char array[size] = "Shahrukh khan";
    int len;
    for (len = 0; array[len] != '\0'; len++)
        ;
    // cout << len;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (array[i] == array[j])
            {
                found = array[j];
                v = 0;
                if (v == 0)
                {
                    array[j] = '\0';
                }
            }
        }
        cout << found;
  
    }


    return 0;
}