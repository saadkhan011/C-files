#include <iostream>
using namespace std;
int main()
{
    // stars in assending order
    for (int i = 0; i <=8 ; i++)
    {
       for (int j = 0; j <= i; j++)
       {
          cout << "*";
       }
       cout << endl;
    }


    // stars in dessending order
    for (int i = 8; i > 0 ; i--)
    {
       for (int j = 0; j <= i; j++)
       {
          cout << "*";
       }
       cout << endl;
    }


// diamond shape
 for (int i = 0; i <=8 ; i++)
    {
       for (int j = i; j < 8; j++)
       {
          cout << " ";
       }
       for (int j = 0; j <= i; j++)
       {
          cout << "*";
       }
       for (int j = 1; j <= i; j++)
       {
          cout << "*";
       }
       cout << endl;
    }
 for (int i = 8; i >= 0 ; i--)
    {
       for (int j = i; j < 8; j++)
       {
          cout << " ";
       }
       for (int j = 0; j <= i; j++)
       {
          cout << "*";
       }
         for (int j = 1; j <= i; j++)
       {
          cout << "*";
       }
       cout << endl;
    }
    

       for (int i = 0; i <=5 ; i++)
    {
       for (int j = 1; j <= i; j++)
       {
          cout << j;
       }
       cout << endl;
    }
    
       for (int i = 5; i > 0 ; i--)
    {
       for (int j = 1; j <= i; j++)
       {
          cout << j;
       }
       cout << endl;
    }
    
    
    // for (int i = 4; i < count; i++)
    // {
    //     /* code */
    // }
    
    #include <iostream>
using namespace std;


    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int space = 0; space < rows-i; ++space)
            cout << "  ";

        for(int j = i; j <= 2*i-1; ++j)
            cout << "* ";

        for(int j = 0; j < i-1; ++j)
            cout << "* ";

        cout << endl;
    }



    return 0;
}