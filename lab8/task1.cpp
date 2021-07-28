#include<iostream>
using namespace std;
int main()
{
    int ounce, choice, pound , grams, kilograms, num_choclate, weight;
    char opr;
    cout << "please enter the number of choclate being sold : ";
    cin >> num_choclate;
    cout << "Enter weight of one chocolate in ounces : ";
    cin >> weight;
    cout << "Enter O to calculate in ounces\nP for pounds\nG for grams\nK for kilograms "<<endl;
    cout << "Enter your choice : ";
    cin >> opr;
    ounce = num_choclate*weight;
    pound = num_choclate*weight/16;
    grams = num_choclate*weight*28.349;
    kilograms = num_choclate*weight*28.349/1000;
    if(opr=='O'){
        cout <<"weight in Ounce is : "<<  ounce;
    }
    else if(opr=='P'){
        cout <<"weight in Pound is : "<<  pound;
    }
    else if(opr=='G'){
        cout <<"weight in Gram is : "<<  grams;
    }
    else if(opr=='K'){
        cout <<"weight in Kilogram is : "<<  kilograms;
    }
    else
    cout <<"invalid choice";



    return 0;
}