#include <iostream>
using namespace std;
int main()
{
    float height, weight, bmi;
    cout << "Enter weight in kg : ";
    cin >> height;
    cout << "height in meters : ";
    cin >> weight;
    bmi = weight / (height * height);
   if(bmi>=0 && bmi <=18.5){
       cout << "Underweight"<<endl;
   }
   else if(bmi>=18.5 && bmi <=24.9){
       cout << "Normal"<<endl;
   }
   else if(bmi>=25 && bmi <=29.9){
       cout << "Overweight"<<endl;
   }
   else
        cout << "Obese";

    return 0;
}