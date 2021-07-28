#include<iostream>
using namespace std;
int main()
{
    int length, width, area, perimeter, num;
    cout << "please enter length : "<<endl;
    cin >> length;
    cout << "please enter width"<<endl;
    cin >> width;
    area = length*width;
    perimeter = 2*(length+width);
    if(area>perimeter)
        cout << "area is greater than perimeter";
    else
        cout << "area is smalller than perimeter";

}