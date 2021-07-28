#include<iostream>
using namespace std;
int main()
{
    int eng;
    eng = 89;
    int phy;
    phy = 50;
    int math;
    math = 78;
    int chem;
    chem = 99;
    int itc;
    itc = 27;
    int sum;
    sum = 343;
    cout << "percentage = ";
    cout << ((eng+phy+math+chem+itc)*100)/500;
    cout << "%";

    return 0;
}