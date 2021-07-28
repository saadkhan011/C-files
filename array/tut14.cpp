#include <iostream>
using namespace std;
int main()
{
    const int size = 10;
    int flag, uppercase, lowercase, number;
    char arr[size]="ABc&123";
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i]>='A' && arr[i]<='Z')
        {
            uppercase++;
        }
        if (arr[i]>='a' && arr[i]<='z')
        {
            lowercase++;
        }
        if (arr[i]>='1' && arr[i]<='9')
        {
            number++;
        }
        else
        {
            flag++;
        }
        
    }
    cout << "uppercase :"<<uppercase<<endl;
    cout << "lowercase :"<< lowercase<<endl;
    cout <<  "number :"<<number<<endl;
    cout <<   "Special character :"<<flag<<endl;
    

    return 0;
}