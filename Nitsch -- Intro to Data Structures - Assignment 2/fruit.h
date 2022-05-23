#ifndef FRUIT_H
#define FRUIT_H
#include <iostream>
#include <string>
using namespace std;

class fruit
{
private:
	string name;
	double price;
	double quantity;
	int count;
public:
	void setName(string n);
	void setPrice(double p);
	void setQuantity(double q);
	void setCount(int c);
	void setInfo(string n, double p, double q, int c);
	string getName() { return name; }
	double getPrice() { return price; }
	double getQuantity() { return quantity; }
	int getCount() { return count; }
	double getCost() { return price * quantity; }
	fruit(string n = "", double p = 0, double q = 0, int c = 0);
	~fruit();
	friend ostream& operator<<(ostream&, const fruit&);
};

#endif
