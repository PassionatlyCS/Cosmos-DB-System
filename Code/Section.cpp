#include "Section.h"



void Section::display()
{
	cout << "Section: " << Name;
	MaObj.display2();
	AtObj.display();
}

void Section::setName(string a)
{
	Name = a;
}

string Section::getName() const
{
	return Name;
}

Section::Section(string a, Marks ma, Attendance Att)
{
	Name = a;
	MaObj = ma;
	AtObj = Att;
}


Section::Section()
{
	Name = "";
	MaObj;
	AtObj;
}

Section::~Section()
{
}
