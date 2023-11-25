#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
#include"Login.h"
using namespace std;
Login::Login()		//Default constructor
{
	Username="";		//Initializing Username with 0
	Password="";		//Initializing Password with 0
}
Login::Login(string Username, string Password)		//Parametrized constructor 
{
	this->Username=Username;		//Assigning value to Username
	this->Password=Password;		//Assigning value to Password
}
bool Login::validate_Password()		//Function to check whther the password is valid
{
	int length=Password.length();		//Variable to calculate the length of password
	bool Upper_Ch=false;		//Variable to check whther the password has upper character
	bool Lower_Ch=false;		//Variable to check whther the password has lower character
	bool Digit=false;		//Variable to check whther the password has digit
	bool Special_Ch=false;		//Variable to check whther the password has special character
	for(char c:Password)		//For loop to check every chracter of the password
	{
		if((c>='A')&&(c<='Z'))		//Condition to check whther the password has upper character
		{
			Upper_Ch=true;
		}
		if((c>='a')&&(c<='z'))		//Condition to check whther the password has lower character
		{
			Lower_Ch=true;
		}
		if((c>='0')&&(c<='9'))		//Condition to check whther the password has digit
		{
			Digit=true;
		}
		if(!((c>='A')&&(c<='Z'))||!((c>='a')&&(c<='z')))		//Condition to check whther the password has special character
		{
			if(!((c>='0')&&(c<='9')))
			{
				Special_Ch=true;
			}
		}
	}
	bool check=(length>=6)&&(Upper_Ch)&&(Lower_Ch)&&(Digit)&&(Special_Ch);		//Variable to check whether the password reach all the given conditions
	if(check)		//Return true if the it meets all the conditions
	{
		return true;
	}
	else		//Else return false id it doesnot
	{
		return false;
	}
}
void Login::set_password(string pass)		//Setter for password
{
	Password=pass;
}
bool Login::log()		//Function to check whether the user is student or teacher
{
	string file_name="students.csv";		//Reading a file named "students.csv"
	string line;		//Variable to read each line of the file
	bool student=false;		//Variable to check whether the user is student
	ifstream file1(file_name);		//Opening the file
	while (getline(file1,line))		//While loop to read every single line of the file
	{
		string nm=line.substr(0,line.find(","));		//Storing every line in a string
		for(char& c:nm)		//For loop to change every character of name to lower character
		{
			c=tolower(c);
		}
		for(char& c:Username)		//For loop to change every character of username to lower character
		{
			c=tolower(c);
		}
		if(nm==Username)		//Condtion to check whether the username is found in the file or not
		{
			student=true;
			break;
		}
	}
	file1.close();		//Closing the file
	return student;
}
int Login::Student_Index()
{
	string file_name="students.csv";		//Reading a file named "students.csv"
	string line;		//Variable to read each line of the file
	int stud=0;		//Variable to store the number in which student is found
	ifstream file1(file_name);		//Opening the file
	while (getline(file1,line))		//While loop to read every single line of the file
	{
		stud++;
		string nm=line.substr(0,line.find(","));		//Storing every line in a string
		for(char& c:nm)		//For loop to change every character of name to lower character
		{
			c=tolower(c);
		}
		for(char& c:Username)		//For loop to change every character of username to lower character
		{
			c=tolower(c);
		}
		if(nm==Username)		//Condtion to check whether the username is found in the file or not
		{
			break;
		}
	}
	file1.close();		//Closing the file
	return stud;
}
