#include<iostream>
using namespace std;
int main()
{
    int gross_amount,income_tax, g_l_i, p_p , h_h;
    income_tax = 10*100/gross_amount;
    g_l_i = 2.75/100*gross_amount;
    p_p = 2.3/100*gross_amount;
    h_h = 200;
cout<< "Enter gross amount";
    cin >> gross_amount;
    cout<< income_tax;
gross_amount = income_tax-g_l_i-p_p-h_h; 
cout<< " Net Salary (after tax deduction : ";
    cout << gross_amount;


    return 0;
}