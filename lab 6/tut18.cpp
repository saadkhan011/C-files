#include<iostream>
using namespace std;
int main()
{
   int num1, num2, result;

   cout << "Enter first number "; 
   cin >> num1;

    cout << "Enter second num "; 
   cin >> num2;
   result = num1%num2;
   cout << num1<<" % "<<num2;
   cout << " = "<<endl;
   cout << result;

   return 0;
}