//Usman Ali i160164

#include"Date.h"
#include"Mailbox.h"
#include"Person.h"
#include"Attendance.h"
#include"Marks.h"
#include"Batch.h"
#include"Course.h"
#include"Section.h"
#include"Admin.h"
#include"FactultyMem.h"
#include"Student.h"

#include<iostream>
#include<fstream>
#include<iomanip>


#include<string>
using namespace std;

void initializeCSV() {
	ofstream myfile;
	myfile.open("Person.csv");
	myfile << "Name, Father's Name, Gender, Email, CNIC, Mobile Number, Age, Current Address, Current City, Current Country, Current Postal Code, Current Home Phone, Permanent Address, Permanent City, Permanent Country, Permanent Postal Code, Permanent Home Phone, Blood Group, Guardian Name, Guardian Relation, Guardian Mobile#, \n";
	myfile.close();
}

int main()
{

	cout << "Welcome to the Project" << endl;
//for the person obj
	string a = "Admin";
	string b = "AdminDad";
	string c = "Male";
	string d = "Admin@nu.edu.pk";
	string e= "37405xxxxxxxx";

	string f = "090078601";
	int g = 41;

	int h = 24;
	int w = 9;
	int x = 1976;
	//fmrv
	string i = "House 167,Street 47, F10/4";
	string j = "Islamabad";
	string k ="Paksitan";
	int l = 44000 ;
	string m = "090078601";

	string n = "House 21 b, Street 19, Defense Road";
	string o = "Abu Dhabi";
	string p = "UAE";
	int q = 51133;
	string r = "0123456879 //Idek ";

	string s= "No point";

	string t= "Abba g";
	string u="Father";
	string v= "090078601";
	string aa = "EE"; string bb = "IDEK";
	int cc = 0;
	Admin A(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x,aa,bb,cc);
	A.loginPage();
	A.display();

	initializeCSV();
	A.writeToCsv();
	int menu;
	cout << "Press 1 to add a student" << endl;
	cout << "Press 2 to add a Faculty member" << endl;
	cin >> menu;
	
	if (menu == 1)
	{
		string a = "Student";
		string b = "StudentDad";
		string c = "Male";
		string d = "Student@nu.edu.pk";
		string e = "37405xxxxxxxx";

		string f = "090078601";
		int g = 41;

		int h = 24;
		int w = 9;
		int x = 1976;
		//fmrv
		string i = "House 167,Street 47, F10/4";
		string j = "Islamabad";
		string k = "Paksitan";
		int l = 44000;
		string m = "090078601";

		string n = "House 21 b, Street 19, Defense Road";
		string o = "Abu Dhabi";
		string p = "UAE";
		int q = 51133;
		string r = "0123456879 //Idek ";

		string s = "No point";

		string t = "Abba g";
		string u = "Father";
		string v = "090078601";
		string aa = "CS"; string bb = "BSCS";
		int cc = 20160164; 
		string dd = "160164";

		Student Obj(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, aa, bb, cc,dd);
		Obj.Display();
	}
	//for marks obj
	/*
	string q = "assign";
	Marks m1;
	m1.Add_impl(q,8.0,2.0,10.0);
	m1.display2();
	q = "Quiz2";
	m1.Add_impl(q, 18.0, 12.0, 20.0);
	m1.display2();
	*/
	/*
	Attendance A1;
	A1.AddLec("A", 24, 9, 1996);
	A1.AddLec("P", 25, 9, 1996);
	A1.AddLec("P", 26, 9, 1996);
	A1.AddLec("P", 27, 9, 1996);
	A1.AddLec("P", 28, 9, 1996);
	A1.AddLec("P", 29, 9, 1996);
	A1.AddLec("A", 30, 9, 1996);
	A1.display();
	*/

	cout << endl;
	cout << endl;
	cout << endl;

	cout << "This is the project" << setw(12) <<"HI";
 	system("PAUSE");
	return 0;
}