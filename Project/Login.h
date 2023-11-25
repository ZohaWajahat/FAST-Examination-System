#ifndef LOGIN_h
#define LOGIN_h
#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
using namespace std;
class Login		//class for login
{
	private:
		string Username;		//Variable for username
		string Password;		//Variable for password
	public:
		Login();		//Default constructor
		Login(string Username, string Password);		//Parametrized constructor 
		bool validate_Password();		//Function to check whther the password is valid
		void set_password(string pass);		//Setter for password
		bool log();		//Function to check whether the user is student or teacher
		int Student_Index();
};
#endif
