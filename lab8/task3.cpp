#include <iostream>
using namespace std;
int main()
{
    int start;
    int end;
    cout << "Please enter starting  point"<<endl;
    cin >> start;
    cout << "Please enter ending  point"<<endl;
    cin >> end;
    while (start <= end)
    {
        if (start % 2 == 1)
        {
            cout << start<<endl;
        }
        start = start + 2;
    }

    return 0;
}