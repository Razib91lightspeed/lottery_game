#pragma once
#include <iostream>
using namespace std;
void checkNumber(int& a) {
	while (a < 1 || a>39) // while loop to verify entered numbers must be between between 1 to 39
	{
		cout << "Error! Entry must be between 1 and 39: ";
		cin >> a;
	}
}
void randomNumber(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = (rand() % 39) + 1;
	}
}
void printNumber(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i];
		cout << "|";
	}
}
void printPrize(bool allmatch, bool nomatch, int matchcount, int bonuscount) {
	if (nomatch == true) // varifing conditionfor price with if statement
	{
		cout << endl << endl << "Sorry! No Match." << endl;
	}
	if (allmatch == true)
	{
		cout << endl << endl << "Congratulation! you are the grand prize winner." << endl;
	}
	if (matchcount != 0)
		cout << endl << endl << matchcount << " Match" << endl;
	if (matchcount == 5)
	{
		cout << "500 euro" << endl;
	}
	if (matchcount == 5 && bonuscount == 1)
	{
		cout << "You have won 700 euro" << endl;
	}
	if (matchcount == 6 && bonuscount == 1)
	{
		cout << "You have won 1000 euro" << endl;
	}
	if (matchcount == 7)
	{
		cout << "You have won 1200 euro" << endl;
	}
	if (matchcount == 7 && bonuscount == 1)
	{
		cout << "You have won 15000 euro" << endl;
	}
}
