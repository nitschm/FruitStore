#include "fruit.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void fruit::setName(string n)
{
	name = n;
}

void fruit::setPrice(double p)
{
	price = p;
}

void fruit::setQuantity(double q)
{
	quantity = q;
}

void fruit::setCount(int c)
{
	count = c;
}

void fruit::setInfo(string n, double p, double q, int c)
{
	name = n;
	price = p;
	quantity = q;
	count = c;
}

ostream& operator<<(ostream& os, const fruit& ob)
{
	os << fixed << setprecision(2) << ob.count << "." << setw(15) << ob.name << setw(15) << "$" << ob.price << "/lb" << setw(15) << ob.quantity << " lb" << setw(15) << "$" << ob.price * ob.quantity;
	cout << "\n";

	return os;
}

fruit::fruit(string n, double p, double q, int c)
{
	setInfo(n, p, q, c);
}

fruit::~fruit()
{
}