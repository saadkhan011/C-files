#include<iostream>
using namespace std;
int main()
{
    int ram, sham, ajay;
    cout << "Enter Sham age : ";
    cin >> sham;
    cout << "Enter Ram age : ";
    cin >> ram;
    cout << "Enter Ajay age : ";
    cin >> ajay;
    
    if(ram<ajay){
        if(ram<sham){
            cout << "Ram is youngest";
        }
    }
    else if(sham<ram){
        if(sham<ajay){
            cout << "Sham is youngest";
        }
    }
    else if(ajay<ram){
        if(ajay<sham){
            cout << "Ajay is youngest";
        }
    }
    else
        cout << "ages area equal";
    


    return 0;
}