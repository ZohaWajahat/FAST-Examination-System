#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
#include"Teacher.h"
using namespace std;
Teacher::Teacher()		//Default Constructor
{
	Course1="";		//Initializing Course with 0
}
Teacher::Teacher(string Course1)		//Parametrized Constructor
{
	this->Course1=Course1;		//Assiging value to Course1
}
bool Teacher::Course_Availibility()
{
	string file_name1="courses.csv";		//Reading a file named "courses.csv"
	string line1;		//Variable to read each line of the file
	bool course=false;		//Variable to check whether the course is available
	ifstream file2(file_name1);		//Opening the file
	while (getline(file2,line1))		//While loop to read every single line of the file
	{
		string cs=line1.substr(0,line1.find(","));		//Storing every line in a string
		for(char& c:cs)		//For loop to change every character of name to lower character
		{
			c=tolower(c);
		}
		for(char& c:Course1)		//For loop to change every character of course to lower character
		{
			c=tolower(c);
		}
		if(cs==Course1)		//Condtion to check whether the course is found in the file or not
		{
			course=true;
			break;
		}
	}
	file2.close();		//Closing the file
	return course;
}
void Teacher::Set_Course(string Course1)
{
	this->Course1=Course1;
}
