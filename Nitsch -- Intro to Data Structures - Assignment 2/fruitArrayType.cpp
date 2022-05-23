#include "fruitArrayType.h"
#include "fruit.h"

void fruitArrayType::print() //prints out everything in list array
{
	for (int i = 0; i < length; i++)
	{
		cout << list[i];
	}
}

void fruitArrayType::print(int item) //prints out a specific item in list array
{
	cout << list[item];
}

void fruitArrayType::print(string item) //prints out items with specified name in list array
{
	fruit temp;

	for (int i = 0; i < length; i++)
	{
		temp = list[i];

		if (temp.getName() == item)
		{
			cout << temp;
		}
	}
}

void fruitArrayType::updateQuantity(int item, double quantity)
{
	item = item - 1;
	fruit temp;

	temp = list[item];

	temp.setQuantity(quantity);

	list[item] = temp;
}

void fruitArrayType::updateUnitPrice(string item, double quantity)
{
	fruit temp;

	for (int i = 0; i < length; i++)
	{
		temp = list[i];

		if (temp.getName() == item)
		{
			temp.setPrice(quantity);
		}

		list[i] = temp;
	}
}

double fruitArrayType::getTotalCost()
{
	fruit temp;
	double totalCost = 0;

	for (int i = 0; i < length; i++)
	{
		temp = list[i];

		totalCost = totalCost + temp.getCost();
	}

	return totalCost;
}
