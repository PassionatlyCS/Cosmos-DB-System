#include "Marks.h"



Marks::Marks()
{
	maxMerk = NULL; MaxCount = 0;
	marks = NULL; mcount = 0;
	weightage = NULL; wcount = 0;
	Identifier = NULL; iDcount = 0;
}


Marks::~Marks()
{
}

void Marks::addMarks(float upmarks)
{
	
	if (getMarks() == NULL)
	{
		marks = new float[1];
		while (upmarks <= -0.1)
		{
			cout << "Please enter non negative marks: " << endl;
			cin >> upmarks;
		}
		marks[0] = upmarks;
		cout << "Sucessfully added the marks: " << upmarks << endl; 		//cout << marks[0];
		mcount = 1;


		return;
	}
	int tempMcount = mcount;

	if (getMarks() != NULL)
	{
			float *temp = new float[mcount];
			for (int i = 0; i <tempMcount; i++)
			{
				temp[i] = marks[i];
			}
			delete[] marks;
			mcount = mcount + 1;
			marks = new float [mcount];
			for (int i = 0; i <tempMcount; i++)
			{
				marks[i] = temp[i];
			}
			while (upmarks <= -0.1)
			{
				cout << "Please enter non negative marks: " << endl;
				cin >> upmarks;
			}
			marks[mcount-1] = upmarks;
			cout << "Sucessfully added the marks: " << upmarks << endl;
			delete[] temp;
		mcount = tempMcount + 1;
		return;
	}
}

void Marks::changeMarks(float a, int pos)
{
	while (pos > mcount || pos < 0)
	{
		cout << "Positin out of bounds, please re-enter positin or press 0 to exit" << endl;
		cin >> pos;
		pos = pos - 1;
		if (pos == -1)
		{
			return;
		}
		else
		{
			cout << "Please enter positin: ";
			cin >> pos;
			cout << endl;
		}
	}
	marks[pos-1] = a;
	cout << "Marks updated" << endl;
	cout << endl;
}

void Marks::addWeightage(float a)
{

	if (getWeightage() == NULL)
	{
		weightage = new float[1];
		while (a <= -0.1)
		{
			cout << "Please enter non negative weightage: " << endl;
			cin >> a;
		}
		weightage[0] = a;
		cout << "Sucessfully added the weightage: " << a << endl;
		wcount = 1;
		return;
	}
	int tempWcount = wcount;
	if (getMarks() != NULL)
	{
		float *temp = new float[wcount];
		for (int i = 0; i < tempWcount; i++)
		{
			temp[i] = weightage[i];
		}
		delete[] weightage;
		wcount = wcount + 1;
		weightage = new float[wcount];
		for (int i = 0; i < tempWcount; i++)
		{
			weightage[i] = temp[i];
		}
		while (a <= -0.1)
		{
			cout << "Please enter non negative weightage: " << endl;
			cin >> a;
		}
		weightage[wcount-1] = a;
		cout << "Sucessfully added the weightage: " << a << endl;
		delete[] temp;
		wcount = tempWcount + 1;
		return;
	}
}

void Marks::changeW(float a, int pos)
{
	while (pos > wcount || pos < 0)
	{
		cout << "Positin out of bounds, please re-enter positin or press 0 to exit" << endl;
		cin >> pos;
		pos = pos - 1;
		if (pos == -1)
		{
			return;
		}
		else
		{
			cout << "Please enter positin: ";
			cin >> pos;
			cout << endl;
		}
	}
	weightage[pos-1] = a;
	cout << "weightage updated" << endl;
	cout << endl;
}

void Marks::NameIdent(string a)
{
	int tempiDcount = iDcount;
	if (getIdent() == NULL)
	{
		Identifier = new string[1];
		while (a <= "")
		{
			cout << "Please enter an identifier (quiz,assignment,project,sessinal, final lab task): " << endl;
			cin >> a;
		}
		Identifier[0] = a;
		iDcount = 1;
		cout << "Sucessfully added the Identifier: " << Identifier[0] << endl;
		return;
	}
	if (getIdent() != NULL)
	{
		string *temp = new string[iDcount];
		for (int i = 0; i <tempiDcount; i++)
		{
			temp[i] = Identifier[i];
		}
		delete[] Identifier;
		iDcount = iDcount + 1;
		Identifier = new string[iDcount];
		for (int i = 0; i <tempiDcount; i++)
		{
			Identifier[i] = temp[i];
		}
		while (a <= "")
		{
			cout << "Please enter an identifier: " << endl;
			cin >> a;
		}
		
		Identifier[iDcount-1] = a;
		cout << "Sucessfully added the Identifier: " << Identifier[iDcount - 1] << endl;
		delete[] temp;
		
		iDcount = tempiDcount + 1;
		return;
	}
}

