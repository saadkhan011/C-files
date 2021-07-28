#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	cout << endl << endl << "\t\t---------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t    HANGMAN GAME     " << endl;
	cout << endl << "\t\t\t\t   !*!! Rules to Follow !!*!\n\n\t\t 1)First enter the Guess word\n\n\t\t 2)If you enter a space in the guess word then in blanks it will be represented\n\t\t with _ icon\n\n"
		<< "\t\t 3)All your guess word will be converted into Capital letters after entering and\n\t\t guessing character will also be converted into capital\n\n\t\t 4)Blanks will be represented"
		<< "as * and after guessing correct word it will be replaced\n\t\t by that word\n\n\t\t 5)You have only 5 chances to guess the correct word" << endl;
	cout << endl << endl << "\t\t---------------------------------------------------------------------------------------------------" << endl;
	cout << endl << "\t\t\t\t  !!!!! Now you are ready to play the game !!!!!" << endl << endl;
	
	char name[20];
	cout << "Enter your name to start the game : "; cin.getline(name, 20);
	cout << endl << "\t\t\t\t\t ** Welcome to the Game " << name << " **" << endl<<endl;
	
	char solution[100]; // original word will store by the user
	char blank[100];   // stars 
	int counter = 0;
	int right = 0;
	char guess;
	int flag = 0;

	cout << "Enter phrase or Alphabets you want to guess by the person : ";
	cin.getline(solution, 100);

	int puzzLength = strlen(solution); //length of word

	for (counter = 0; counter < puzzLength; counter++)
	{
		if (solution[counter] >= 'a' && solution[counter] <= 'z')
			solution[counter] = solution[counter] - 32;
		if (solution[counter] == ' ')
			solution[counter] = '_';

	}

	strcpy_s(blank, solution); // copy array 

	for (counter = 0; counter < puzzLength; counter=counter+2)
		blank[counter] = '*';

	int choice = 5;
	int i= 0;
	int temp = choice;
	while (i<choice)
	{
		flag = 0;
		right = 0;
		cout <<endl<< "\t\t\t\t\t The current 'blank' puzzle is: " << blank << "." << endl;
		cout << "Enter a guess." << endl;
		cin >> guess;
		if (guess >= 'a' && guess <= 'z')
			guess = guess - 32;
		for (counter = 0; counter <= puzzLength; counter++)
		{

			if (guess == solution[counter])
			{
				blank[counter] = guess;
				right = 1;
			}
			
		}
		if (right==0)
		{
			temp = temp - 1;
			cout << "Wrong guess , Choices left : " << temp << endl;
		}
		for (int check = 0; check < puzzLength; check++)
		{
			if (blank[check] == '*')
				flag = 1;
		}
		if (flag == 0)
			break;
		i++;
	}
	
	
	if (flag == 1)
	{
		cout << "\t\t\t\t\t You didnt guess all words !!\n \t\t\t\t\t\t OOPS " << name << "!!\n \t\t\t\t\t ----- YOU LOSSE THE GAME ----- " << endl;
		cout << "  The correct guess is : " << solution << endl;
	}
	else
	{
		cout << "\t\t\t\t\t CONGRATULATIONS " << name << "!!\n\n \t\t\t\t    ** You WON THE GAME **" << endl;
		cout << "  The correct guess is : " << solution << endl;
	}
	cin.get();
	return 0;
}