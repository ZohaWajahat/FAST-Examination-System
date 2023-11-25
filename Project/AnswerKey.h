#ifndef ANSWERKEY_H
#define ANSWERKEY_H
#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
using namespace std;
class Answer_Key
{
	public:
		void MCQS_Answers(string course,string Topic_Name);
		void True_False_Answers(string course,string Topic_Name);
};
#endif
