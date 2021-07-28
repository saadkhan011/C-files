#include<iostream>
using namespace std;
int main()
{
    int uppercase;
    char character;
    cout << "Please enter chracter: ";
    cin >> character;
    if(character>='A' && character<='Z'){
        cout << "Uppercase";
    }
    if(character>='a' && character<='z'){
        cout << "Lowercase";
    }
    if(character>='1' && character<='10'){
        cout << "Integer";
    }

    return 0;
}