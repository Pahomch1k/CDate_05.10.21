#pragma once
#include<iostream>

using namespace std;
class CDate
{
	unsigned int day;
	unsigned int mounth;
	unsigned int year;
public:
	CDate();
	CDate(int day, int mounth, int year);

	const char* DayOfWeek()const;
	int ReturnDay(const CDate& obj1, const CDate& obj2);
	void EditDate(CDate& obj1, int d);
	void PrintDate();


	bool operator<(CDate right);
	bool operator>(CDate right);
	bool operator==(CDate right);
	bool operator!=(CDate right);

	friend ostream& operator<<(ostream& os, CDate& obj);
	friend istream& operator>>(istream& is, CDate& obj);
};




