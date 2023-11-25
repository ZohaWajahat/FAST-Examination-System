#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
#include"Student.h"
using namespace std;
Student::Student()
{
	RollNo="";
}
Student::Student(string RollNo)
{
	this->RollNo=RollNo;
}
string Student::courses(int ind)
{
	int total_courses=0;
	ifstream infile("Data_Structures.csv");
	string course1;
	string course2;
	string course3;
	string course4;
	string course5;
	if(infile)
	{
		string reg;
		int current=1;
		while(getline(infile,reg))
		{
			if(current==ind)
			{
				if(stoi(reg)==1)
				{
					cout<<"You are registered for Data Structures Course"<<endl;
					total_courses++;
					course1="Data Structures";
				}
				else
				{
					cout<<"You are not registered for Data Structures Course"<<endl;
				}
				break;
			}
			current++;
		}
		infile.close();
	}
	cout<<endl<<endl;
	ifstream infile1("Programming_Fundamentals.csv");
	if(infile1)
	{
		string reg;
		int current=1;
		while(getline(infile1,reg))
		{
			if(current==ind)
			{
				if(stoi(reg)==1)
				{
					cout<<"You are registered for Programming Fundamentals Course"<<endl;
					total_courses++;
					course2="Programming Fundamentals";
				}
				else
				{
					cout<<"You are not registered for Programming Fundamentals Course"<<endl;
				}
				break;
			}
			current++;
		}
		infile1.close();
	}
	cout<<endl<<endl;
	ifstream infile2("Object_Oriented_Programming.csv");
	if(infile2)
	{
		string reg;
		int current=1;
		while(getline(infile2,reg))
		{
			if(current==ind)
			{
				if(stoi(reg)==1)
				{
					cout<<"You are registered for Object Oriented Programming Course"<<endl;
					total_courses++;
					course3="Object Oriented Programming";
				}
				else
				{
					cout<<"You are not registered for Object Oriented Programming Course"<<endl;
				}
				break;
			}
			current++;
		}
		infile2.close();
	}
	cout<<endl<<endl;
	ifstream infile3("Deep_Learning.csv");
	if(infile3)
	{
		string reg;
		int current=1;
		while(getline(infile3,reg))
		{
			if(current==ind)
			{
				if(stoi(reg)==1)
				{
					cout<<"You are registered for Deep Learning Course"<<endl;
					total_courses++;
					course4="Deep Learning";
				}
				else
				{
					cout<<"You are not registered for Deep Learning Course"<<endl;
				}
				break;
			}
			current++;
		}
		infile3.close();
	}
	cout<<endl<<endl;
	ifstream infile4("Artificial_Intelligence.csv");
	if(infile4)
	{
		string reg;
		int current=1;
		while(getline(infile4,reg))
		{
			if(current==ind)
			{
				if(stoi(reg)==1)
				{
					cout<<"You are registered for Artificial Intelligence Course"<<endl;
					total_courses++;
					course5="Artificial Intelligence";
				}
				else
				{
					cout<<"You are not registered for Artificial Intelligence Course"<<endl;
				}
				break;
			}
			current++;
		}
		infile4.close();
	}
	cout<<endl<<endl;
	cout<<"You are registered in "<<total_courses<<" courses"<<endl;
	cout<<endl<<endl;
	char choice;
	cout<<"Do You like to Attempt the Quiz: "<<endl;
	cin>>choice;
	cout<<endl<<endl;
	if(choice=='y')
	{
		if(total_courses==1)
		{
			string cour;
			cout<<"Enter your Course to verify the Quiz: "<<endl;
			cin.ignore();
			getline(cin,cour);
			cout<<endl<<endl;
			if(cour==course1)
			{
				return course1;
			}
			if(cour==course2)
			{
				return course2;
			}
			if(cour==course3)
			{
				return course3;
			}
			if(cour==course4)
			{
				return course4;
			}
			if(cour==course5)
			{
				return course5;
			}
		}
		if(total_courses>1)
		{
			cout<<"You can only select 1 Course to attempt the Quiz"<<endl<<endl;
			string cour;
			cout<<"Enter your Course to verify the Quiz: "<<endl;
			cin.ignore();
			getline(cin,cour);
			cout<<endl<<endl;
			if(cour==course1)
			{
				return course1;
			}
			if(cour==course2)
			{
				return course2;
			}
			if(cour==course3)
			{
				return course3;
			}
			if(cour==course4)
			{
				return course4;
			}
			if(cour==course5)
			{
				return course5;
			}
		}
	}
}
