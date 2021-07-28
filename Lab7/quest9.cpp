#include <iostream>
using namespace std;
int main(){
float x,y;

cout<<" enter x value";
cin>>x;
cout<<" enter y value";
cin>>y;

if(x>0 && y>0)
{
    cout<<" point lie on first orgin";
}
else
{
    if(y==0 && x>0)
    {
        cout<<" your  lie in 1  quadrant ";
    }
    else{
        if(x<0 && y>0)
        {
            cout<<" you lie in 2 quadrant";
        }
        else{
            if(x<0 && y<0)
             cout<<" you lie in 3 quadrant";
             else{
                 if(x>0 && y<0)
                 cout<<" valur lie in 4 quadrant";
             }
        }
    }
}

return 0;
}