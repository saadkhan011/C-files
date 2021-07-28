#include <iostream>
using namespace std;
int main()
{
    cout << "          C program quiz game\n";
    cout << "                *******            \n";
    cout << "             Welcome to the \n               quiz game\n";
    cout << "                *******            \n";
    cout << "           Become a Millionaire\n";
    cout << "                *******           \n";
    cout << "                                            \n";
    char question_1, question_2, question_3;
    cout << "What is the capital of pakistan?\n";
    cout << "A. Islamabad        B. Karachi  \n";
    cout << "C. Islamabad        D. Karachi  \n";
    cout << "Please enter the option A B C or D :";
    cin >> question_1;
    cout << "                                            \n";
    cout << "What is the national animal of Pakistan?\n";
    cout << "A. Lion            B. Elephant  \n";
    cout << "C. Dog             D. Markhor  \n";
    cout << "Please enter the option A B C or D :";
    cin >> question_2;
    cout << "                                            \n";
    cout << "What is the color of flag?\n";
    cout << "A. Blue            B. Green  \n";
    cout << "C. Pink            D. Yellow  \n";
    cout << "Please enter the option A B C or D :";
    cin >> question_3;
    cout << "                                            \n";
    if (question_1 == 'A' && question_2 == 'D' || question_1 == 'A' && question_3 == 'B' || question_2 == 'D' && question_3 == 'B' || question_1 == 'A' && question_2 == 'D' && question_3 == 'B')
    {
        cout << "You are eligible for next round";
    }
    else
    {
        cout << "You are not eligible for next round";
    }
    int size = 30;
    char array[size] = "What is my name?";
    // char num1[size] = "Saad"; 
    // char num1[size] = "Aslam"; 
    char array1[size] = "What is my father name?";
    // char num1[size] = "Aslam"; 
    // char num1[size] = "Saad";
    for (int i = 0; i < size; i++)
    {
        cout <<array[i];
    }
     
    return 0;
}