// character cancatenation
#include <iostream>
using namespace std;
int main()
{
    const int size = 10;
    int temp;
    int aray[size]={2,4,1,6,8,5,9,10,3,7};
    for (int i = 0; i < size-1; i++)
    {
        for (int j = size-1; j > 0; j--)
        {
            if (aray[j]<aray[j-1])
            {
             temp=aray[j];
             aray[j]=aray[j-1];
             aray[j-1]=temp;   
            }       
        }   
    }
    // 2nd method
    // for (int i = 0; i < size-1; i++)
    // {
    //     for (int j = 0; j < size-1; j++)
    //     {
    //         if (aray[j]>aray[j+1])
    //         {
    //          temp=aray[j];
    //          aray[j]=aray[j+1];
    //          aray[j+1]=temp;   
    //         }
            
    //     }
        
    // }
    for (int i = 0; i < size; i++)
    {
        cout << aray[i];
    }
    int num, flag=1, iter = 0;
    int index, end = size-1;
    cout << "pleaqse enter the number to find";
    cin >> num;
    for (int i = 0; i <= end;)
    {
        index = (i+end)/2;
        iter++;
        if (num==aray[index])
        {
            flag =0;
            break;
        }
        else if (num<aray[index])
        {
            end = index-1;
        }
        else{
            i = index + 1;
        }     
    }
    cout << ++iter<<endl;
    if (flag==0)
    {
        cout << "number has found";
    }
    else{
        cout << "number has not found";
    }
    

    return 0;
}