void Marks::UpdateIdent(string a, int pos)
{
	while (pos > iDcount || pos < 0)
	{
		cout << "Positin out of bounds, please re-enter positin or press 0 to exit" << endl;
		cin >> pos;
		pos = pos - 1;
		if (pos == -1)
		{
			return;
		}
		else
		{
			cout << "Please enter positin: ";
			cin >> pos;
			cout << endl;
		}
	}
	Identifier[pos-1] = a;
	cout << "Identifer updated" << endl;
	cout << endl;
}

void Marks::AddMaxMarks(float a)
{
	
	if (getMax() == NULL)
	{
		maxMerk = new float[1];
		while (a <= 0)
		{
			cout << "Please enter non negative max marks: " << endl;
			cin >> a;
		}
		maxMerk[0] = a;
		MaxCount = 1;
		cout << "Sucessfully added the max marks: " << a << endl;
		return;
	}
	int tempMexcount = MaxCount;
	if (getMax() != NULL)
	{
		float *temp = new float[tempMexcount];
		for (int i = 0; i <tempMexcount; i++)
		{
			temp[i] = maxMerk[i];
		}
		delete[] maxMerk;
		MaxCount = MaxCount + 1;
		maxMerk = new float[MaxCount];
		for (int i = 0; i <tempMexcount; i++)
		{
			maxMerk[i] = temp[i];
		}
		while (a <= -0.1)
		{
			cout << "Please enter non negative max marks: " << endl;
			cin >> a;
		}
		maxMerk[mcount-1] = a;
		cout << "Sucessfully added the max marks: " << a << endl;
		delete[] temp;
		MaxCount = tempMexcount + 1;
		return;
	}
}

void Marks::UpdateMaxMarks(float a, int pos)
{
	while (pos > MaxCount || pos < 0)
	{
		cout << "Positin out of bounds, please re-enter positin or press 0 to exit" << endl;
		cin >> pos;
		pos = pos - 1;
		if (pos == -1)
		{
			return;
		}
		else
		{
			cout << "Please enter positin: ";
			cin >> pos;
			cout << endl;
		}
	}
	maxMerk[pos-1] = a;
	cout << "Max Marks updated" << endl;
	cout << endl;
	return;
}

float * Marks::getMarks() const
{
	return marks;
}

float * Marks::getWeightage() const
{
	return weightage;
}

string * Marks::getIdent() const
{
	return Identifier;
}

float * Marks::getMax() const
{
	return maxMerk;
}


void Marks::Add_impl(string ident, float marks, float wight, float max)
{
	NameIdent(ident);
	addMarks(marks);
	addWeightage(wight);
	AddMaxMarks(max);
}

void Marks::Chnge_imp(float merks, int pos, string nam, float wight, float max)
{
	UpdateIdent(nam, pos);
	UpdateMaxMarks(max, pos);
	changeMarks(merks,pos);
	changeW(wight, pos);
}

void Marks::calTotal()
{
	abosolutes = new float[MaxCount+1];
	float totesW = 0, totes_abs = 0;
	for (int i = 0; i < MaxCount; i++)
	{
		abosolutes[i] = (marks[i] * weightage[i]) / maxMerk[i];
	//	abosolutes[i] = (8.0* 2.0) / 10.0;
		totes_abs = abosolutes[i] + totes_abs;
		totesW = totesW + weightage[i];
	}

	float a;
	a = (totes_abs * totesW) / 100;
	abosolutes[MaxCount] = a;
//	cout << abosolutes[MaxCount + 1];
}

void Marks::display2()
{
	cout << "Identifier: ";
	for (int i = 0; i < iDcount; i++)
	{
		cout << Identifier[i] << setw(3) << " ";
	}
	cout << endl;

	cout << "Marks obtained: ";
	
	for (int i = 0; i < mcount; i++)
	{
		cout << marks[i] << setw(3) << " ";
	}
	cout << endl;

	cout << "Total marks: ";
	for (int i = 0; i < MaxCount; i++)
	{
		cout << maxMerk[i] << setw(5) << "";
	}
	cout << endl;
	calTotal();
	cout << endl;
	cout << "Absolutes: ";
	for (int i = 0; i < MaxCount; i++)
	{
		cout << abosolutes[i] << setw(5) << "";
	}
	cout << endl;
	abosolutes[MaxCount] = 0.0;
	for (int i = 0; i < MaxCount; i++)
	{
		abosolutes[MaxCount] = abosolutes[i] + abosolutes[MaxCount];
	}
	cout << "Abs earned: " << abosolutes[MaxCount] << endl;
	cout << endl;
}