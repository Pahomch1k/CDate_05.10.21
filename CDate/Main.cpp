#include<iostream>
#include "CDate.h"
using namespace std;

ostream& operator<<(ostream& os, CDate& obj)
{
	os << obj.day << endl;
	os << obj.mounth << endl;
	os << obj.year << endl;
	return os;
}

istream& operator>>(istream& is, CDate& obj)
{
	is >> obj.day;
	is >> obj.mounth;
	is >> obj.year;
	return is;
}



int main()
{
	setlocale(0, "");
	CDate obj(18, 9, 2021);
	obj.PrintDate();
	obj.EditDate(obj, 230);
	obj.PrintDate();
}