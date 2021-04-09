#include "Student.h"




Student::Student(const string a, const string b, const string c, const string d, const string e, const string f, int g, int h, const string i, const string j, const string k, int l, const string m, const string n, const string o, const string p, int q, const string r, const string s, const string t, const string u, const string v, int w, int x, string aa, string bb, int cc, const string dd) :Person(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x)
{
	Department = aa;
	Degree = bb;
	ARN = cc;
	RollNum = dd;
	username = dd;
	password = "1234";
}

string Student::getDepartment() const
{
	return Department;
}

string Student::getDeg() const
{
	return Degree;
}

int Student::getARN() const
{
	return ARN;
}

string Student::GetRollNumber() const
{
	return RollNum;
}

void Student::setDep(string a)
{
	Department = a;
}

void Student::setDeg(string a)
{
	Degree = a;
}

void Student::setRollNum(string a)
{
	RollNum = a;
}

void Student::setARN(int a)
{
	ARN = a;
}

void Student::loginPage()
{
	system("CLS");
	string check1; string check2;
	cout << "Pls enter username: ";
	cin >> check1;
	while (check1 != username)
	{
		cout << "Bad username pls type admin";
		cin >> check1;
	}
	cout << "Pls enter password: ";
	cin >> check2;
	while (check2 != password)
	{
		cout << "Bad password pls type 1234";
		cin >> check2;
	}
	system("CLS");
	cout << "login sucessful" << endl;
	Sleep(500);
	system("CLS");
	return;
}

void Student::Display()
{
	Person::display();
	cout << "Department: " << getDepartment() << endl;
	cout << "Degree: " << getDeg() << endl;
	cout << "ARN " << getARN()<< endl;
	cout << "Roll Number: " << GetRollNumber() << endl;

	b1.display();
}

Student::~Student()
{
}

