#pragma once
#include<iostream>
#include<string>
#include<iomanip>
#include"Course.h"
#include"Marks.h"
#include"Attendance.h"
#include"Section.h"

using namespace std;
class Batch
{
	string BatName;
public:

	Course * CourObj;
	int cour;
	string getBatch() const;

	void display();

	void setName(string a);
	void addCourse(string a, int b, int c);
	Batch();
	virtual ~Batch();
};

