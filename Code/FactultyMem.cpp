#include "FactultyMem.h"


void FactultyMem::loginPage()
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

void FactultyMem::addMarkstS(Student& obj,string ident, float marks, float wight, float max)
{
	obj.b1.CourObj->SecObj.MaObj.Add_impl( ident,  marks,  wight,  max);
}

void FactultyMem::changeMarkstS(Student& obj, float merks, int pos, string nam, float wight, float max)
{
	
	obj.b1.CourObj->SecObj.MaObj.Chnge_imp(merks, pos, nam, wight, max);
}

FactultyMem::FactultyMem(const string a, const string b, const string c, const string d, const string e, const string f, int g, int h, const string i, const string j, const string k, int l, const string m, const string n, const string o, const string p, int q, const string r, const string s, const string t, const string u, const string v, int w, int x, string aa, char *bb, char *cc, const string dd, const string ee, const string ff) :Person(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x)
{
	FiD = aa;
	int size1 = strlen(bb);
	this->sections_as = new char[size1 + 1];
	strcpy_s(sections_as, size1+1, bb);

	int size2 = strlen(cc);
	this->cour_as = new char[size2 + 1];
	strcpy_s(cour_as, size2+1, cc);

	Campus = dd;
	department = ee;
	designation = ff;
	username = FiD;
	password = "1234";
}



FactultyMem::~FactultyMem()
{
}
