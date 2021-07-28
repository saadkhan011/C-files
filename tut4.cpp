#include<iostream>
using namespace std;
int main()
{
   float farenheet, centigrade;
   cout << "Enter temprature in farenheit";
   cin >> farenheet;
   centigrade = (farenheet-32)* 5/9;
   cout << "centigrade";
   cout << centigrade;
    return 0;
}