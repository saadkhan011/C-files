#include<iostream>
using namespace std;
int main()
{
    int angle1, angle2, angle3, triangle;
    cout << "please enter first num : "<<endl;
    cin >> angle1;
    cout << "please enter second num"<<endl;
    cin >> angle2;
    cout << "please enter third num"<<endl;
    cin >> angle3;
    if(angle3+angle1+angle2==180){
        cout << "your angle is valid";
        }
    else{
        cout << "your angle is invalid"; 
    }

}