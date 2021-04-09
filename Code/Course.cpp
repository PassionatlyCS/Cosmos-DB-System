#include "Course.h"



string Course::getName() const
{
	return Name;
}

int Course::getCode() const
{
	return code;
}

int Course::getCreditHrs() const
{
	return creditHrs;
}

void Course::setName(string a)
{
	Name = a;
}

void Course::setCode(int a)
{
	code = a;
}

void Course::setCreditHrs(int a)
{
	creditHrs = a;
}

void Course::display()
{
	cout << getCode() << " " << getName() << " credit hrs: " << getCreditHrs();
}

void Course::display2()
{
	cout << getCode() << " " << getName() << " credit hrs: " << getCreditHrs();
	SecObj.display();
}

Course::Course(string a,int b,int c,string d)
{
	Name = a;
	code = b;
	creditHrs = c;
	SecObj.setName(d);
}

Course::Course()
{
	Name = "";
	code = 0;
	creditHrs = 0;
	SecObj;
}

Course::~Course()
{
}
