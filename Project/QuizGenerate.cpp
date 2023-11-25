#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
#include"QuizGenerate.h"
using namespace std;
Quiz_Generate::Quiz_Generate()
{
	marks_per_question=0;
	total_marks=0;
}
Quiz_Generate::Quiz_Generate(int marks_per_question,int total_marks)
{
	this->marks_per_question=marks_per_question;
	this->total_marks=total_marks;
}
int Quiz_Generate::calculate_total_marks(string quizquestions)
{
	if(quizquestions=="MCQS")
	{
		total_marks=3*marks_per_question;
	}
	else if(quizquestions=="True/False")
	{
		total_marks=3*marks_per_question;
	}
	else if(quizquestions=="Descriptive")
	{
		total_marks=1*marks_per_question;
	}
	return total_marks;
}
