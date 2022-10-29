#include <iostream>
#include"lottery.h"
#include <cstdlib>
#include <time.h> // to generate randomm number with timmes
#include<algorithm>
using namespace std;
int main(int argc, char* argv[])
{
	int lottery[7]; //regural nuber arry
	int lotteryB[3]; // bonus number arry
	int user[7]; // user' regular number
	int userB[3]; // user's bonus number
	bool allmatch = true;
	bool nomatch = true;
	int matchcount = 0;
	int bonuscount = 0;
	srand(time(NULL));
	randomNumber(lottery, 7); // generate number between 1 to 39
	for (int i = 0; i < 7; i++) // for loop to take 7 integer input from user
	{
		cout << "Enter a regular number between 1 and 39: ";
		cin >> user[i];
		checkNumber(user[i]);
	}
	randomNumber(lotteryB, 3); // generate number between 1 to 39
	for (int i = 0; i < 3; i++) // for loop to take 7 integer input from user
	{
		cout << "Enter a bonus number between 1 and 39: ";
		cin >> userB[i];
		checkNumber(userB[i]);
	}
	cout << endl << "Regular Number: ";
	sort(lottery, lottery + 7);
	printNumber(lottery, 7);
	cout << endl << "Bonus Number: "; // autogenerate 3 bonus number
	sort(lotteryB, lotteryB + 3);
	printNumber(lotteryB, 3);
	cout << endl << endl << "User Regular Number: ";
	sort(user, user + 7);
	printNumber(user, 7);
	cout << endl << endl << "User Bonus Number: ";
	sort(userB, userB + 3);
	printNumber(userB, 3);
	for (int i = 0; i < 7; i++) // to verify if statement does not go ovver 7 integer
	{
		if (user[i] == lottery[i]) // verifing condition for price
		{
			matchcount++;
			nomatch = false;
		}
		if (user[i] != lottery[i])
		{
			allmatch = false;
		}
	}
	for (int i = 0; i < 3; i++) // to verify if statement does not go ovver 7 integer
	{
		if (userB[i] == lotteryB[i]) // verifing condition for price
		{
			bonuscount++;
			nomatch = false;
		}
		if (userB[i] != lotteryB[i])
		{
			allmatch = false;
		}
	}
	printPrize(allmatch, nomatch, matchcount, bonuscount);
	return 0;
}
