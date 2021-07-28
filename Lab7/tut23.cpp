#include<iostream>
using namespace std;
int main()
{
int sale_price, purschase_price, profit;
cout << " please enter your sale price : ";
cin >> sale_price;
cout << " please enter your purchase price : ";
cin >> purschase_price;
profit = sale_price-purschase_price;
if(profit>0){
    cout << " Profit ";
}
else{
    cout << "loss";
}

return 0;
}