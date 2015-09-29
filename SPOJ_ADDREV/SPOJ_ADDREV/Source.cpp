#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int addReversedNumber(const int, const int);
int getStringLengthWithoutTrailingZeroes(const string *);
string reverseString(string *);

int main(void)
{
	
	int firstNumber, secondNumber;


	string string = "192000";

	string.resize(3);

	cout << string;

	while(true)
	{
		cin >> firstNumber;
		cin >> secondNumber;
		cout << addReversedNumber(firstNumber, secondNumber);
	}

}

int addReversedNumber(const int firstNumber, const int secondNumber)
{
	string	firstString = to_string(firstNumber),
			secondString = to_string(secondNumber);



	return 0;
}

string reverseString(string * stringToRevert)
{
	string result;

	int spliceLength = getSt

	for (int i = 0; i < stringToRevert->size(); i++)
	{
		
	}

	return result;
}

int getStringLengthWithoutTrailingZeroes(const string * stringToCheck)
{
	int result;

	for (int i = 0; i < stringToCheck->size(); i++)
	{
		if(stringToCheck->at(i) == '0')
		{
			result = i + 1;
		}
		else
		{
			result = -1;
		}
	}

	return result;
}