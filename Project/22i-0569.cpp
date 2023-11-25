#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
#include"Login.h"
#include"Login.cpp"
#include"Teacher.h"
#include"Teacher.cpp"
#include"QuizBank.h"
#include"QuizBank.cpp"
#include"Time.h"
#include"Time.cpp"
#include"Date.h"
#include"Date.cpp"
#include"QuizGenerate.h"
#include"QuizGenerate.cpp"
#include"Student.h"
#include"Student.cpp"
#include"QuizConduct.h"
#include"QuizConduct.cpp"
#include"AnswerKey.h"
#include"AnswerKey.cpp"
#include"Result.h"
#include"Result.cpp"
using namespace std;
int main()
{
	int choice;
	cout<<"\t\t Menu for Login"<<endl;		//Menu for login process
	cout<<"Press 1 to login"<<endl;		//User will enter his user name and password if he presses 1
	cout<<"Press 2 to change your password"<<endl;		//User will be able to change his password if he presses 2
	cin>>choice;		//Inputting user choice
	cout<<endl<<endl;
	string ID;
	if(choice==1)		//If choice is 1, User will enter his login details
	{
		string pass;
		cout<<"Enter your password: ";		//Password of the user
		cin>>pass;
		cin.ignore();
		cout<<"Enter your Username: ";		//User name of the user
		getline(cin,ID);
		Login l1(ID,pass);		//Creating object of class Login
		cout<<endl<<endl;
		string pass1;
		while(!l1.validate_Password())		//While loop which will run until the password is not valid
		{
			string pass2;		//New variable for the changed password
			cout<<"Your password is invalid"<<endl;		//WIll print when the conditions is not met
			cout<<pass<<"*"<<endl;
			cout<<"Password: ";
			cin>>pass2;		//Asking for correct password
			l1.set_password(pass2);
		}
		if(l1.validate_Password())		//Condition of whether the password is valid
		{
			if(l1.log())		//If the Password is valid, then it will check whther user is a student or a teacher
			{
				cout<<"Welcome "<<ID<<endl;
				cout<<"Student Section"<<endl;
				cout<<endl<<endl;
				int no=l1.Student_Index();
				string rollno="";
				ifstream infile("students_rollno.csv");
				if(infile)
				{
					string roll;
					int current=1;
					while(getline(infile,roll))
					{
						if(current==no)
						{
							rollno=roll;
							cout<<"Your Roll No is: "<<rollno<<endl;
							break;
						}
						current++;
					}
					infile.close();
				}
				Student stu(rollno);
				cout<<endl<<endl;
				string course=stu.courses(no);
				string topic;
				string quiztopic;
				string quizquestions;
				if(course=="Programming Fundamentals")
				{
					cout<<"Topics of "<<course<<":"<<endl;
					quiztopic="Programming_Fundamentals.txt";
					string topicname;
					ifstream files(quiztopic);
					while(getline(files,topicname))
					{
						cout<<topicname<<endl;
					}
					cout<<endl<<endl;
					files.close();
					cout<<endl<<endl;
					cout<<"Enter the Topic of the Quiz your are Attempting: ";
					cin.ignore();
					getline(cin,topic);
					cout<<endl<<endl;
					cout<<"Enter the Type of Questions asked in the Quiz: ";
					cin>>quizquestions;
					cout<<endl;
				}
				else if(course=="Object Oriented Programming")
				{
					cout<<"Topics of "<<course<<":"<<endl;
					quiztopic="Object_Oriented_Programming.txt";
					string topicname;
					ifstream files(quiztopic);
					while(getline(files,topicname))
					{
						cout<<topicname<<endl;
					}
					cout<<endl<<endl;
					files.close();
					cout<<endl<<endl;
					cout<<"Enter the Topic of the Quiz your are Attempting: ";
					cin.ignore();
					getline(cin,topic);
					cout<<endl<<endl;
					cout<<"Enter the Type of Questions asked in the Quiz: ";
					cin>>quizquestions;
					cout<<endl;
				}
				else if(course=="Data Structures")
				{
					cout<<"Topics of "<<course<<":"<<endl;
					quiztopic="Data_Structures.txt";
					string topicname;
					ifstream files(quiztopic);
					while(getline(files,topicname))
					{
						cout<<topicname<<endl;
					}
					cout<<endl<<endl;
					files.close();
					cout<<endl<<endl;
					cout<<"Enter the Topic of the Quiz your are Attempting: ";
					cin.ignore();
					getline(cin,topic);
					cout<<endl<<endl;
					cout<<"Enter the Type of Questions asked in the Quiz: ";
					cin>>quizquestions;
					cout<<endl;
				}
				else if(course=="Artificial Intelligence")
				{
					cout<<"Topics of "<<course<<":"<<endl;
					quiztopic="Artificial_Intelligence.txt";
					string topicname;
					ifstream files(quiztopic);
					while(getline(files,topicname))
					{
						cout<<topicname<<endl;
					}
					cout<<endl<<endl;
					files.close();
					cout<<endl<<endl;
					cout<<"Enter the Topic of the Quiz your are Attempting:: ";
					cin.ignore();
					getline(cin,topic);
					cout<<endl<<endl;
					cout<<"Enter the Type of Questions asked in the Quiz: ";
					cin>>quizquestions;
					cout<<endl;
				}
				else if(course=="Deep Learning")
				{
					cout<<"Topics of "<<course<<":"<<endl;
					quiztopic="Deep_Learning.txt";
					string topicname;
					ifstream files(quiztopic);
					while(getline(files,topicname))
					{
						cout<<topicname<<endl;
					}
					cout<<endl<<endl;
					files.close();
					cout<<endl<<endl;
					cout<<"Enter the Topic of the Quiz your are Attempting:: ";
					cin.ignore();
					getline(cin,topic);
					cout<<endl<<endl;
					cout<<"Enter the Type of Questions asked in the Quiz: ";
					cin>>quizquestions;
					cout<<endl;
				}
				Quiz_Conduct qc(topic,quizquestions);
				char opt1;
				char opt2;
				char opt3;
				string ans;
				if(quizquestions=="MCQS")
				{
					qc.MCQS_Questions(course);
					cout<<"Enter the correct option for the first question: ";
					cin>>opt1;
					if((opt1=='a')||(opt1=='b')||(opt1=='c')||(opt1=='d'))
					{
						cout<<"Your option "<<opt1<<" has been selected"<<endl;
					}
					while(!((opt1=='a')||(opt1=='b')||(opt1=='c')||(opt1=='d')))
					{
						cout<<"You missed the question"<<endl;
						cout<<"Do you want to try again"<<endl;
						cout<<"Option: ";
						char ch;
						cin>>ch;
						if(ch=='y')
						{
							cin>>opt1;
							if((opt1=='a')||(opt1=='b')||(opt1=='c')||(opt1=='d'))
							{
								cout<<"Your option "<<opt1<<" has been selected"<<endl;
								break;
							}
						}
					}
					cout<<"Enter the correct option for the second question: ";
					cin>>opt2;
					if((opt2=='a')||(opt2=='b')||(opt2=='c')||(opt2=='d'))
					{
						cout<<"Your option "<<opt2<<" has been selected"<<endl;
					}
					while(!((opt2=='a')||(opt2=='b')||(opt2=='c')||(opt2=='d')))
					{
						cout<<"You missed the question"<<endl;
						cout<<"Do you want to try again"<<endl;
						cout<<"Option: ";
						char ch;
						cin>>ch;
						if(ch=='y')
						{
							cin>>opt2;
							if((opt2=='a')||(opt2=='b')||(opt2=='c')||(opt2=='d'))
							{
								cout<<"Your option "<<opt1<<" has been selected"<<endl;
								break;
							}
						}
					}
					cout<<"Enter the correct option for the first question: ";
					cin>>opt3;
					if((opt3=='a')||(opt3=='b')||(opt3=='c')||(opt3=='d'))
					{
						cout<<"Your option "<<opt3<<" has been selected"<<endl;
					}
					while(!((opt3=='a')||(opt3=='b')||(opt3=='c')||(opt3=='d')))
					{
						cout<<"You missed the question"<<endl;
						cout<<"Do you want to try again"<<endl;
						char ch;
						cin>>ch;
						if(ch=='y')
						{
							cout<<"Option: ";
							cin>>opt3;
							if((opt3=='a')||(opt3=='b')||(opt3=='c')||(opt3=='d'))
							{
								cout<<"Your option "<<opt3<<" has been selected"<<endl;
								break;
							}
						}
					}
					cout<<endl<<endl;
					Answer_Key ak;
					ak.MCQS_Answers(course,topic);
				}
				else if(quizquestions=="True/False")
				{
					qc.True_False_Questions(course);
					cout<<"Enter the correct option for the first question: ";
					cin>>opt1;
					if((opt1=='a')||(opt1=='b'))
					{
						cout<<"Your option "<<opt1<<" has been selected"<<endl;
					}
					while(!((opt1=='a')||(opt1=='b')))
					{
						cout<<"You missed the question"<<endl;
						cout<<"Do you want to try again"<<endl;
						char ch;
						cin>>ch;
						if(ch=='y')
						{
							cout<<"Option: ";
							cin>>opt1;
							if((opt1=='a')||(opt1=='b'))
							{
								cout<<"Your option "<<opt1<<" has been selected"<<endl;
								break;
							}
						}
					}
					cout<<"Enter the correct option for the second question: ";
					cin>>opt2;
					if((opt2=='a')||(opt2=='b'))
					{
						cout<<"Your option "<<opt2<<" has been selected"<<endl;
					}
					while(!((opt2=='a')||(opt2=='b')))
					{
						cout<<"You missed the question"<<endl;
						cout<<"Do you want to try again"<<endl;
						cout<<"Option: ";
						char ch;
						cin>>ch;
						if(ch=='y')
						{
							cin>>opt2;
							if((opt2=='a')||(opt2=='b'))
							{
								cout<<"Your option "<<opt1<<" has been selected"<<endl;
								break;
							}
						}
					}
					cout<<"Enter the correct option for the first question: ";
					cin>>opt3;
					if((opt3=='a')||(opt3=='b'))
					{
						cout<<"Your option "<<opt3<<" has been selected"<<endl;
					}
					while(!((opt3=='a')||(opt3=='b')))
					{
						cout<<"You missed the question"<<endl;
						cout<<"Do you want to try again"<<endl;
						cout<<"Option: ";
						char ch;
						cin>>ch;
						if(ch=='y')
						{
							cin>>opt3;
							if((opt3=='a')||(opt3=='b'))
							{
								cout<<"Your option "<<opt3<<" has been selected"<<endl;
								break;
							}
						}
					}
					Answer_Key ak;
					ak.True_False_Answers(course,topic);
				}
				else if(quizquestions=="Descriptive")
				{
					qc.Descriptive_Questions(course);
					cout<<"Write the Answer of the following Question: "<<endl;
					cin.ignore();
					getline(cin,ans); 
				}
				cout<<endl<<endl;
				int StartHrs;
				cout<<"Enter Hours in which the Quiz started: ";
				cin>>StartHrs;
				int StartMin;
				cout<<"Enter the Minutes in which the Quiz started: ";
				cin>>StartMin;
				int StartSec;
				cout<<"Enter the Seconds in which the Quiz started: ";
				cin>>StartSec;
				Time StartTime(StartHrs,StartMin,StartSec);
				cout<<endl<<endl;
				int EndHrs;
				cout<<"Enter Hours in which the Quiz ended: ";
				cin>>EndHrs;
				int EndMin;
				cout<<"Enter the Minutes in which the Quiz ended: ";
				cin>>EndMin;
				int EndSec;
				cout<<"Enter the Seconds in which the Quiz ended: ";
				cin>>EndSec;
				Time EndTime(EndHrs,EndMin,EndSec);
				cout<<endl<<endl;
				int SubmitHrs;
				cout<<"Enter Hours in which you submit the Quiz: ";
				cin>>SubmitHrs;
				int SubmitMin;
				cout<<"Enter the Minutes in which you submit the Quiz: ";
				cin>>SubmitMin;
				int SubmitSec;
				cout<<"Enter the Seconds in which you submit the Quiz: ";
				cin>>SubmitSec;
				Time SubmitTime(SubmitHrs,SubmitMin,SubmitSec);
				cout<<endl<<endl;
				cout<<"Starting Time of the Quiz:"<<endl;
				StartTime.display();
				cout<<endl<<endl;
				cout<<"Ending Time of the Quiz:"<<endl;
				EndTime.display();
				cout<<endl<<endl;
				cout<<"Submitted Time of the Quiz:"<<endl;
				SubmitTime.display();
				cout<<endl<<endl;
				if(EndHrs>SubmitHrs)
				{
					cout<<"Your Quiz is submitted"<<endl;
				}
				else if(EndHrs==SubmitHrs)
				{
					if(EndMin>SubmitMin)
					{
						cout<<"Your Quiz is submitted"<<endl;
					}
					else if(EndMin==SubmitMin)
					{
						if(EndSec>SubmitSec)
						{
							cout<<"Your Quiz is submitted"<<endl;
						}
						else
						{
							cout<<"Your Quiz is not submitted"<<endl;
						}
					}
					else
					{
						cout<<"Your Quiz is not submitted"<<endl;
					}
				}
				else
				{
					cout<<"Your Quiz is not submitted"<<endl;
				}
				cout<<endl<<endl;
				int marksperquestion;
				cout<<"Enter the marks of each question: ";
				cin>>marksperquestion;
				Result res(marksperquestion,0,0);
				int total=res.CalculateTotalMarks(quizquestions);
				cout<<endl<<endl;
				cout<<"The Total Number of Quiz: "<<total<<endl;
				if(quizquestions=="MCQS")
				{
					res.result_mcqs(course,topic,opt1,opt2,opt3);
				}
				else if(quizquestions=="True/False")
				{
					res.result_truefalse(course,topic,opt1,opt2,opt3);
				}
				else if(quizquestions=="Descriptive")
				{
					res.result_descriptive(course,topic,ans);
				}
			}
			else
			{
				cout<<"Welcome "<<ID<<endl;
				cout<<"Teacher Section"<<endl;
				cout<<endl<<endl;
				string course;
				cout<<"Which course do you like to teach: ";		//Asking which course does he like to teach
				getline(cin,course);
				Teacher t1(course);		//Creating object for Teacher class
				string course_new;		//Variable for the new course if the given course is not available
				while(!t1.Course_Availibility())		//While loop wiill be executed until the user enters the course which is available
				{
					cout<<"The course you entered is not available"<<endl;
					cout<<endl<<endl;
					cout<<"Enter another course: ";		//Asking user for the new course
					getline(cin,course_new);
					t1.Set_Course(course_new);		//Seeting the new course;
					course=course_new;		//Storing the new course in the previous variable
				}
				if(t1.Course_Availibility())		//Condition to check whether the course is available
				{
					cout<<"The course you entered is available"<<endl;
					cout<<"Your course is: "<<course<<endl;
					cout<<endl<<endl;
					char choice1;		//If the course is available, the program will give option to user to create a quiz
					cout<<"Do You like to Make the Quiz for your Course "<<course<<endl;
					cin>>choice1;
					cout<<endl<<endl;
					if(choice1=='y')		//If the user press y, the new quiz bank will be created
					{
						string topic;
						string quiztopic;
						if(course=="Programming Fundamentals")
						{
							cout<<"Topics of "<<course<<":"<<endl;
							topic="Programming_Fundamentals.txt";
							string topicname;
							ifstream files(topic);
							while(getline(files,topicname))
							{
								cout<<topicname<<endl;
							}
							cout<<endl<<endl;
							files.close();
							cout<<endl<<endl;
							cout<<"Enter any one topic of the following you want to take quiz of: ";
							cin.ignore();
							getline(cin,quiztopic);
						}
						else if(course=="Object Oriented Programming")
						{
							cout<<"Topics of "<<course<<":"<<endl;
							topic="Object_Oriented_Programming.txt";
							string topicname;
							ifstream files(topic);
							while(getline(files,topicname))
							{
								cout<<topicname<<endl;
							}
							files.close();
							cout<<endl<<endl;
							cout<<"Enter any one topic of the following you want to take quiz of: ";
							cin.ignore();
							getline(cin,quiztopic);
						}
						else if(course=="Data Structures")
						{
							cout<<"Topics of "<<course<<":"<<endl;
							topic="Data_Structures.txt";
							string topicname;
							ifstream files(topic);
							while(getline(files,topicname))
							{
								cout<<topicname<<endl;
							}
							files.close();
							cout<<endl<<endl;
							cout<<"Enter any one topic of the following you want to take quiz of: ";
							cin.ignore();
							getline(cin,quiztopic);
						}
						else if(course=="Artificial Intelligence")
						{
							cout<<"Topics of "<<course<<":"<<endl;
							topic="Artificial_Intelligence.txt";
							string topicname;
							ifstream files(topic);
							while(getline(files,topicname))
							{
								cout<<topicname<<endl;
							}
							files.close();
							cout<<endl<<endl;
							cout<<"Enter any one topic of the following you want to take quiz of: ";
							cin.ignore();
							getline(cin,quiztopic);
						}
						else if(course=="Deep Learning")
						{
							cout<<"Topics of "<<course<<":"<<endl;
							topic="Deep_Learning.txt";
							string topicname;
							ifstream files(topic);
							while(getline(files,topicname))
							{
								cout<<topicname<<endl;
							}
							files.close();
							cout<<endl<<endl;
							cout<<"Enter any one topic of the following you want to take quiz of: ";
							cin.ignore();
							getline(cin,quiztopic);
						}
						cout<<endl<<endl;
						string quizquestions;
						cout<<"Enter the Type of Questions you want to ask: ";
						cin>>quizquestions;
						cout<<endl;
						Quiz_Bank qb(quiztopic,quizquestions);		//New object for the class Quiz_Bank
						int mark_per_qs;
						if(quizquestions=="MCQS")
						{
							qb.mcqs_question(course);
							cout<<endl;
							cout<<"Enter the marks for each questions: ";
							cin>>mark_per_qs;
						}
						else if(quizquestions=="True/False")
						{
							qb.true_false_question(course);
							cout<<endl;
							cout<<"Enter the marks for each questions: ";
							cin>>mark_per_qs;
						}
						else if(quizquestions=="Descriptive")
						{
							qb.descriptive_question(course);
							cout<<endl;
							cout<<"Enter the marks for each questions: ";
							cin>>mark_per_qs;
						}
						cout<<endl<<endl;
						Quiz_Generate qg(mark_per_qs,0);
						int marks=qg.calculate_total_marks(quizquestions);
						cout<<"The total marks for the quiz is: "<<marks<<endl<<endl;
						int date;
						cout<<"Enter the Date you want to conduct the quiz: ";
						cin>>date;
						string month;
						cout<<"Enter the Month you want to conduct the quiz: ";
						cin>>month;
						int year;
						cout<<"Enter the Year you want to conduct the quiz: ";
						cin>>year;
						Date QuizDate(date,year,month);
						cout<<endl<<endl;
						int starting_hours;
						cout<<"Enter the Hour you want to start the quiz: ";
						cin>>starting_hours;
						int starting_minutes;
						cout<<"Enter the Minutes you want to start the quiz: ";
						cin>>starting_minutes;
						int starting_seconds;
						cout<<"Enter the Seconds you want to start the quiz: ";
						cin>>starting_seconds;
						Time QuizStartTime(starting_hours,starting_minutes,starting_seconds);
						cout<<endl<<endl;
						int ending_hours;
						cout<<"Enter the Hour you want to end the quiz: ";
						cin>>ending_hours;
						int ending_minutes;
						cout<<"Enter the Minutes you want to end the quiz: ";
						cin>>ending_minutes;
						int ending_seconds;
						cout<<"Enter the Seconds you want to end the quiz: ";
						cin>>ending_seconds;
						Time QuizEndTime(ending_hours,ending_minutes,ending_seconds);
						cout<<endl<<endl;
						cout<<"The Date for the Quiz is: "<<endl;
						QuizDate.display();
						cout<<endl<<endl;
						cout<<"The Starting Time for the Quiz is: "<<endl;
						QuizStartTime.display();
						cout<<endl<<endl;
						cout<<"The Ending Time for the Quiz is: "<<endl;
						QuizEndTime.display();
						cout<<endl<<endl;
					}
		}
	}
	}
	else if(choice==2)		//If user enters 2, the User will be able to change its password
	{
		string id;		//Variable for username
		string pass;		//Variable for password
		cout<<"Enter your previous Password: ";		//Asking user to enter the previous password
		cin>>pass;
		string new_pass;		//Variable for new password
		cout<<"Enter the new password: ";		//Asking user to enter the new password
		cin>>new_pass;
		cin.ignore();
		cout<<"Enter your Username: ";		//User name of the user
		getline(cin,id);
		Login l1(id,new_pass);		//Again calling object of Login with new password
		string pass2;		//New variable for the changed password
		while(!l1.validate_Password())		//While loop which will run until the password is not valid
		{
			cout<<"Your password is invalid"<<endl;		//WIll print when the conditions is not met
			cout<<new_pass<<"*"<<endl;
			cout<<"Password: ";
			cin>>pass2;		//Asking for correct password
			l1.set_password(pass2);
		}
		new_pass=pass2;
		if(l1.validate_Password())		//COndition to check whether the password is valid or not
		{
			if(l1.log())		//If the Password is valid, then it will check whther user is a student or a teacher
			{
				cout<<endl<<endl;
				cout<<"Welcome "<<id<<endl;
				cout<<"Student Section"<<endl;
			}
			else
			{
				cout<<endl<<endl;
				cout<<"Welcome "<<id<<endl;
				cout<<"Teacher Section"<<endl;
				cout<<endl<<endl;
				string course;
				cout<<"Which course do you like to teach: ";		//Asking which course does he like to teach
				getline(cin,course);
				Teacher t1(course);		//Creating object for Teacher class
				string course_new;		//Variable for the new course if the given course is not available
				while(!t1.Course_Availibility())		//While loop wiill be executed until the user enters the course which is available
				{
					cout<<"The course you entered is not available"<<endl;
					cout<<endl<<endl;
					cout<<"Enter another course: ";		//Asking user for the new course
					getline(cin,course_new);
					t1.Set_Course(course_new);		//Seeting the new course;
					course=course_new;		//Storing the new course in the previous variable
				}
				if(t1.Course_Availibility())		//Condition to check whether the course is available
				{
					cout<<"The course you entered is available"<<endl;
					cout<<"Your course is: "<<course<<endl;
					cout<<endl<<endl;
					char choice1;		//If the course is available, the program will give option to user to create a quiz
					cout<<"Do You like to Make the Quiz for your Course "<<course<<endl;
					cin>>choice1;
					cout<<endl<<endl;
					if(choice1=='y')		//If the user press y, the new quiz bank will be created
					{
						string topic;
						string quiztopic;
						if(course=="Programming Fundamentals")
						{
							cout<<"Topics of "<<course<<":"<<endl;
							topic="Programming_Fundamentals.txt";
							string topicname;
							ifstream files(topic);
							while(getline(files,topicname))
							{
								cout<<topicname<<endl;
							}
							cout<<endl<<endl;
							files.close();
							cout<<endl<<endl;
							cout<<"Enter any one topic of the following you want to take quiz of: ";
							cin.ignore();
							getline(cin,quiztopic);
						}
						else if(course=="Object Oriented Programming")
						{
							cout<<"Topics of "<<course<<":"<<endl;
							topic="Object_Oriented_Programming.txt";
							string topicname;
							ifstream files(topic);
							while(getline(files,topicname))
							{
								cout<<topicname<<endl;
							}
							files.close();
							cout<<endl<<endl;
							cout<<"Enter any one topic of the following you want to take quiz of: ";
							cin.ignore();
							getline(cin,quiztopic);
						}
						else if(course=="Data Structures")
						{
							cout<<"Topics of "<<course<<":"<<endl;
							topic="Data_Structures.txt";
							string topicname;
							ifstream files(topic);
							while(getline(files,topicname))
							{
								cout<<topicname<<endl;
							}
							files.close();
							cout<<endl<<endl;
							cout<<"Enter any one topic of the following you want to take quiz of: ";
							cin.ignore();
							getline(cin,quiztopic);
						}
						else if(course=="Artificial Intelligence")
						{
							cout<<"Topics of "<<course<<":"<<endl;
							topic="Artificial_Intelligence.txt";
							string topicname;
							ifstream files(topic);
							while(getline(files,topicname))
							{
								cout<<topicname<<endl;
							}
							files.close();
							cout<<endl<<endl;
							cout<<"Enter any one topic of the following you want to take quiz of: ";
							cin.ignore();
							getline(cin,quiztopic);
						}
						else if(course=="Deep Learning")
						{
							cout<<"Topics of "<<course<<":"<<endl;
							topic="Deep_Learning.txt";
							string topicname;
							ifstream files(topic);
							while(getline(files,topicname))
							{
								cout<<topicname<<endl;
							}
							files.close();
							cout<<endl<<endl;
							cout<<"Enter any one topic of the following you want to take quiz of: ";
							cin.ignore();
							getline(cin,quiztopic);
						}
						cout<<endl<<endl;
						string quizquestions;
						cout<<"Enter the Type of Questions you want to ask: ";
						cin>>quizquestions;
						cout<<endl;
						Quiz_Bank qb(quiztopic,quizquestions);		//New object for the class Quiz_Bank
						int mark_per_qs;
						if(quizquestions=="MCQS")
						{
							qb.mcqs_question(course);
							cout<<endl;
							cout<<"Enter the marks for each questions: ";
							cin>>mark_per_qs;
						}
						else if(quizquestions=="True/False")
						{
							qb.true_false_question(course);
							cout<<endl;
							cout<<"Enter the marks for each questions: ";
							cin>>mark_per_qs;
						}
						else if(quizquestions=="Descriptive")
						{
							qb.descriptive_question(course);
							cout<<endl;
							cout<<"Enter the marks for each questions: ";
							cin>>mark_per_qs;
						}
						cout<<endl<<endl;
						Quiz_Generate qg(mark_per_qs,0);
						int marks=qg.calculate_total_marks(quizquestions);
						cout<<"The total marks for the quiz is: "<<marks<<endl<<endl;
						int date;
						cout<<"Enter the Date you want to conduct the quiz: ";
						cin>>date;
						string month;
						cout<<"Enter the Month you want to conduct the quiz: ";
						cin>>month;
						int year;
						cout<<"Enter the Year you want to conduct the quiz: ";
						cin>>year;
						Date QuizDate(date,year,month);
						cout<<endl<<endl;
						int starting_hours;
						cout<<"Enter the Hour you want to start the quiz: ";
						cin>>starting_hours;
						int starting_minutes;
						cout<<"Enter the Minutes you want to start the quiz: ";
						cin>>starting_minutes;
						int starting_seconds;
						cout<<"Enter the Seconds you want to start the quiz: ";
						cin>>starting_seconds;
						Time QuizStartTime(starting_hours,starting_minutes,starting_seconds);
						cout<<endl<<endl;
						int ending_hours;
						cout<<"Enter the Hour you want to end the quiz: ";
						cin>>ending_hours;
						int ending_minutes;
						cout<<"Enter the Minutes you want to end the quiz: ";
						cin>>ending_minutes;
						int ending_seconds;
						cout<<"Enter the Seconds you want to end the quiz: ";
						cin>>ending_seconds;
						Time QuizEndTime(ending_hours,ending_minutes,ending_seconds);
						cout<<endl<<endl;
						cout<<"The Date for the Quiz is: "<<endl;
						QuizDate.display();
						cout<<endl<<endl;
						cout<<"The Starting Time for the Quiz is: "<<endl;
						QuizStartTime.display();
						cout<<endl<<endl;
						cout<<"The Ending Time for the Quiz is: "<<endl;
						QuizEndTime.display();
						cout<<endl<<endl;
					}
				}
			}
		}
	}
}}
