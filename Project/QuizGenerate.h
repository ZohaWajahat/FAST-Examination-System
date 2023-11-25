#ifndef QUIZGENERATE_H
#define QUIZGENERATE_H
#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
using namespace std;
class Quiz_Generate
{
	private:
		int marks_per_question;
		int total_marks;
	public:
		Quiz_Generate();
		Quiz_Generate(int marks_per_question,int total_marks);
		int calculate_total_marks(string quizquestions);
};
#endif
