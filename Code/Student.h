#pragma once

#include<string>
#include<iostream>
#include<iomanip>

#include"Course.h"
#include"Marks.h"
#include"Attendance.h"
#include"Section.h"
#include"Batch.h";
using namespace std;

#include "Person.h"
#include <windows.h>

class Student :
	public Person
{

	string Department;
	string Degree;
	int ARN;
	string RollNum;
	string username;
	string password;

public:
	Batch b1;
	Student(const string a, const string b, const string c, const string d, const string e, const string f, int g, int h, const string i, const string j, const string k, int l, const string m, const  string n, const string o, const string p, int q, const string r, const  string s, const string t, const string u, const string v, int w, int x, string aa, string bb, int cc,const string dd);
	
	string getDepartment() const;
	string getDeg()const;
	int getARN()const;
	string GetRollNumber() const;


	void setDep(string a);
	void setDeg(string a);
	void setRollNum(string a);
	void setARN(int a);
	void loginPage();
	void Display();

	virtual ~Student();
};

