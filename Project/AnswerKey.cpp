#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
#include"AnswerKey.h"
using namespace std;
void Answer_Key::MCQS_Answers(string course,string Topic_Name)
{
	if(course=="Programming Fundamentals")
	{
		if(Topic_Name=="Conditional Statements")
		{
			string mcqs;
			int lineno=1;
			ifstream mcq_file("Conditionals_Answers.txt");
			while(getline(mcq_file,mcqs)&&(lineno<9))
			{
				cout<<mcqs<<endl;
				lineno++;
			}
			mcq_file.close();
		}
		else if(Topic_Name=="Functions")
		{
			string mcqs;
			int lineno=1;
			ifstream mcq_file("Functions_Answers.txt");
			while(getline(mcq_file,mcqs)&&(lineno<9))
			{
				cout<<mcqs<<endl;
				lineno++;
			}
			mcq_file.close();
		}
		else if(Topic_Name=="Loops")
		{
			string mcqs;
			int lineno=1;
			ifstream mcq_file("Loops_Answers.txt");
			while(getline(mcq_file,mcqs)&&(lineno<9))
			{
				cout<<mcqs<<endl;
				lineno++;
			}
			mcq_file.close();
		}
	}
	else if(course=="Object Oriented Programming")
	{
		if(Topic_Name=="Recursion")
		{
			string mcqs;
			int lineno=1;
			ifstream mcq_file("Recursion_Answers.txt");
			while(getline(mcq_file,mcqs)&&(lineno<9))
			{
				cout<<mcqs<<endl;
				lineno++;
			}
			mcq_file.close();
		}
		else if(Topic_Name=="Structures")
		{
			string mcqs;
			int lineno=1;
			ifstream mcq_file("Structures_Answers.txt");
			while(getline(mcq_file,mcqs)&&(lineno<9))
			{
				cout<<mcqs<<endl;
				lineno++;
			}
			mcq_file.close();
		}
		else if(Topic_Name=="Classes")
		{
			string mcqs;
			int lineno=1;
			ifstream mcq_file("Classes_Answers.txt");
			while(getline(mcq_file,mcqs)&&(lineno<9))
			{
				cout<<mcqs<<endl;
				lineno++;
			}
			mcq_file.close();
		}
	}
	else if(course=="Artificial Intelligence")
	{
		if(Topic_Name=="Genetic Algorithms")
		{
			string mcqs;
			int lineno=1;
			ifstream mcq_file("Genetic_Algorithms_Answers.txt");
			while(getline(mcq_file,mcqs)&&(lineno<9))
			{
				cout<<mcqs<<endl;
				lineno++;
			}
			mcq_file.close();
		}
		else if(Topic_Name=="A* Search Algorithms")
		{
			string mcqs;
			int lineno=1;
			ifstream mcq_file("Search_Algorithms_Answers.txt");
			while(getline(mcq_file,mcqs)&&(lineno<9))
			{
				cout<<mcqs<<endl;
				lineno++;
			}
			mcq_file.close();
		}
		else if(Topic_Name=="Particle Swarm Optimization")
		{
			string mcqs;
			int lineno=1;
			ifstream mcq_file("Particle_Swarm_Optimization_Answers.txt");
			while(getline(mcq_file,mcqs)&&(lineno<9))
			{
				cout<<mcqs<<endl;
				lineno++;
			}
			mcq_file.close();
		}
	}
	else if(course=="Data Structures")
	{
		if(Topic_Name=="Linked List")
		{
			string mcqs;
			int lineno=1;
			ifstream mcq_file("Linked_List_Answers.txt");
			while(getline(mcq_file,mcqs)&&(lineno<9))
			{
				cout<<mcqs<<endl;
				lineno++;
			}
			mcq_file.close();
		}
		else if(Topic_Name=="Stacks and Queues")
		{
			string mcqs;
			int lineno=1;
			ifstream mcq_file("Stacks_And_Queues_Answers.txt");
			while(getline(mcq_file,mcqs)&&(lineno<9))
			{
				cout<<mcqs<<endl;
				lineno++;
			}
			mcq_file.close();
		}
		else if(Topic_Name=="Trees")
		{
			string mcqs;
			int lineno=1;
			ifstream mcq_file("Trees_Answers.txt");
			while(getline(mcq_file,mcqs)&&(lineno<9))
			{
				cout<<mcqs<<endl;
				lineno++;
			}
			mcq_file.close();
		}
	}
	else if(course=="Deep Learning")
	{
		if(Topic_Name=="Artificial Neural Network")
		{
			string mcqs;
			int lineno=1;
			ifstream mcq_file("Artificial_Neural_Network_Answers.txt");
			while(getline(mcq_file,mcqs)&&(lineno<9))
			{
				cout<<mcqs<<endl;
				lineno++;
			}
			mcq_file.close();
		}
		else if(Topic_Name=="Convolutional Neural Network")
		{
			string mcqs;
			int lineno=1;
			ifstream mcq_file("Convolutional_Neural_Network_Answers.txt");
			while(getline(mcq_file,mcqs)&&(lineno<9))
			{
				cout<<mcqs<<endl;
				lineno++;
			}
			mcq_file.close();
		}
		else if(Topic_Name=="Recurrent Neural Network")
		{
			string mcqs;
			int lineno=1;
			ifstream mcq_file("Recurrent_Neural_Network_Answers.txt");
			while(getline(mcq_file,mcqs)&&(lineno<9))
			{
				cout<<mcqs<<endl;
				lineno++;
			}
			mcq_file.close();
		}
	}
}
void Answer_Key::True_False_Answers(string course,string Topic_Name)
{
	if(course=="Programming Fundamentals")
	{
		if(Topic_Name=="Conditional Statements")
		{
			string TrueFalse;
			int lineno1=9;
			ifstream tf_file("Conditionals_Answers.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<16))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="Functions")
		{
			string TrueFalse;
			int lineno1=9;
			ifstream tf_file("Functions_Answers.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<16))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="Loops")
		{
			string TrueFalse;
			int lineno1=9;
			ifstream tf_file("Loops_Answers.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<16))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
	}
	else if(course=="Object Oriented Programming")
	{
		if(Topic_Name=="Recursion")
		{
			string TrueFalse;
			int lineno1=9;
			ifstream tf_file("Recursions_Answers.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<16))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="Structures")
		{
			string TrueFalse;
			int lineno1=9;
			ifstream tf_file("Structures_Answers.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<16))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="Classes")
		{
			string TrueFalse;
			int lineno1=9;
			ifstream tf_file("Classes_Answers.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<16))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
	}
	else if(course=="Artificial Intelligence")
	{
		if(Topic_Name=="Genetic Algorithms")
		{
			string TrueFalse;
			int lineno1=9;
			ifstream tf_file("Genetic_Algorithms_Answers.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<16))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="A* Search Algorithms")
		{
			string TrueFalse;
			int lineno1=9;
			ifstream tf_file("Search_Algorithms_Answers.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<16))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="Particle Swarm Optimization")
		{
			string TrueFalse;
			int lineno1=9;
			ifstream tf_file("Particle_Swarm_Optimization_Answers.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<16))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
	}
	else if(course=="Data Structures")
	{
		if(Topic_Name=="Linked List")
		{
			string TrueFalse;
			int lineno1=9;
			ifstream tf_file("Linked_List_Answers.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<16))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="Stacks And Queues")
		{
			string TrueFalse;
			int lineno1=9;
			ifstream tf_file("Stacks_And_Queues_Answers.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<16))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="Trees")
		{
			string TrueFalse;
			int lineno1=9;
			ifstream tf_file("Trees_Answers.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<16))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
	}
	else if(course=="Deep Learning")
	{
		if(Topic_Name=="Artificial Neural Network")
		{
			string TrueFalse;
			int lineno1=9;
			ifstream tf_file("Artificial_Neural_Network_Answers.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<16))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="Convolutional Neural Network")
		{
			string TrueFalse;
			int lineno1=9;
			ifstream tf_file("Convolutional_Neural_Network_Answers.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<16))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="Recurrent Neural Network")
		{
			string TrueFalse;
			int lineno1=9;
			ifstream tf_file("Recurrent_Neural_Network_Answers.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<16))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
	}
}
