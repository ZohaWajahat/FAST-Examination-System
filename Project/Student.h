#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
using namespace std;
class Student
{
	private:
		string RollNo;
	public:
		Student();
		Student(string RollNo);
		string courses(int ind);
};
#endif
