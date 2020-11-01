#include<iostream>
using namespace std;
class Date
{
private:
	int year;
	int month;
	int day;
public:
    Date() {}
    
	Date(int year,int month,int day)
	{
		if(year>0)
			this->year = year;
		else
			cout<<"Error year must be a positive integer."<<endl;
		if((month > 0) && (month <= 12))
			this->month = month;
		else
			cout<<"Error month must be between 1 : 12."<<endl;
		if((day > 0) && (day <= 31))
			this->day = day;
		else
			cout<<"Error day must be between 1 : 31."<<endl;
	}
	void setDate(int year,int month,int day)
	{
		if(year>0)
			this->year = year;
		else
			cout<<"Error year must be a positive integer."<<endl;
		if((month > 0) && (month <= 12))
			this->month = month;
		else
			cout<<"Error month must be between 1 : 12."<<endl;
		if((day > 0) && (day <= 31))
			this->day = day;
		else
			cout<<"Error day must be between 1 : 31."<<endl;
	}
	void setYear(int year)
	{
		if(year>0)
			this->year = year;
		else
			cout<<"Error year must be a positive integer."<<endl;
	}
	void setMonth(int month)
	{
		if((month > 0) && (month <= 12))
			this->month = month;
		else
			cout<<"Error month must be between 1 : 12."<<endl;
	}
	void setDay(int day)
	{
		if((day > 0) && (day <= 31))
			this->day = day;
		else
			cout<<"Error day must be between 1 : 31."<<endl;
	}
	int getYear()
	{
		return year;
	}
	int getMonth()
	{
		return month;
	}
	int getDay()
	{
		return day;
	}
	void printYMD()
	{
		cout<<year<<", "<<month<<", "<<day<<endl;
	}
	void printMY()
	{
		cout<<month<<", "<<year<<endl;
	}
	void printDM()
	{
		cout<<day<<", "<<month<<endl;
	}
};

int main()
{

	Date date(1998,1,1);
	date.printYMD();
	return 0;
}