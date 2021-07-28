#include <iostream>
using namespace std;
int main()
{
	const int size = 10;
	int arr[size] = { 1,1,1,1,1,1,1,1,1,1};
	int found = 0;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}
	cout << endl;
	for (int i = 0; i<= size / 2; i++)
	{
		if (arr[i] != arr[size-1-i])
		{
			found = 1;
			break;
		}

	}
	if (found == 1)
	{
		cout << "Array is not palindrome" << endl;
	}
	else
	{
		cout << "Array is palindrome" << endl;
	}

	return 0;
}