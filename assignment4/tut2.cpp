#include <iostream>
using namespace std;
int main()
{
    const int size = 11;
    int largest, second, repeat;
    int num = 1, num2, num3;
    int score = 0;
    char array[size] = {'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T'};
    char array2[size];

    // cout << array;
    cout << "Please enter the number of student :";
    cin >> num3;
    int array3[num3];
    int array4[num3];
    for (int i = 0; i < num3; i++)
    {

        cout << "Please enter your serial number :";
        cin >> array3[i];
        repeat = array3[0];
        if (array3[i] == array3[i-1])
        {  
            cout << "serial number is same enter the serial number again :";
            cin >> array3[i];
        }
        cout << "Please enter your answer :";
        cin.ignore();
        cin.getline(array2, size);
        // cout << array2;
        // cout << "Your total score is :";
        for (int j = 0; array[j] != '\0'; j++)
        {
            if (array2[j] == array[j] && array[j] != ' ')
            {
                score = score + 2;
            }
            else if (array2[j] == ' ')
            {
                score = score;
            }
            else if (array2[j] != array[j])
            {
                score = score - 1;
            }
        }
        array4[i] = score;
        // cout << score << endl;
        score = 0;
    }
    // for (int j = 0; j < num3; j++)
    // {
    //     cout << array3[j];
    // }
    // cout << endl;
    // for (int j = 0; j < num3; j++)
    // {
    //     cout << array4[j];
    // }

    if (array4[0] < array4[1])
    {
        largest = array4[1];
        second = array4[0];
    }
    else
    {
        largest = array4[0];
        second = array4[1];
    }
    for (int i = 2; i < num3; i++)
    {

        if (array4[i] > largest)
        {
            second = largest;
            largest = array4[i];
        }

        else if (array4[i] > second && array4[i] != largest)
        {
            second = array4[i];
        }
    }
    int max = array4[0];
    int store;
    for (int k = 0; k < num3; k++)
    {
        if (max < array4[k])
        {
            max = array4[k];
            store = array3[k];
        }
    }
    cout << "The winner student is :" << store << " with marks :" << max;
    cout << endl;

    // cout << "Second Largest Element in array is: " << second;
    for (int k = 0; k < num3; k++)
    {
        if (array4[k] == second)
        {
            cout << "Runner up is :";
            cout << array3[k] << " with marks :";
            cout << second;
        }
    }
    cout << endl;
    cout << "marks of student are :" << endl;
    for (int j = 0; j < num3; j++)
    {
        cout << array3[j] << "  " << array4[j] << endl;
    }

    return 0;
}