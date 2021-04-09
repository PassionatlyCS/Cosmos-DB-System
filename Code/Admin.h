#pragma once
#include "Person.h"
#include <windows.h>
class Admin :
	public Person
{
	static const int unid = 15;
	string *ListOfCourses;
	int count;
	string Department;
	string Designation;
	string password;
	int UniAdID;
	string username;

public:
	string *getCourses() const;
	string getDep() const;
	string getDesignation() const;

	void addCourse(string);
	void delCourse(string);

	void Display();
	void DisplayCour();
	void loginPage();

	Admin(const string a, const string b, const string c, const string d, const string e, const string f, int g, int h, const string i, const string j, const string k, int l, const string m, const  string n, const string o, const string p, int q, const string r, const  string s, const string t, const string u, const string v, int w, int x,string aa, string bb,int cc);
	virtual ~Admin();
};

