#include <iostream>

using namespace std;

int numberOfSquares(const int n);

int main(void)
{
	int readNumber;

	while(true)
	{
		cin >> readNumber;
		if (readNumber == 0) break;
		cout << numberOfSquares(readNumber) << endl;
	}



	return 0;
}

int numberOfSquares(const int n)
{
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += i * i;
	}

	return result;
}