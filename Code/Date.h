#pragma once
#include<iostream>
#include<iomanip>

using namespace std;


//Date unchanged as of, working as required 4:11pm 1st Agugust
class Date
{
	int day;
	int month;
	int year;

public:
	void setDay(int a);
	void setMonth(int a);
	void setYear(int a);

	Date(int, int, int);		//parameterized

//	void nextdate();

	int getday() const;
	int getmonth() const;
	int getyear() const;

	
	void display() const;
	Date();
	virtual ~Date();
};

