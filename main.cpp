/*Copyright 2018 Borna Pekarić

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

Originally written in Orwell Dev-C++ 5.11*/

#include <iostream>
#include <cstdlib> //For RNG.
#include <ctime> //For RNG's seed.
using namespace std;

int main()
{
	int dice_type, dice_amount, still_rolling, currently_rolling, current_roll, roll_sum, roll_mod;
	srand(time(0));
	cout << "Dice Roller\n\nLicensed under Apache License, version 2.0.\n\nCopyright 2018 Borna Pekaric\n\n";
	system("pause");
	still_rolling = 1;
	while (still_rolling == 1)
	{
		system("cls");
		roll_sum = 0;
		cout << "Available dice types are the following:";
		cout << "\n\n1 - d2\n2 - d4\n3 - d6\n4 - d8\n5 - d10\n6 - d12\n7 - d20\n8 - d100/d% (rolls 100 instead of 0/00)";
		cout << "\n\nSelect the type of dice to roll by typing in a number from the list: ";
		cin >> dice_type;
		while (dice_type < 1 || dice_type > 11)
		{
			cout << "\nWrong selection. Choose a number for the list: ";
			cin >> dice_type;
		}
		cout << "\nChoose an amount of dice to roll: ";
		cin >> dice_amount;
		while (dice_amount < 1)
		{
			cout << "\nThe number chosen must be greater than 0. Choose again: ";
			cin >> dice_amount;
		}
		cout << "\nWrite a dice roll modifier (0 if none): ";
		cin >> roll_mod;
		system("cls");
		if (dice_type == 1)
		{
			for (currently_rolling = 1; currently_rolling <= dice_amount; ++currently_rolling)
			{
				current_roll = rand() % 2 + 1;
				cout << current_roll << " ";
				roll_sum = roll_sum + current_roll;
			}
		}
		if (dice_type == 2)
		{
			for (currently_rolling = 1; currently_rolling <= dice_amount; ++currently_rolling)
			{
				current_roll = rand() % 4 + 1;
				cout << current_roll << " ";
				roll_sum = roll_sum + current_roll;
			}
		}
		if (dice_type == 3)
		{
			for (currently_rolling = 1; currently_rolling <= dice_amount; ++currently_rolling)
			{
				current_roll = rand() % 6 + 1;
				cout << current_roll << " ";
				roll_sum = roll_sum + current_roll;
			}
		}
		if (dice_type == 4)
		{
			for (currently_rolling = 1; currently_rolling <= dice_amount; ++currently_rolling)
			{
				current_roll = rand() % 8 + 1;
				cout << current_roll << " ";
				roll_sum = roll_sum + current_roll;
			}
		}
		if (dice_type == 5)
		{
			for (currently_rolling = 1; currently_rolling <= dice_amount; ++currently_rolling)
			{
				current_roll = rand() % 10 + 1;
				cout << current_roll << " ";
				roll_sum = roll_sum + current_roll;
			}
		}
		if (dice_type == 6)
		{
			for (currently_rolling = 1; currently_rolling <= dice_amount; ++currently_rolling)
			{
				current_roll = rand() % 12 + 1;
				cout << current_roll << " ";
				roll_sum = roll_sum + current_roll;
			}
		}
		if (dice_type == 7)
		{
			for (currently_rolling = 1; currently_rolling <= dice_amount; ++currently_rolling)
			{
				current_roll = rand() % 20 + 1;
				cout << current_roll << " ";
				roll_sum = roll_sum + current_roll;
			}
		}
		if (dice_type == 8)
		{
			for (currently_rolling = 1; currently_rolling <= dice_amount; ++currently_rolling)
			{
				current_roll = rand() % 100 + 1;
				cout << current_roll << " ";
				roll_sum = roll_sum + current_roll;
			}
		}
		if (roll_mod != 0)
		{
			cout << "\n\nTotal roll without the roll modifier: " << roll_sum;
			roll_sum = roll_sum + roll_mod;
			cout << "\n\nTotal roll with the roll modifier:    " << roll_sum;
		}
		else
		{
			cout << "\n\nTotal roll: " << roll_sum;
		}
		cout << "\n\nDo you want to roll more dice? Type 1 to continue using this program or any" << endl;
		cout << "other number to exit it: ";
		cin >> still_rolling;
	}
	return 0;
}
