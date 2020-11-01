#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
    Time() {}
    
	Time(int hour,int minute,int second)
	{
		if((hour >= 0) && (hour < 24))
			this->hour = hour;
		else
			cout<<"Error hour must be between 0 : 23."<<endl;
		if((minute >= 0) && (minute < 60))
			this->minute = minute;
		else
			cout<<"Error minute must be between 0 : 59."<<endl;
		if((second >= 0) && (second <= 60))
			this->second = second;
		else
			cout<<"Error second must be between 0 : 59."<<endl;
	}
	void setDate(int hour,int minute,int second)
	{
		if((hour >= 0) && (hour < 24))
			this->hour = hour;
		else
			cout<<"Error hour must be between 0 : 23."<<endl;
		if((minute >= 0) && (minute < 60))
			this->minute = minute;
		else
			cout<<"Error minute must be between 0 : 59."<<endl;
		if((second >= 0) && (second <= 60))
			this->second = second;
		else
			cout<<"Error second must be between 0 : 59."<<endl;
	}
	void setYear(int hour)
	{
		if((hour >= 0) && (hour < 24))
			this->hour = hour;
		else
			cout<<"Error hour must be between 0 : 23."<<endl;
	}
	void setMonth(int minute)
	{
		if((minute >= 0) && (minute < 60))
			this->minute = minute;
		else
			cout<<"Error minute must be between 0 : 59."<<endl;
	}
	void setDay(int second)
	{
		if((second >= 0) && (second <= 60))
			this->second = second;
		else
			cout<<"Error second must be between 0 : 59."<<endl;
	}
	int getHour()
	{
		return hour;
	}
	int getMinute()
	{
		return minute;
	}
	int getSecond()
	{
		return second;
	}
	void printHMS()
	{
		cout<<hour<<":"<<minute<<":"<<second<<endl;
	}
	void printHM()
	{
		cout<<hour<<":"<<minute<<endl;
	}
	void printMS()
	{
		cout<<minute<<":"<<second<<endl;
	}
};

int main()
{
	Time time(13,30,15);
	time.printHMS();
	return 0;
}