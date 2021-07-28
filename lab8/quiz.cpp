#include<iostream>
using namespace std;
int main()
{
    int salary, income,income_tax, global,pension_tax, pension, health;
    cout <<"please enter your gross sallary : ";
    cin >> salary;
    income = (salary/100)*10;
    income_tax = (salary/100)*5;
    global = (salary/100)*2.75;
    pension = (salary/100)*2.3;
    pension_tax = (salary/100)*3.1;
    health = 200;
    if(salary>50000){
        salary = income-global-pension-health;
        cout << salary;
    }
    else if(salary<=37500){
        salary = income_tax-global-health-pension_tax;
        cout << salary;
    }
    return 0;
}