#ifndef QUIZCONDUCT_H
#define QUIZCONDUCT_H
#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
using namespace std;
class Quiz_Conduct
{
	private:
		string Topic_Name;
		string Question_Type;
	public:
		Quiz_Conduct();
		Quiz_Conduct(string Topic,string Question_Type);
		void MCQS_Questions(string course);
		void True_False_Questions(string course);
		void Descriptive_Questions(string course);
};
#endif
