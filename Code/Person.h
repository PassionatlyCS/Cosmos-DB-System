#pragma once
#include<iostream>
#include<string>
#include<iomanip>
#include"Mailbox.h"
#include"Date.h"
#include<fstream>

using namespace std;



class Person
{
	string Name;
	string FathName;
	string gender;
	string email;
	string CNIC;

	string MobileNum;
	int Age;
	Date Dob;

	string Curraddress;
	string CurrCity;
	string CurrCountry;
	int CurrPostalCde;
	string CurrHomePh;

	string Permaddress;
	string PermCity;
	string PermCountry;
	int PermPostalCde;
	string PermHomePh;

	string bloodGrp;

	string Guardian;
	string GurRelation;
	string GurMblPhn;

	Mailbox Inbox;

public:

	string getMblPhone() const;
	int getAge() const;
	Date getDob() const;
	string getNam() const;
	string getFathNam() const;
	string getGen() const;
	string getEmail() const;
	string getCNIC() const;
	string getCurAdd() const;
	string getCurCirt() const;
	string getCurrCountry() const;
	int getCurrPostalCde() const;
	string getCurrHomePh() const;
	string getPermAdd() const;
	string getPermCirt() const;
	string getPermCountry() const;
	int getPermPostalCde() const;
	string getPermHomePh() const;
	string getbloodGrp() const;
	string getGuardian() const;
	string getGurRelation() const;
	string getGurMblPhn() const;

	void setNam(string a);
	void setFathNam(string a);
	void setGen(string a);
	void setEmail(string a);
	void setCNIC(string a);
	void setMblePne(string a);
	void setAge(int a);
	void setDob(int, int, int);
	void setCurraddress(string a);
	void setCurrCity(string a);
	void setCurrCountry(string a);
	void setCurrPostalCde(int a);
	void setCurrHomePh(string a);
	void setPermaddress(string a);
	void setPermCity(string a);
	void setPermCountry(string a);
	void setPermPostalCde(int a);
	void setPermHomePh(string a);
	void setbloodGrp(string a);
	void setGuardian(string a);
	void setGurRelation(string a);
	void setGurMblPhn(string a);
	
	void InputData(string, string, string, string, string, string, int, int , string, string, string, int, string, string, string, string, int, string, string, string, string, string, int, int);
	Person(const string a, const string b, const string c, const string d, const string e, const string f, int g, int h, const string i, const string j, const string k, int l, const string m, const  string n, const string o, const string p, int q, const string r, const  string s, const string t, const string u, const string v, int w, int x);

	void display() const;

	void writeToCsv() {
		ofstream myfile;
		myfile.open("Person.csv", ios::app);
		myfile << Name << ", " << FathName << ", " << gender << ", " << email <<", " << CNIC << ", " << MobileNum << ", " << Age << ", " << Curraddress	<< ", " << CurrCity << ", " << CurrCountry << ", " << CurrPostalCde << ", "	<< CurrHomePh << ", " << Permaddress << ", " << PermCity << ", " << PermCountry	<< ", " << PermPostalCde << ", " << PermHomePh << ", " << bloodGrp << ", " << Guardian	<< ", " << GurRelation << ", " << GurMblPhn << ",\n";
		myfile.close();
	}

	virtual ~Person();
};

