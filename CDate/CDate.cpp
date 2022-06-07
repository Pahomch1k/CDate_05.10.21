#include "CDate.h"
#include<iostream>
using namespace std;

CDate::CDate()
{
	day = 0;
	mounth = 0;
	year = 0;
}

CDate::CDate(int d, int m, int y)
{
	day = d;
	mounth = m;
	year = y;
}

const char* CDate::DayOfWeek() const
{
    CDate start_date(3, 1, 0);
    while (true)
    {
        for (int i = 1; i <= 7; i++, start_date++)
        {
            if (start_date == *this)
            {
                switch (i)
                {
                case 1:
                    return "пн";
                case 2:
                    return "вт";
                case 3:
                    return "ср";
                case 4:
                    return "чт";
                case 5:
                    return "пт";
                case 6:
                    return "сб";
                case 7:
                    return "вс";
                }
            }
        }
    }
}

int CDate::ReturnDay(const CDate& obj1, const CDate& obj2)
{
	int day1;
	int day2;
	int raz;
	day1 = obj1.mounth * 30 + obj1.day;
	day2 = obj2.mounth * 30 + obj2.day;
	raz = day1 - day2;
	return raz;
}

void CDate::EditDate(CDate& obj1, int d)
{
	int mounth_d = d / 30;
	d = d - mounth_d * 30;
	obj1.mounth += mounth_d;
	obj1.day += d;
}

void CDate::PrintDate()
{
	cout << "day " << day << endl;
	cout << "mounth " << mounth << endl;
	cout << "year " << year << endl;
}

bool CDate::operator<(CDate right)
{
    if (this->year < right.year) return true;
    else if (this->year == right.year)
    {
        if (this->mounth < right.mounth)return true;
        else if (this->mounth == right.mounth)
        {
            if (this->day < right.day)return true;
            else return false;
        }
        else return false;
    }
    else return false;
}

bool CDate::operator>(CDate right)
{
    if (this->year > right.year) return true;
    else if (this->year == right.year)
    {
        if (this->mounth > right.mounth)return true;
        else if (this->mounth == right.mounth)
        {
            if (this->day > right.day)return true;
            else return false;
        }
        else return false;
    }
    else return false;
}

bool CDate::operator==(CDate right)
{
    if (this->year == right.year)
    {
        if (this->mounth == right.mounth)
        {
            if (this->day == right.day)return true;
            else return false;
        }
        else return false;
    }
    else return false;
}

bool CDate::operator!=(CDate right)
{
    if (this->year == right.year)
    {
        if (this->mounth == right.mounth)
        {
            if (this->day == right.day)return false;
            else return true;
        }
        else return true;
    }
    else return true;
}

ostream& operator<<(ostream& os, CDate& obj)
{
    return os;
}

istream& operator>>(istream& is, CDate& obj)
{
    return is;
}
