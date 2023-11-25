#ifndef QUIZBANK_H
#define QUIZBANK_H
#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
using namespace std;
class Quiz_Bank
{
	private:
		string Topic_Name;
		string Question_Type;
	public:
		Quiz_Bank();
		Quiz_Bank(string Topic_Name,string Question_Type);
		void mcqs_question(string course);
		void true_false_question(string course);
		void descriptive_question(string course);
};
#endif
