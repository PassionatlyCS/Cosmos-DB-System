#pragma once
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;


class Marks
{
	float *marks; int mcount;
	float *weightage; int wcount;
	float *maxMerk; int MaxCount;
	string *Identifier; int iDcount;
	float *abosolutes;

public:
	void addMarks(float a);
	void changeMarks(float a, int pos);
	void addWeightage(float a);
	void changeW(float a, int pos);
	void NameIdent(string a);
	void UpdateIdent(string a, int pos);
	void AddMaxMarks(float a);
	void UpdateMaxMarks(float a, int pos);

	float * getMarks() const;
	float *getWeightage() const;
	string *getIdent() const;
	float *getMax() const;

	void display2();

	void Add_impl(string ident, float marks, float wight, float max);
	void Chnge_imp(float merks, int pos, string nam, float wight, float max);

	void calTotal(); 

	Marks();
	~Marks();
};

