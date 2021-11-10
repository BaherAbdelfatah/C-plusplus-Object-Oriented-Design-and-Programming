#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Room
{
private:
	double length;
	double width;
	string color;
public:
	Room(double length_, double width_, string color_)
	{
		length = length_;
		width = width_;
		color = color_;
	}
	void SetLength(double length_)
	{
		length = length_;
	}
	void SetWidth(double width_)
	{
		width = width_;
	}
	void SetColor(string color_)
	{
		color = color_;
	}
	double GetLength()
	{
		return length;
	}
	double GetWidth()
	{
		return width;
	}
	string GetColor()
	{
		return color;
	}
};

class Appartment
{
private:
	vector<Room> rooms;
	vector<Room> bathrooms;
	int floor_number;
	int appartment_number;
public:
	void SetRooms(const vector<Room>& rooms_)
	{
		rooms = rooms_;
	}
	void SetBathrooms(const vector<Room>& bathrooms_)
	{
		bathrooms = bathrooms_;
	}
	void SetFloorNumber(int floorNumber)
	{
		floor_number = floorNumber;
	}
	void SetAppartmentNumber(int appartmentNumber)
	{
		appartment_number = appartmentNumber;
	}
	const vector<Room>& GetRooms()
	{
		return rooms;
	}
	const vector<Room>& GetBathrooms()
	{
		return bathrooms;
	}
	int GetFloorNumber()
	{
		return floor_number;
	}
	int GetAppartmentNumber()
	{
		return appartment_number;
	}
};

class Elevator
{
private:
	double length;
	double width;
	int max_people;
	int max_weight;
public:
		void SetLength(double length_)
	{
		length = length_;
	}
	void SetWidth(double width_)
	{
		width = width_;
	}
	void SetMaxPeople(int maxPeople)
	{
		max_people = maxPeople;
	}
	void SetMaxWeight(int maxWeight)
	{
		max_weight = maxWeight;
	}
	double GetLength()
	{
		return length;
	}
	double GetWidth()
	{
		return width;
	}
	int GetMaxPeople()
	{
		return max_people;
	}
	int GetMaxWeight()
	{
		return max_weight;
	}
};

class Building {
private:
	vector<Appartment> appartments;
	vector<Elevator> elevators;
};

int main()
{
	return 0;
}
