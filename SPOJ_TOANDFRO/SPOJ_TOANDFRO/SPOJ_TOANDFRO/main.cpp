#include <iostream>
#include <math.h>
#include <vector>
#include <string>
using namespace std;

string extractMessage(string cipher, int charsPerRow);

int getCurrent2dIndex(const int row, const int column, const int charsPerRow);

int main(void) {
	string message;
	int readInt;
	while(true)
	{
		scanf_s("%d", &readInt);
		//getline(cin, message);
		if(readInt == 0)
		{
			break;
		}
		getline(cin, message);
		extractMessage(message, readInt);
	}

	char c;

	cin >> c;

	return 0;
}

string extractMessage(string cipher, int charsPerRow)
{
	const int	cipherLength = cipher.length(),
				charsPerColumn = cipherLength / charsPerRow;
	

	char * charArrayResult = new char[cipherLength];

	size_t current2dIndex, currentRowMin = -1, currentRowMax = charsPerRow, x, y;

	for (size_t i = 0; i < charsPerRow; i++)
	{
		currentRowMin++;
		currentRowMax--;

		for (size_t j = 0; j < charsPerColumn; j++)
		{
			x = j;
			if(j % 2 == 0)
			{
				y = currentRowMin;
			}
			else
			{
				y = currentRowMax;
			}

			current2dIndex = charsPerRow * x + y;
			cout << cipher[current2dIndex];
		}
	}
	cout << endl;

	string result(charArrayResult);

	return result;
}

int getCurrent2dIndex(const int row, const int column, const int charsPerRow)
{
	return 0;
}
