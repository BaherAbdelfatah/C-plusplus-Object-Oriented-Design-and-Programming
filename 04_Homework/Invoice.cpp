#include "Invoice.h"

	Invoice::Invoice(const int &item_number, const string &name, const double &price, const int &quantity) :
		item_number(item_number), name(name), price(price), quantity(quantity) {}
	void Invoice::SetName(string name_)
	{
		name = name_;
	}
	void Invoice::SetItemNumber(int itemNumber)
	{
		item_number = itemNumber;
	}
	void Invoice::SetPrice(double price_)
	{
		price = price_;
	}
	void Invoice::SetQuantity(int quantity_)
	{
		quantity = quantity_;
	}
	string Invoice::GetName()
	{
		return name;
	}
	int Invoice::GetItemNumber()
	{
		return item_number;
	}
	double Invoice::GetPrice()
	{
		return price;
	}
	int Invoice::GetQuantity()
	{
		return quantity;
	}
	double Invoice::GetTotalPrice()
	{
		return price * quantity;
	}
	void Invoice::Print()
	{
		cout << "Item Name: " << GetName() << endl;
		cout << "Item Price: " << GetPrice() << endl;
		cout << "Item Quantity: " << GetQuantity() << endl;
		cout << "Item item number: " << GetItemNumber() << endl;
		cout << "Item Total Price: " << GetTotalPrice() << endl;
	}
	string Invoice::ToString()
	{
		return GetName() + ", " + to_string(GetPrice()) + ", " + to_string(GetQuantity()) + ", " + to_string(GetItemNumber());
	}