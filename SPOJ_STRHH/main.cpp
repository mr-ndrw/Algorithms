#include <cstdio>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printEverySecondCharacter(basic_string<char> &);

int main(){

	int numberOfTestCases;

	vector<string> strings;

	scanf("%d", &numberOfTestCases);

	string readString;

	for (int i = 0; i < numberOfTestCases; ++i)
	{
		cin >> readString;
		strings.push_back(readString);
	}

	for (std::vector<string>::iterator i = strings.begin(); i != strings.end(); ++i)
	{
		printEverySecondCharacter(*i);
	}

	return 0;
}

void printEverySecondCharacter(basic_string<char> & stringToProcess){

	int printUpTo = stringToProcess.size() / 2;

	for (int i = 0; i < printUpTo; ++i)
	{
		if (!(i & 1))
		{
			cout << stringToProcess.at(i);
		}
		
	}
	cout << endl;
}