#include "Batch.h"



string Batch::getBatch() const
{
	return BatName;
}

void Batch::display()
{
	cout << "Batch Name: " << getBatch()<< endl;
	for (int i = 0; i <= cour; i++)
	{
		CourObj[i].display2();
	}
}

void Batch::setName(string a)
{
	BatName = a;
}

void Batch::addCourse(string a, int b, int c)
{
	if (CourObj == NULL)
	{
		CourObj = new Course[1];
		CourObj[0].setName(a);
		CourObj[0].setCode(b);
		CourObj[0].setCreditHrs(c);
		cout << "Sucessfully added the a course: " << a << endl; 		//cout << marks[0];
		cour = 1;
		return;
	}
	int tempCourcount = cour;

	if (CourObj != NULL)
	{
		Course *temp = new Course[tempCourcount];
		for (int i = 0; i <tempCourcount; i++)
		{
			temp[i] = CourObj[i];
		}
		delete[] CourObj;
		cour = cour + 1;
		CourObj = new Course[cour];
		for (int i = 0; i <tempCourcount; i++)
		{
			CourObj[i] = temp[i];
		}
		CourObj[cour - 1].setName(a);
		CourObj[cour - 1].setCode(b);
		CourObj[cour - 1].setCreditHrs(c);
		cout << "Sucessfully added the Course"<< endl;
		delete[] temp;
		cour = tempCourcount + 1;
		return;
	}
}

Batch::Batch()
{
	BatName = "";
	CourObj = NULL;
}


Batch::~Batch()
{
}
