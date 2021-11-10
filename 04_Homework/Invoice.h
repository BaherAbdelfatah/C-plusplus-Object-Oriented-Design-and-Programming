#pragma once
#include<iostream>
#include <string>
using namespace std;
class Invoice
{
private:
	string name;
	int item_number;
	double price;
	int quantity;
public:
	Invoice(const int &item_number, const string &name, const double &price, const int &quantity = 1);
	void SetName(string name_);
	void SetItemNumber(int itemNumber);
	void SetPrice(double price_);
	void SetQuantity(int quantity_);
	string GetName();
	int GetItemNumber();
	double GetPrice();
	int GetQuantity();
	double GetTotalPrice();
	void Print();
	string ToString();
};

	