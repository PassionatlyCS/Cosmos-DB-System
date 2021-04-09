#pragma once
#include<iostream>
#include<string>
#include<iomanip>
#include"Marks.h"
#include"Attendance.h"

using namespace std;


class Section
{
	string Name;
	
public:
	Marks MaObj;
	Attendance AtObj;

	void display();
	void setName(string);
	string getName() const;
	
	Section(string, Marks,Attendance);

	Section();
	~Section();
};

