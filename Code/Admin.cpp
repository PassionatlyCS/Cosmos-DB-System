#include "Admin.h"

Admin::Admin(const string a, const string b, const string c, const string d, const string e, const string f, int g, int h, const string i, const string j, const string k, int l, const string m, const string n, const string o, const string p, int q, const string r, const string s, const string t, const string u, const string v, int w, int x, const string aa, const string bb,int cc) :Person(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x)
{
	this->Department = aa;
	this->Designation = bb;
	this->count = cc;
	if (this->count <= 0)
	{
		ListOfCourses = NULL;
	}
	else
	{
		ListOfCourses = new string[count];
	}
	password = "1234";
	username = "admin";
}

Admin::~Admin()
{

}
void Admin::loginPage()
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
string * Admin::getCourses() const
{
	return ListOfCourses;
}

string Admin::getDep() const
{
	return Department;
}

string Admin::getDesignation() const
{
	return Designation;
}



void Admin::addCourse(string a)
{
	int SafeSec = count;
	if (getCourses() == NULL)
	{
		ListOfCourses = new string[1];
		*ListOfCourses = a;
	}
	if (getCourses() != NULL)
	{
		string *temp = new string [count];
		for (int i = 0;i <SafeSec;i++)
		{
			temp[i] = ListOfCourses[i];
		}
		delete[] ListOfCourses;
		count = count + 1;
		ListOfCourses = new string[count];
		for (int i = 0; i <SafeSec; i++)
		{
			ListOfCourses[i] = temp[i];
		}
		ListOfCourses[count] = a;
		cout << "Sucessfully added the course: " << a << endl;
		delete[] temp;
	}
	
	count = SafeSec + 1;
}

void Admin::delCourse(string a)
{
	int SafeSec2 = count;
	if (getCourses() == NULL)
	{
		cout << "Please add a course first :)" << endl;
	}
	if (getCourses() != NULL)
	{
		string *temp = new string[count];
		for (int i = 0; i <SafeSec2; i++)
		{
			temp[i] = ListOfCourses[i];
		}

		delete[] ListOfCourses;
		
		bool  DelCheck = 0;
		int DelIndex = -1;
		//ListOfCourses = new string[count];
		for (int i = 0; i <SafeSec2; i++) //Course to delete
		{
			if (temp[i] == a)
			{
				DelCheck = 1;
				DelIndex = i;
			}
		}
		if (DelCheck == 1)
		{
			if (DelIndex == 1)
			{
				delete[] temp;
				ListOfCourses = NULL;
				cout << "All courses are deleted :(" << endl;
			}
			ListOfCourses = new string[SafeSec2 - 1];
			if (count == DelIndex)
				for (int i = 0; i < SafeSec2 - 1; i++)
				{
					ListOfCourses[i] = temp[i];
				}
			else
			{

				for (int i = 0; i < DelIndex; i++)
				{
					ListOfCourses[i] = temp[i];
				}
				for (int i = DelIndex; i < SafeSec2; i++)
				{
					ListOfCourses[i] = temp[i + 1];
				}

			}
		}
		delete[] temp;
		cout << "Sucessfully deleted the course: " << a << endl;
	}
	count = SafeSec2 - 1;
}

void Admin::Display()
{
	Person::display();
	cout << "Department: "<<this->Department;
	cout << "Designation: "<<this->Designation;
}

void Admin::DisplayCour()
{
	
}
