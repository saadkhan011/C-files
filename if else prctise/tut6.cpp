#include<iostream>
using namespace std;
int main()
{
    int quad, quad1 ,quad2, quad3, origin, x_axis, y_axis;
cout << "Please enter x axis :";
cin >> x_axis;
cout << "Please enter y axis :";
cin >> y_axis;
if(y_axis==0 && x_axis!=0){
    cout << "Your point lies on X axis";
}
else if(x_axis==0 && y_axis!=0){
    cout << "Your point lies on Y axis";
}
else if(y_axis==0 && x_axis==0){
    cout << "Your point lies on origin";
}
else if(x_axis>0 && y_axis>0){
    cout << "Your point lies on Ist quadrant";
}
else if(x_axis<0 && y_axis<0){
    cout << "Your point lies on 3rd quadrant ";
}
else if(x_axis>0 && y_axis<0){
    cout << "Your point lies on 4th quadrant ";
}
else if(x_axis<0 && y_axis>0){
    cout << "Your point lies on 2nd quadrant ";
}
else
    cout<<"Invalid input";




    return 0;
}