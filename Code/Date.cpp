#include "Date.h"


//Date unchanged as of, working as required 4:16pm 1st Agugust
void Date::setDay(int a)
{
	
	while (a <= 0 || a >= 32)
	{
		cout << "Please enter a correct day" << endl;
		cin >> a;
	}
	day = a;
}

void Date::setMonth(int a)
{
	while (a <= 0 || a >= 13)
	{
		cout << "Please enter a correct month" << endl;
		cin >> a;
	}
	month = a;
}

void Date::setYear(int a)
{

	while (a <= 1946)
	{
		cout << "Please enter a correct year" << endl;
		cin >> a;
	}
	year = a;
}

Date::Date(int a, int b, int c)
{
	setDay(a);
	setMonth(b);
	setYear(c);
}

int Date::getday() const
{
	return day;
}

int Date::getmonth() const
{
	return month;
}

int Date::getyear() const
{
	return year;
}



void Date::display() const
{
	cout << getday() <<"/"<< getmonth() << "/" << getyear() << setw(2) <<"";
}

Date::Date()
{
	setDay(1);
	setMonth(8);
	setYear(2018);
	cout << endl;
}


Date::~Date()
{
	
}
