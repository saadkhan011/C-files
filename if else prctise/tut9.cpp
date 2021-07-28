#include<iostream>
using namespace std;
int main()
{
    float hardness, carbon, strength;
    cout << "Please enter hardness of material :";
    cin >> hardness;
    cout << "Please enter carbon content of material :";
    cin >> carbon;
    cout << "Please enter tensile strength of material :";
    cin >> strength;
    if (hardness>=50 && carbon <= 0.7 && strength >= 5600)
    {
        cout << "Grade is 10";
    }
    else if (hardness>=50 && carbon <= 0.7 && strength <5600)
    {
        cout << "Grade is 9";
    }
    else if (hardness<50 && carbon <= 0.7 && strength >= 5600)
    {
        cout << "Grade is 8";
    }
    else if (hardness>=50 && carbon > 0.7 && strength >= 5600)
    {
        cout << "Grade is 7";
    }
    else if (hardness<50 && carbon > 0.7 && strength >= 5600)
    {
        cout << "Grade is 6";
    }
    else if (hardness>=50 && carbon > 0.7 && strength < 5600)
    {
        cout << "Grade is 6";
    }
    else if (hardness<50 && carbon <= 0.7 && strength < 5600)
    {
        cout << "Grade is 6";
    }
    else if (hardness<50 && carbon > 0.7 && strength < 5600)
    {
        cout << "Grade is 5";
    }
    
 
    return 0;
}