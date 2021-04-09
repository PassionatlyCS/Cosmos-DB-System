#pragma once
#include<iostream>
#include<string>
#include"Attendance.h"
#include"Section.h"
#include"Marks.h"

using namespace std;

class Course
{
	string Name;
	int code;
	int creditHrs;
	

public:

	Section SecObj;

	string getName() const;
	int getCode() const;
	int getCreditHrs() const;

	void setName(string a);
	void setCode(int a);
	void setCreditHrs(int a);
	

	void display();
	void display2();
	Course(string, int, int,string);
	Course();
	~Course();
};

