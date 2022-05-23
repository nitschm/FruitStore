// Nitsch -- Intro to Data Structures: Assignment 2
#include <iostream>
#include <string>
#include <iomanip>
#include "fruit.h"
#include "fruitArrayType.h"
using namespace std;

void printList();

int main()
{
	string product = "";
	int selection = 0;
	int const menuSelection = 6;
	string productArr[menuSelection] = { "Apple", "Banana", "Grape", "Orange", "Pear" };
	double worthArr[menuSelection] = { 0.99, 0.45, 1.79, 1.09, 1.49 };
	double worth = 0.0;
	double amount = 0.0;
	int counter = 0;
	int counterCount = 1;
	int const SIZE = 100;
	fruit arr[SIZE];
	fruitArrayType groceryList;
	int exit = 1;
	int change = 0;
	int exit2 = 1;
	int changeItem = 0;
	double changeQuantity = 0.0;
	double changeUnitPrice = 0.0;
	string option = "";
	int exit3 = 1;

	//Section for adding items to the list
	do
	{
		printList();

		cout << "\n";
		cin >> selection;
		cout << "\n";

		if (selection == 0)
		{
			exit = 0;
		}
		else if (selection > 0 && selection < menuSelection)
		{
			selection = selection - 1;
			cout << "Please enter the quantity: ";
			cin >> amount;

			product = productArr[selection];
			worth = worthArr[selection];

			arr[counter].setName(product);
			arr[counter].setPrice(worth);
			arr[counter].setQuantity(amount);
			arr[counter].setCount(counterCount);

			groceryList.insertEnd(arr[counter]);

			counterCount++;
			counter++;
			cout << "\n";
		}
		else
		{
			cout << "You did not enter an accepted input." << endl;
		}
	} while (exit == 1);

	//Section displays initial reciept
	cout << "Item:" << setw(12) << "Name:" << setw(22) << "Unit Price:" << setw(18) << "Quantity:" << setw(20) << "Cost:" << endl;
	cout << setfill('-') << setw(77) << "-" << endl;
	cout << setfill(' ');
	groceryList.print();
	cout << setfill('-') << setw(77) << "-" << endl;
	cout << setfill(' ');
	cout << "Total cost: $" << groceryList.getTotalCost() << endl;
	
	//Section for change quantity
	while (exit2 == 1)
	{
		cout << "\n";
		cout << "Do you want to change the quantity of an item?\n";
		cout << "Push 0 for No and 1 for Yes:";
		cin >> change;
		cout << "\n";

		if (change == 1)
		{
			cout << "Please enter the number of the item to be changed: ";
			cin >> changeItem;
			cout << "\n";
			cout << "What is the new quantity for this item? ";
			cin >> changeQuantity;
			cout << "\n";
			groceryList.updateQuantity(changeItem, changeQuantity);
			cout << "\n";

			cout << "Item:" << setw(12) << "Name:" << setw(22) << "Unit Price:" << setw(18) << "Quantity:" << setw(20) << "Cost:" << endl;
			cout << setfill('-') << setw(77) << "-" << endl;
			cout << setfill(' ');
			groceryList.print();
			cout << setfill('-') << setw(77) << "-" << endl;
			cout << setfill(' ');
			cout << "Total cost: $" << groceryList.getTotalCost() << endl;
		}
		else if (change == 0)
		{
			exit2 = 0;
		}
		else
		{
			cout << "You did not enter a valid input." << endl;
		}
	}

	//Section for change unit price
	while (exit3 == 1)
	{
		cout << "Do you want to change the unit price of an item?\n";
		cout << "Push 0 for No and 1 for Yes:";
		cin >> change;
		cout << "\n";

		if (change == 1)
		{
				cout << "Please enter the fruit whose unit price you want to change: ";
				cin >> option;

				if (option == "Apple" || option == "Banana" || option == "Grape" || option == "Orange" || option == "Pear")
				{
					cout << "What is the new unit price of the fruit? ";
					cin >> changeUnitPrice;
					groceryList.updateUnitPrice(option, changeUnitPrice);

					cout << "\n";

					cout << "Item:" << setw(12) << "Name:" << setw(22) << "Unit Price:" << setw(18) << "Quantity:" << setw(20) << "Cost:" << endl;
					cout << setfill('-') << setw(77) << "-" << endl;
					cout << setfill(' ');
					groceryList.print();
					cout << setfill('-') << setw(77) << "-" << endl;
					cout << setfill(' ');
					cout << "Total cost: $" << groceryList.getTotalCost() << endl;
					cout << "\n";
				}
				else
				{
					cout << "You did not enter a valid fruit." << endl;

				}
		}
		else if (change == 0)
		{
			exit3 = 0;
		}
		else
		{
			cout << "You did not enter a valid input." << endl;
		}
	}

	cout << "This is your final reciept: \n\n";
	cout << "Item:" << setw(12) << "Name:" << setw(22) << "Unit Price:" << setw(18) << "Quantity:" << setw(20) << "Cost:" << endl;
	cout << setfill('-') << setw(77) << "-" << endl;
	cout << setfill(' ');
	groceryList.print();
	cout << setfill('-') << setw(77) << "-" << endl;
	cout << setfill(' ');
	cout << "Total cost: $" << groceryList.getTotalCost() << endl;

	return 0;
}

void printList()
{
	int const menu = 6;
	string arr2[menu] = { "0 -- Exit", "1 -- Apple $0.99/lb", "2 -- Banana $0.45/lb", "3 -- Grape $1.79/lb", "4 -- Orange $1.09/lb", "5 -- Pear $1.49/lb" };
	int selection2 = 0;

	cout << "Please enter your selection (0 - 5)\n\n";

	for (int i = 0; i < menu; i++)
	{
		cout << arr2[i] << endl;
	}
}