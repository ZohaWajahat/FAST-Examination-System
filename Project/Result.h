#ifndef RESULT_H
#define RESULT_H
#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
using namespace std;
class Result
{
	private:
		int marks_per_question;
		int total_marks;
		int obtained_marks;
	public:
		Result();
		Result(int marks_per_question,int total_marks,int obtained_marks);
		int CalculateTotalMarks(string quizquestions);
		void result_mcqs(string course,string topic,char opt1,char opt2,char opt3);
		void result_truefalse(string course,string topic,char opt1,char opt2,char opt3);
		void result_descriptive(string course,string topic,string ans);
};
#endif
