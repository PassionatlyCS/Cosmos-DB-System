#pragma once
#include "Person.h"
#include<iostream>
#include<string>
#include"Student.h"
#include <windows.h>
using namespace std;

class FactultyMem :
	public Person
{

	
	string FiD;
	char *sections_as;
	char*cour_as;
	string Campus;
	string department;
	string designation;
	string username;
	string password;

public:
	void loginPage();
	void addMarkstS(Student& obj, string ident, float marks, float wight, float max);
	void changeMarkstS(Student& obj,float merks, int pos, string nam, float wight, float max);
	FactultyMem(const string a, const string b, const string c, const string d, const string e, const string f, int g, int h, const string i, const string j, const string k, int l, const string m, const string n, const string o, const string p, int q, const string r, const string s, const string t, const string u, const string v, int w, int x, string aa, char *bb, char *cc, const string dd, const string ee, const string ff);
	virtual ~FactultyMem();
};

