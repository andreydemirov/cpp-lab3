#include "pch.h"
#include <iostream>

using namespace std;


int symbolsBefore(char arr[]) {
	int before = 0;
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] != ':') {
			before++;
		}
		else if (arr[i] == ':')
			break;
	}
	if (before == strlen(arr))
		return before = 0;
	else
		return before;
}


int symbolsAfter(char arr[]) {
	int after = 0;
	bool turn = false;
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] == ':') {
			turn = true;
		}
		else if (turn == true)
			after++;
	}
	return after;
}

int main()
{
	char arr[31];
	gets_s(arr);
	cout << arr << " - " << strlen(arr) << "symb." << endl;

	cout << "Symbols before : - " << symbolsBefore(arr) << endl;
	cout << "Symbols after : - " << symbolsAfter(arr) << endl;
}
