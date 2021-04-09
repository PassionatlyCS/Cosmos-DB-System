#include "Attendance.h"



void Attendance::calculatePercent()
{
	cout << endl;
	float a= 0;
	for (int i = 0; i < attCount; i++)
	{
		if (Attend[i] == "P")
		{
			a += 1;
		}
	}
	percent = a / attCount;
}

void Attendance::AddLec(string e, int b, int c, int d)
{
	string a = e;
	if (Attend == NULL)
		{
			Attend = new string[1];
			Obj = new Date[1];

			while (a != "P" && a != "A")
			{
				cout << "Please enter A for absent or P for present" << endl;
				cin >> a;
			}

			Attend[0] = a;
			Obj[0].setDay(b);
			Obj[0].setMonth(c);
			Obj[0].setYear(d);
			attCount = 1;

			calculatePercent();
			return;
		}

	int tempAttend = attCount;
	int tempDate = attCount;

	if (Attend != NULL)
	{
		string *temp = new string[attCount];
		for (int i = 0; i <tempAttend; i++)
		{
			temp[i] = Attend[i];
		}
		Date *tempDate = new Date[tempAttend+1];
		for (int i = 0; i <tempAttend; i++)
		{
			tempDate[i].setDay(Obj[i].getday());
			tempDate[i].setMonth(Obj[i].getmonth());
			tempDate[i].setYear(Obj[i].getyear());

		}
		delete[] Attend;
		attCount = attCount + 1;
		Attend = new string[attCount];
		for (int i = 0; i <tempAttend; i++)
		{
			Attend[i] = temp[i];
		}
		for (int i = 0; i <tempAttend; i++)
		{
			Obj[i].setDay(tempDate[i].getday());
			Obj[i].setMonth(tempDate[i].getmonth());
			Obj[i].setYear(tempDate[i].getyear());
		}
		while (a != "P" && a != "A")
		{
			cout << "Please enter A for absent or P for present" << endl;
			cin >> a;
		}

		Obj[attCount - 1].setDay(b);
		Obj[attCount - 1].setMonth(c);
		Obj[attCount - 1].setYear(d);
		Attend[attCount - 1] = a;
		cout << "Sucessfully added the attendace: ";
		//cout << Attend[attCount - 1] << endl;
		
		attCount = tempAttend + 1;
		calculatePercent();
		return;
	}
}

void Attendance::display()
{
	for (int i = 0; i < attCount; i++)
	{
		Obj[i].display();
		cout << *(Attend+i) << " ";
		cout << endl;
	}
	cout << percent;

}

	Attendance::Attendance()
{
	Attend = NULL; attCount = 0;
	Obj = NULL;
}


Attendance::~Attendance()
{
}
