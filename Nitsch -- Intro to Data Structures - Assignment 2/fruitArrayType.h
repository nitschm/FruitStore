#ifndef FRUITARRAYTYPE_H
#define FRUITARRAYTYPE_H
#include <iostream>
#include <string>
#include "fruit.h"
#include "arrayListType.h"
using namespace std;

class fruitArrayType: public arrayListType<fruit>
{
	private:

	public:
		void print();
		void print(int);
		void print(string);
		void updateQuantity(int, double);
		void updateUnitPrice(string, double);
		double getTotalCost();
};

#endif