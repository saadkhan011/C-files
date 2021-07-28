#include <iostream>
using namespace std;
int main()
{
    const int size = 15;
    int num2, brk, correct = 0, win_count = 0, lose_count = 0;
    char array[size] = "Elephent";
    char array2[size] = "Book";
    char array3[size] = "Computer";
    char array4[size] = "Table";
    char array5[size] = "Chair";
    char array6[size] = "Door";
    char array7[size] = "Glass";
    char array8[size] = "Internet";
    char array9[size] = "Register";
    char array10[size] = "Headphone";
    char num, num3, num5;
    int a;
    cout << "          C program Word Search game\n";
    cout << "                *******            \n";
    cout << "             Welcome to the \n             Word Search game\n";
    cout << "                *******            \n";
    cout << "                                            \n";
    cout << "Please enter '-1' for difficulty level Easy or '-2' for Hard :";
    cin >> num2;
    if (num2 == -1)
    {
        for (int j = 0; j != 4;)
        {

            for (a = 0; a <= 2; a++)
            {
                for (int i = 0; array[i] != '\0'; i++)
                {
                    num = array[3];
                    array[3] = '*';
                    cout << array[i];
                    array[3] = num;
                }

                cout << endl;
                cout << "Please enter your character :";
                cin >> num3;
                if (array[3] == num3)
                {
                    cout << "Congratulation your answer is correct" << endl;
                    cout << array;
                    correct = 1;
                    win_count++;
                    a = 2;
                }
                else
                {
                    cout << "Sorry but your answer is wrong you can attempt few times" << endl;
                    lose_count++;
                    if (a == 2)
                    {
                        cout << endl;
                        cout << "Sorry You dont have any attempt now for this question go to next question";
                        cout << endl;
                        correct = 1;
                        
                    }
                }
            }
            cout << endl;
            cout << "If you want to end this game then press 4 otherwise press any key :";
            cin >> j;
            if (j == 4)
            {
                cout << "Your game has ended";
                break;
            }

            if (correct == 1)
            {
                for (a = 0; a <= 2; a++)
                {
                    for (int i = 0; array2[i] != '\0'; i++)
                    {
                        num = array2[2];
                        array2[2] = '*';
                        cout << array2[i];
                        array2[2] = num;
                    }
                    cout << endl;
                    cout << "Please enter your character :";
                    cin >> num3;
                    if (array2[2] == num3)
                    {
                        cout << "Congratulation your answer is correct" << endl;
                        cout << array2;
                        correct = 2;
                        win_count++;
                        a = 2;
                    }
                    else
                    {
                        cout << "Sorry but your answer is wrong you can attempt few times";
                        cout << endl;
                        lose_count++;
                        if (a == 2)
                        {
                            cout << endl;
                            cout << "Sorry You dont have any attempt now for this question move to next question";
                            cout << endl;
                            correct = 2;
                        }
                    }
                }
                cout << endl;
                cout << "If you want to end this game then press 4 otherwise press any key :";
                cin >> j;
                if (j == 4)
                {
                    cout << "Your game has ended";
                    break;
                }
            }
            if (correct == 2)
            {
                for (a = 0; a <= 2; a++)
                {
                    for (int i = 0; array3[i] != '\0'; i++)
                    {
                        num = array3[1];
                        array3[1] = '*';
                        cout << array3[i];
                        array3[1] = num;
                    }
                    cout << endl;
                    cout << "Please enter your character :";
                    cin >> num3;
                    if (array3[1] == num3)
                    {
                        cout << "Congratulation your answer is correct" << endl;
                        cout << array3;
                        correct = 3;
                        win_count++;
                        a = 2;
                    }
                    else
                    {
                        cout << "Sorry but your answer is wrong you can attempt few times";
                        cout << endl;
                        lose_count++;
                        if (a == 2)
                        {
                            cout << endl;
                            cout << "Sorry You dont have any attempt now for this question move to next question";
                            cout << endl;
                            correct = 3;
                        }
                    }
                }
                cout << endl;
                cout << "If you want to end this game then press 4 otherwise press any key :";
                cin >> j;
                if (j == 4)
                {
                    cout << "Your game has ended";
                    break;
                }
            }


            if (correct == 3)
            {
                for (a = 0; a <= 2; a++)
                {
                    for (int i = 0; array4[i] != '\0'; i++)
                    {
                        num = array4[2];
                        array4[2] = '*';
                        cout << array4[i];
                        array4[2] = num;
                    }
                    cout << endl;
                    cout << "Please enter your character :";
                    cin >> num3;
                    if (array4[2] == num3)
                    {
                        cout << "Congratulation your answer is correct" << endl;
                        cout << array4;
                        correct = 4;
                        win_count++;
                        a = 2;
                    }
                    else
                    {
                        cout << "Sorry but your answer is wrong you can attempt few times";
                        cout << endl;
                        lose_count++;
                        if (a == 2)
                        {
                            cout << endl;
                            cout << "Sorry You dont have any attempt now for this question move to next question";
                            cout << endl;
                            correct = 4;
                        }
                    }
                }
                cout << endl;
                cout << "If you want to end this game then press 4 otherwise press any key :";
                cin >> j;
                if (j == 4)
                {
                    cout << "Your game has ended";
                    break;
                }
            }


            if (correct == 4)
            {
                for (a = 0; a <= 2; a++)
                {
                    for (int i = 0; array5[i] != '\0'; i++)
                    {
                        num = array5[2];
                        array5[2] = '*';
                        cout << array5[i];
                        array5[2] = num;
                    }
                    cout << endl;
                    cout << "Please enter your character :";
                    cin >> num3;
                    if (array5[2] == num3)
                    {
                        cout << "Congratulation your answer is correct" << endl;
                        cout << array5;
                        correct = 5;
                        win_count++;
                        a = 2;
                    }
                    else
                    {
                        cout << "Sorry but your answer is wrong you can attempt few times";
                        cout << endl;
                        lose_count++;
                        if (a == 2)
                        {
                            cout << endl;
                            cout << "Sorry You dont have any attempt now for this question move to next question";
                            cout << endl;
                            correct = 5;
                        }
                    }
                }
                cout << endl;
                cout << "If you want to end this game then press 4 otherwise press any key :";
                cin >> j;
                if (j == 4)
                {
                    cout << "Your game has ended";
                    break;
                }
            }


            if (correct == 5)
            {
                for (a = 0; a <= 2; a++)
                {
                    for (int i = 0; array6[i] != '\0'; i++)
                    {
                        num = array6[2];
                        array6[2] = '*';
                        cout << array6[i];
                        array6[2] = num;
                    }
                    cout << endl;
                    cout << "Please enter your character :";
                    cin >> num3;
                    if (array6[2] == num3)
                    {
                        cout << "Congratulation your answer is correct" << endl;
                        cout << array6;
                        correct = 6;
                        win_count++;
                        a = 2;
                    }
                    else
                    {
                        cout << "Sorry but your answer is wrong you can attempt few times";
                        cout << endl;
                        lose_count++;
                        if (a == 2)
                        {
                            cout << endl;
                            cout << "Sorry You dont have any attempt now for this question move to next question";
                            cout << endl;
                            correct = 6;
                        }
                    }
                }
                cout << endl;
                cout << "If you want to end this game then press 4 otherwise press any key :";
                cin >> j;
                if (j == 4)
                {
                    cout << "Your game has ended";
                    break;
                }
            }


            if (correct == 6)
            {
                for (a = 0; a <= 2; a++)
                {
                    for (int i = 0; array7[i] != '\0'; i++)
                    {
                        num = array7[1];
                        array7[1] = '*';
                        cout << array7[i];
                        array7[1] = num;
                    }
                    cout << endl;
                    cout << "Please enter your character :";
                    cin >> num3;
                    if (array7[1] == num3)
                    {
                        cout << "Congratulation your answer is correct" << endl;
                        cout << array7;
                        correct = 7;
                        win_count++;
                        a = 2;
                    }
                    else
                    {
                        cout << "Sorry but your answer is wrong you can attempt few times";
                        cout << endl;
                        lose_count++;
                        if (a == 2)
                        {
                            cout << endl;
                            cout << "Sorry You dont have any attempt now for this question move to next question";
                            cout << endl;
                            correct = 7;
                        }
                    }
                }
                cout << endl;
                cout << "If you want to end this game then press 4 otherwise press any key :";
                cin >> j;
                if (j == 4)
                {
                    cout << "Your game has ended";
                    break;
                }
            }


            if (correct == 7)
            {
                for (a = 0; a <= 2; a++)
                {
                    for (int i = 0; array8[i] != '\0'; i++)
                    {
                        num = array8[2];
                        array8[2] = '*';
                        cout << array8[i];
                        array8[2] = num;
                    }
                    cout << endl;
                    cout << "Please enter your character :";
                    cin >> num3;
                    if (array8[2] == num3)
                    {
                        cout << "Congratulation your answer is correct" << endl;
                        cout << array8;
                        correct = 8;
                        win_count++;
                        a = 2;
                    }
                    else
                    {
                        cout << "Sorry but your answer is wrong you can attempt few times";
                        cout << endl;
                        lose_count++;
                        if (a == 2)
                        {
                            cout << endl;
                            cout << "Sorry You dont have any attempt now for this question move to next question";
                            cout << endl;
                            correct = 8;
                        }
                    }
                }
                cout << endl;
                cout << "If you want to end this game then press 4 otherwise press any key :";
                cin >> j;
                if (j == 4)
                {
                    cout << "Your game has ended";
                    break;
                }
            }


            if (correct == 8)
            {
                for (a = 0; a <= 2; a++)
                {
                    for (int i = 0; array9[i] != '\0'; i++)
                    {
                        num = array9[2];
                        array9[2] = '*';
                        cout << array9[i];
                        array9[2] = num;
                    }
                    cout << endl;
                    cout << "Please enter your character :";
                    cin >> num3;
                    if (array9[2] == num3)
                    {
                        cout << "Congratulation your answer is correct" << endl;
                        cout << array9;
                        correct = 9;
                        win_count++;
                        a = 2;
                    }
                    else
                    {
                        cout << "Sorry but your answer is wrong you can attempt few times";
                        cout << endl;
                        lose_count++;
                        if (a == 2)
                        {
                            cout << endl;
                            cout << "Sorry You dont have any attempt now for this question move to next question";
                            cout << endl;
                            correct = 9;
                        }
                    }
                }
                cout << endl;
                cout << "If you want to end this game then press 4 otherwise press any key :";
                cin >> j;
                if (j == 4)
                {
                    cout << "Your game has ended";
                    break;
                }
            }


            if (correct == 9)
            {
                for (a = 0; a <= 2; a++)
                {
                    for (int i = 0; array10[i] != '\0'; i++)
                    {
                        num = array10[1];
                        array10[1] = '*';
                        cout << array10[i];
                        array10[1] = num;
                    }
                    cout << endl;
                    cout << "Please enter your character :";
                    cin >> num3;
                    if (array10[1] == num3)
                    {
                        cout << "Congratulation your answer is correct" << endl;
                        cout << array10;
                        correct = 10;
                        win_count++;
                        a = 2;
                    }
                    else
                    {
                        cout << "Sorry but your answer is wrong you can attempt few times";
                        cout << endl;
                        lose_count++;
                        if (a == 2)
                        {
                            cout << endl;
                            cout << "Sorry You dont have any attempt now for this question move to next question";
                            cout << endl;
                            correct = 10;
                        }
                    }
                }
                cout << endl;
                cout << "If you want to end this game then press 4 otherwise press any key :";
                cin >> j;
                if (j == 4)
                {
                    cout << "Your game has ended";
                    break;
                }
            }
        }
    }

    char num4;
    if (num2 == -2)
    {
        for (int j = 0; j != 4;)
        {
            for (a = 0; a <= 2; a++)
            {
                for (int i = 0; array[i] != '\0'; i++)
                {
                    num = array[3];
                    array[3] = '*';
                    num4 = array[5];
                    array[5] = '*';
                    cout << array[i];
                    array[3] = num;
                    array[5] = num4;
                }

                cout << endl;
                cout << "Please enter your character :";
                cin >> num3;
                cout << "Please enter your 2nd character :";
                cin >> num5;
                if (array[3] == num3 && array[5] == num5)
                {
                    cout << "Congratulation your answer is correct" << endl;
                    cout << array;
                    correct = 1;
                    win_count++;
                    a = 2;
                }
                else
                {
                    cout << "Sorry but your answer is wrong you can attempt few times" << endl;
                    lose_count++;
                    if (a == 2)
                    {
                        cout << endl;
                        cout << "Sorry You dont have any attempt now for this question go to next question";
                        cout << endl;
                        correct = 1;
                        break;
                    }
                }
            }
            cout << endl;
            cout << "If you want to end this game then press 4 otherwise press any key :";
            cin >> j;
            if (j == 4)
            {
                cout << "Your game has ended";
                break;
            }
            if (correct == 1)
            {
                for (a = 0; a <= 2; a++)
                {
                    for (int i = 0; array2[i] != '\0'; i++)
                    {
                        num = array2[0];
                        array2[0] = '*';
                        num4 = array2[2];
                        array2[2] = '*';
                        cout << array2[i];
                        array2[0] = num;
                        array2[2] = num4;
                    }
                    cout << endl;
                    cout << "Please enter your character :";
                    cin >> num3;
                    cout << "Please enter your 2nd character :";
                    cin >> num5;
                    if (array2[0] == num3 && array2[2] == num5)
                    {
                        cout << "Congratulation your answer is correct" << endl;
                        cout << array2;
                        correct = 2;
                        win_count++;
                        a = 2;
                    }
                    else
                    {
                        cout << "Sorry but your answer is wrong you can attempt few times";
                        ;
                        cout << endl;
                        lose_count++;
                        if (a == 2)
                        {
                            cout << endl;
                            cout << "Sorry You dont have any attempt now for this question move to next question";
                            cout << endl;
                            correct = 2;
                        }
                    }
                }
                cout << endl;
                cout << "If you want to end this game then press 4 otherwise press any key :";
                cin >> j;
                if (j == 4)
                {
                    cout << "Your game has ended";
                    break;
                }
            }



            if (correct == 2)
            {
                for (a = 0; a <= 2; a++)
                {
                    for (int i = 0; array3[i] != '\0'; i++)
                    {
                        num = array3[1];
                        array3[1] = '*';
                        num4 = array3[3];
                        array3[3] = '*';
                        cout << array3[i];
                        array3[1] = num;
                        array3[3] = num4;
                    }
                    cout << endl;
                    cout << "Please enter your character :";
                    cin >> num3;
                    cout << "Please enter your 2nd character :";
                    cin >> num5;
                    if (array3[1] == num3 && array3[3] == num5)
                    {
                        cout << "Congratulation your answer is correct" << endl;
                        cout << array3;
                        correct = 3;
                        win_count++;
                        a = 2;
                    }
                    else
                    {
                        cout << "Sorry but your answer is wrong you can attempt few times";
                        ;
                        cout << endl;
                        lose_count++;
                        if (a == 2)
                        {
                            cout << endl;
                            cout << "Sorry You dont have any attempt now for this question move to next question";
                            cout << endl;
                            correct = 3;
                        }
                    }
                }
                cout << endl;
                cout << "If you want to end this game then press 4 otherwise press any key :";
                cin >> j;
                if (j == 4)
                {
                    cout << "Your game has ended";
                    break;
                }
            }



            if (correct == 3)
            {
                for (a = 0; a <= 2; a++)
                {
                    for (int i = 0; array4[i] != '\0'; i++)
                    {
                        num = array4[0];
                        array4[0] = '*';
                        num4 = array4[3];
                        array4[3] = '*';
                        cout << array4[i];
                        array4[0] = num;
                        array4[3] = num4;
                    }
                    cout << endl;
                    cout << "Please enter your character :";
                    cin >> num3;
                    cout << "Please enter your 2nd character :";
                    cin >> num5;
                    if (array4[0] == num3 && array4[3] == num5)
                    {
                        cout << "Congratulation your answer is correct" << endl;
                        cout << array4;
                        correct = 4;
                        win_count++;
                        a = 2;
                    }
                    else
                    {
                        cout << "Sorry but your answer is wrong you can attempt few times";
                        ;
                        cout << endl;
                        lose_count++;
                        if (a == 2)
                        {
                            cout << endl;
                            cout << "Sorry You dont have any attempt now for this question move to next question";
                            cout << endl;
                            correct = 4;
                        }
                    }
                }
                cout << endl;
                cout << "If you want to end this game then press 4 otherwise press any key :";
                cin >> j;
                if (j == 4)
                {
                    cout << "Your game has ended";
                    break;
                }
            }


            if (correct == 4)
            {
                for (a = 0; a <= 2; a++)
                {
                    for (int i = 0; array5[i] != '\0'; i++)
                    {
                        num = array5[1];
                        array5[1] = '*';
                        num4 = array5[3];
                        array5[3] = '*';
                        cout << array5[i];
                        array5[1] = num;
                        array5[3] = num4;
                    }
                    cout << endl;
                    cout << "Please enter your character :";
                    cin >> num3;
                    cout << "Please enter your 2nd character :";
                    cin >> num5;
                    if (array5[1] == num3 && array5[3] == num5)
                    {
                        cout << "Congratulation your answer is correct" << endl;
                        cout << array5;
                        correct = 5;
                        win_count++;
                        a = 2;
                    }
                    else
                    {
                        cout << "Sorry but your answer is wrong you can attempt few times";
                        ;
                        cout << endl;
                        lose_count++;
                        if (a == 2)
                        {
                            cout << endl;
                            cout << "Sorry You dont have any attempt now for this question move to next question";
                            cout << endl;
                            correct = 5;
                        }
                    }
                }
                cout << endl;
                cout << "If you want to end this game then press 4 otherwise press any key :";
                cin >> j;
                if (j == 4)
                {
                    cout << "Your game has ended";
                    break;
                }
            }


            if (correct == 5)
            {
                for (a = 0; a <= 2; a++)
                {
                    for (int i = 0; array6[i] != '\0'; i++)
                    {
                        num = array6[1];
                        array6[1] = '*';
                        num4 = array6[3];
                        array6[3] = '*';
                        cout << array6[i];
                        array6[1] = num;
                        array6[3] = num4;
                    }
                    cout << endl;
                    cout << "Please enter your character :";
                    cin >> num3;
                    cout << "Please enter your 2nd character :";
                    cin >> num5;
                    if (array6[1] == num3 && array6[3] == num5)
                    {
                        cout << "Congratulation your answer is correct" << endl;
                        cout << array6;
                        correct = 6;
                        win_count++;
                        a = 2;
                    }
                    else
                    {
                        cout << "Sorry but your answer is wrong you can attempt few times";
                        ;
                        cout << endl;
                        lose_count++;
                        if (a == 2)
                        {
                            cout << endl;
                            cout << "Sorry You dont have any attempt now for this question move to next question";
                            cout << endl;
                            correct = 6;
                        }
                    }
                }
                cout << endl;
                cout << "If you want to end this game then press 4 otherwise press any key :";
                cin >> j;
                if (j == 4)
                {
                    cout << "Your game has ended";
                    break;
                }
            }



            if (correct == 6)
            {
                for (a = 0; a <= 2; a++)
                {
                    for (int i = 0; array7[i] != '\0'; i++)
                    {
                        num = array7[1];
                        array7[1] = '*';
                        num4 = array7[2];
                        array7[2] = '*';
                        cout << array7[i];
                        array7[1] = num;
                        array6[2] = num4;
                    }
                    cout << endl;
                    cout << "Please enter your character :";
                    cin >> num3;
                    cout << "Please enter your 2nd character :";
                    cin >> num5;
                    if (array7[1] == num3 && array7[2] == num5)
                    {
                        cout << "Congratulation your answer is correct" << endl;
                        cout << array7;
                        correct = 7;
                        win_count++;
                        a = 2;
                    }
                    else
                    {
                        cout << "Sorry but your answer is wrong you can attempt few times";
                        ;
                        cout << endl;
                        lose_count++;
                        if (a == 2)
                        {
                            cout << endl;
                            cout << "Sorry You dont have any attempt now for this question move to next question";
                            cout << endl;
                            correct = 7;
                        }
                    }
                }
                cout << endl;
                cout << "If you want to end this game then press 4 otherwise press any key :";
                cin >> j;
                if (j == 4)
                {
                    cout << "Your game has ended";
                    break;
                }
            }


            if (correct == 7)
            {
                for (a = 0; a <= 2; a++)
                {
                    for (int i = 0; array8[i] != '\0'; i++)
                    {
                        num = array8[1];
                        array8[1] = '*';
                        num4 = array8[2];
                        array8[2] = '*';
                        cout << array8[i];
                        array8[1] = num;
                        array8[2] = num4;
                    }
                    cout << endl;
                    cout << "Please enter your character :";
                    cin >> num3;
                    cout << "Please enter your 2nd character :";
                    cin >> num5;
                    if (array8[1] == num3 && array8[2] == num5)
                    {
                        cout << "Congratulation your answer is correct" << endl;
                        cout << array8;
                        correct = 8;
                        win_count++;
                        a = 2;
                    }
                    else
                    {
                        cout << "Sorry but your answer is wrong you can attempt few times";
                        ;
                        cout << endl;
                        lose_count++;
                        if (a == 2)
                        {
                            cout << endl;
                            cout << "Sorry You dont have any attempt now for this question move to next question";
                            cout << endl;
                            correct = 8;
                        }
                    }
                }
                cout << endl;
                cout << "If you want to end this game then press 4 otherwise press any key :";
                cin >> j;
                if (j == 4)
                {
                    cout << "Your game has ended";
                    break;
                }
            }


            if (correct == 8)
            {
                for (a = 0; a <= 2; a++)
                {
                    for (int i = 0; array9[i] != '\0'; i++)
                    {
                        num = array9[1];
                        array9[1] = '*';
                        num4 = array9[2];
                        array9[2] = '*';
                        cout << array9[i];
                        array9[1] = num;
                        array9[2] = num4;
                    }
                    cout << endl;
                    cout << "Please enter your character :";
                    cin >> num3;
                    cout << "Please enter your 2nd character :";
                    cin >> num5;
                    if (array9[1] == num3 && array9[2] == num5)
                    {
                        cout << "Congratulation your answer is correct" << endl;
                        cout << array9;
                        correct = 9;
                        win_count++;
                        a = 2;
                    }
                    else
                    {
                        cout << "Sorry but your answer is wrong you can attempt few times";
                        ;
                        cout << endl;
                        lose_count++;
                        if (a == 2)
                        {
                            cout << endl;
                            cout << "Sorry You dont have any attempt now for this question move to next question";
                            cout << endl;
                            correct = 9;
                        }
                    }
                }
                cout << endl;
                cout << "If you want to end this game then press 4 otherwise press any key :";
                cin >> j;
                if (j == 4)
                {
                    cout << "Your game has ended";
                    break;
                }
            }


            if (correct == 9)
            {
                for (a = 0; a <= 2; a++)
                {
                    for (int i = 0; array10[i] != '\0'; i++)
                    {
                        num = array10[0];
                        array10[0] = '*';
                        num4 = array10[2];
                        array10[2] = '*';
                        cout << array10[i];
                        array10[0] = num;
                        array10[2] = num4;
                    }
                    cout << endl;
                    cout << "Please enter your character :";
                    cin >> num3;
                    cout << "Please enter your 2nd character :";
                    cin >> num5;
                    if (array10[0] == num3 && array10[2] == num5)
                    {
                        cout << "Congratulation your answer is correct" << endl;
                        cout << array10;
                        correct = 10;
                        win_count++;
                        a = 2;
                    }
                    else
                    {
                        cout << "Sorry but your answer is wrong you can attempt few times";
                        ;
                        cout << endl;
                        lose_count++;
                        if (a == 2)
                        {
                            cout << endl;
                            cout << "Sorry You dont have any attempt now for this question move to next question";
                            cout << endl;
                            correct = 10;
                        }
                    }
                }
                cout << endl;
                cout << "If you want to end this game then press 4 otherwise press any key :";
                cin >> j;
                if (j == 4)
                {
                    cout << "Your game has ended";
                    break;
                }
            }






        }
    }
    cout << endl;
    cout << "Your correct answer is :" << win_count;
    cout << endl;
    cout << "Your wrong answer is :" << lose_count;

    return 0;
}