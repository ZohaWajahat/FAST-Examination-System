#ifndef TEACHER_H
#define TEACHER_H
#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
using namespace std;
class Teacher		//Class for Teacher
{
	private:
		string Course1;		//Variable for course teacher want to teach
	public:
		Teacher();		//Default Constructor
		Teacher(string Course1);		//Parametrized Constructor
		bool Course_Availibility();
		void Set_Course(string Course1);
};
#endif
