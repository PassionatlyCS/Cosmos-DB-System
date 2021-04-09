#pragma once
#include<iostream>
#include<iomanip>
#include<string>
#include"Date.h"

using namespace std;

//Maibox unchanged as of, working as required 4:51pm 1st Agugust

class Mailbox
{
	Date obj;
	string *SentMessages;
	string *RecievedMessages;
	int notif;

public:

//	void addMessage(); after person class
//	void deleteMessages(); after person class
//	void SendMessage(admin &a, student a) admin to one student
//	void SendMessage(student &a, student a) student to student
//	void SendMessage(admin &a, student.btach) admin to a batch
//	void SendMessage(faculty &a, factulty.id ) faculty to faculty
//	void SendMessage(faculty &a, admin a) faculty to 
//	void SendMessage(student &a, studnet &b)



	Mailbox();
	virtual ~Mailbox();
};






