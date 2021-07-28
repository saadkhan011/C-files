#include <iostream>
using namespace std;
int main()
{
    int meter, centimeter, millimeter;

    cout << "Enter distance in meter : ";
    cin >> meter;
    centimeter = meter*100; 
    cout << "Distance in centimeters : "<<centimeter<<" cm"<<endl;
    millimeter = meter*1000; 
    cout << "Distance in millimeters : "<< millimeter << " mm";
     
   
    return 0;
}