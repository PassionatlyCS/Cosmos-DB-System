#include "Person.h"


void Person::InputData(string a, string b, string c, string d, string e, string f, int g, int h, string i, string j, string k, int l, string m, string n, string o, string p, int q, string r, string s, string t, string u, string v, int w, int x)
{
	Name = a;
	FathName = b;
	gender = c;
	email = d;
	CNIC = e;

	MobileNum = f;
	Age = g; // Can calculate self. 

	Dob.setDay(h);
	Dob.setMonth(w);
	Dob.setYear(x);

	Curraddress = i;
	CurrCity = j;
	CurrCountry = k;
	CurrPostalCde = l;
	CurrHomePh = m;
	Permaddress = n;
	PermCity = o;
	PermCountry = p;
	PermPostalCde = q;
	PermHomePh = r;

	bloodGrp= s;

	Guardian=t;
	GurRelation=u;
	GurMblPhn=v;
}

Person::Person(const string a, const string b, const string c, const string d, const string e, const string f, int g, int h, const string i, const string j, const string k, int l, const string m, const  string n, const string o, const string p, int q, const string r, const  string s, const string t, const string u, const string v, int w, int x)
{
	InputData( a,  b,  c,  d,  e,  f,  g,  h,  i,  j,  k,  l,  m,  n,  o,  p,  q,  r,  s,  t,  u,  v,  w,  x);
}

Person::~Person()
{

}

void Person::setNam(string a)
{
	Name = a;
}

void Person::setFathNam(string a)
{
	FathName = a;
}

void Person::setGen(string a)
{
	gender = a;
}

void Person::setEmail(string a)
{
	email = a;
}

void Person::setCNIC(string a)
{
	CNIC = a;
}

string Person::getNam() const
{
	return Name;
}

string Person::getFathNam() const
{
	return FathName;
}

string Person::getGen() const
{
	return gender;
}

string Person::getEmail() const
{
	return email;
}

string Person::getCNIC() const
{
	return CNIC;
}

void Person::setMblePne(string a)
{
	MobileNum = a;
}

void Person::setAge(int a)
{
	Age = a;
}

void Person::setDob(int a, int b, int c)
{
	Dob.setMonth(b);
	Dob.setDay(a);
	Dob.setYear(c);
}

string Person::getMblPhone() const
{
	return MobileNum;
}

int Person::getAge() const
{
	return Age;
}

Date Person::getDob() const
{
	return Dob;
}

void Person::setCurraddress(string a)
{
	Curraddress = a;
}

void Person::setCurrCity(string a)
{
	CurrCity = a;
}

void Person::setCurrCountry(string a)
{
	CurrCountry = a;
}

string Person::getCurAdd() const
{
	return Curraddress;
}

string Person::getCurCirt() const
{
	return CurrCity;
}

string Person::getCurrCountry() const
{
	return CurrCountry;
}

void Person::setCurrPostalCde(int a)
{
	CurrPostalCde = a;
}

void Person::setCurrHomePh(string a)
{
	CurrHomePh = a;
}

int Person::getCurrPostalCde() const
{
	return CurrPostalCde;
}

string Person::getCurrHomePh() const
{
	return CurrHomePh;
}

void Person::setPermaddress(string a)
{
	Permaddress = a;
}

void Person::setPermCity(string a)
{
	PermCity = a;
}


void Person::setPermCountry(string a)
{
	PermCountry = a;
}

string Person::getPermAdd() const
{
	return Permaddress;
}

string Person::getPermCirt() const
{
	return PermCity;
}

string Person::getPermCountry() const
{
	return PermCountry;
}

void Person::setPermPostalCde(int a)
{
	PermPostalCde = a;
}

void Person::setPermHomePh(string a)
{
	PermHomePh = a;
}

void Person::setbloodGrp(string a)
{
	bloodGrp = a;
}

void Person::setGuardian(string a)
{
	Guardian = a;
}

void Person::setGurRelation(string a)
{
	GurRelation = a;
}

void Person::setGurMblPhn(string a)
{
	GurMblPhn = a;
}

int Person::getPermPostalCde() const
{
	return PermPostalCde;
}

string Person::getPermHomePh() const
{
	return PermHomePh;
}

string Person::getbloodGrp() const
{
	return bloodGrp;
}

string Person::getGuardian() const
{
	return Guardian;
}

string Person::getGurRelation() const
{
	return GurRelation;
}

string Person::getGurMblPhn() const
{
	return GurMblPhn;
}
void Person::display() const
{
	cout << "Personal Information " << endl;
	cout <<"Name: " << this->getNam() <<endl << "" << "Father's Name: " << getFathNam() <<endl;
	cout << "Gender: " << this->getGen() << endl << "" << "Email: " << getEmail() << endl << "CNIC: " << this->getCNIC() <<endl;
	cout << "Mobile Phone number: " << this->getMblPhone() << endl << "Age: " << this->getAge() << endl << "DOB: ";
	this->Dob.display(); cout << endl;
	
	cout << endl;

	cout << "Contact Information" << endl;
	cout << "Current Address: " << this->getCurAdd() << endl << "" << "Current City: " << getCurCirt() << endl;
	cout << "Current Address Country: " << this->getCurrCountry() << endl << "Current Postal Code: " << getCurrPostalCde() << endl << "Current Home Phone: " << this->getCurrHomePh() << endl;
	cout << endl;

	cout << "Parmenant Address: " << this->getPermAdd() << endl << "" << "Parmenant City: " << getPermCirt() << endl;
	cout << "Parmenant Address Country: " << this->getPermCountry() << endl << "Parmenant Postal Code: " << getPermPostalCde() << endl << "Parmenant Home Phone: " << this->getPermHomePh() << endl;
	
	cout << endl;
	
	cout << "Blood Type: " << getbloodGrp() << endl;
	cout << endl;
	cout << "Guardian Information" << endl;
	cout << "Guarduan Name: " << this->getGuardian() << endl << "" << "Relation: " << getGurRelation() << endl;
	cout << "Guardian Phone Number: " << getGurMblPhn();
}