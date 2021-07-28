#include <iostream>
using namespace std;
int main(){
int  salary;
float Income_Tax,Global_Life_Insurance,Pension_Plan,Health_Insurance ,final_salary;

cout<<"ENTER YOUR SALARY"<<endl;
cin>>salary;

Income_Tax= (salary/100)*10;
Global_Life_Insurance=(salary/100)*2.75;
Pension_Plan=(salary/100)*2.3;
Health_Insurance=200;
 final_salary=salary-Income_Tax-Global_Life_Insurance-Pension_Plan-Health_Insurance;




cout<<"Income_Tax  :"<<Income_Tax<<endl;
cout<<"Global_Life_Insurance : "<<Global_Life_Insurance<<endl;
cout<<"Global_Life_Insurance : "<<Global_Life_Insurance<<endl;
cout<<"Pension_Plan : "<<Pension_Plan<<endl;
cout<<"Health_Insurance  : "<<Health_Insurance<<endl;

cout<<"TOUR FINSL SALARY"<<final_salary<<endl;
return 0;
}