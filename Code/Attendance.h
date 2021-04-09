#pragma once
#include<iostream>
#include<string>


#include"Date.h"

using namespace std;


class Attendance
{
	string *Attend; int attCount;
	Date *Obj;
	float percent;
public:

	void calculatePercent();
	void AddLec(string,int,int,int);

	void display();

	Attendance();
	virtual ~Attendance();
};

