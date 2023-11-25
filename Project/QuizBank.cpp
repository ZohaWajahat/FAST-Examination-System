#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
#include"QuizBank.h"
using namespace std;
Quiz_Bank::Quiz_Bank()
{
	Topic_Name="";
	Question_Type="";
}
Quiz_Bank::Quiz_Bank(string Topic_Name,string Question_Type)
{
	this->Topic_Name=Topic_Name;
	this->Question_Type=Question_Type;
}
void Quiz_Bank::mcqs_question(string course)
{
	if(course=="Programming Fundamentals")
	{
		if(Topic_Name=="Conditional Statements")
		{
			string mcqs;
			int lineno=1;
			ifstream mcq_file("Conditionals_Questions.txt");
			while(getline(mcq_file,mcqs)&&(lineno<23))
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
			ifstream mcq_file("Functions_Questions.txt");
			while(getline(mcq_file,mcqs)&&(lineno<37))
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
			ifstream mcq_file("Loops_Questions.txt");
			while(getline(mcq_file,mcqs)&&(lineno<36))
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
			ifstream mcq_file("Recursion_Questions.txt");
			while(getline(mcq_file,mcqs)&&(lineno<40))
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
			ifstream mcq_file("Structures_Questions.txt");
			while(getline(mcq_file,mcqs)&&(lineno<23))
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
			ifstream mcq_file("Classes_Questions.txt");
			while(getline(mcq_file,mcqs)&&(lineno<23))
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
			ifstream mcq_file("Genetic_Algorithms_Questions.txt");
			while(getline(mcq_file,mcqs)&&(lineno<23))
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
			ifstream mcq_file("Search_Algorithms_Questions.txt");
			while(getline(mcq_file,mcqs)&&(lineno<23))
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
			ifstream mcq_file("Particle_Swarm_Optimization_Questions.txt");
			while(getline(mcq_file,mcqs)&&(lineno<23))
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
			ifstream mcq_file("Linked_List_Questions.txt");
			while(getline(mcq_file,mcqs)&&(lineno<23))
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
			ifstream mcq_file("Stacks_And_Queues_Questions.txt");
			while(getline(mcq_file,mcqs)&&(lineno<23))
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
			ifstream mcq_file("Trees_Questions.txt");
			while(getline(mcq_file,mcqs)&&(lineno<23))
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
			ifstream mcq_file("Artificial_Neural_Network_Questions.txt");
			while(getline(mcq_file,mcqs)&&(lineno<23))
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
			ifstream mcq_file("Convolutional_Neural_Network_Questions.txt");
			while(getline(mcq_file,mcqs)&&(lineno<23))
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
			ifstream mcq_file("Recurrent_Neural_Network_Questions.txt");
			while(getline(mcq_file,mcqs)&&(lineno<20))
			{
				cout<<mcqs<<endl;
				lineno++;
			}
			mcq_file.close();
		}
	}
}
void Quiz_Bank::true_false_question(string course)
{
	if(course=="Programming Fundamentals")
	{
		if(Topic_Name=="Conditional Statements")
		{
			string TrueFalse;
			int lineno1=23;
			ifstream tf_file("Conditionals_Questions.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<39))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="Functions")
		{
			string TrueFalse;
			int lineno1=37;
			ifstream tf_file("Functions_Questions.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<53))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="Loops")
		{
			string TrueFalse;
			int lineno1=36;
			ifstream tf_file("Loops_Questions.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<53))
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
			int lineno1=40;
			ifstream tf_file("Recursions_Questions.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<56))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="Structures")
		{
			string TrueFalse;
			int lineno1=23;
			ifstream tf_file("Structures_Questions.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<39))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="Classes")
		{
			string TrueFalse;
			int lineno1=23;
			ifstream tf_file("Classes_Questions.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<39))
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
			int lineno1=23;
			ifstream tf_file("Genetic_Algorithms_Questions.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<39))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="A* Search Algorithms")
		{
			string TrueFalse;
			int lineno1=23;
			ifstream tf_file("Search_Algorithms_Questions.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<39))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="Particle Swarm Optimization")
		{
			string TrueFalse;
			int lineno1=23;
			ifstream tf_file("Particle_Swarm_Optimization_Questions.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<39))
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
			int lineno1=23;
			ifstream tf_file("Linked_List_Questions.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<39))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="Stacks And Queues")
		{
			string TrueFalse;
			int lineno1=23;
			ifstream tf_file("Stacks_And_Queues_Questions.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<39))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="Trees")
		{
			string TrueFalse;
			int lineno1=23;
			ifstream tf_file("Trees_Questions.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<39))
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
			int lineno1=23;
			ifstream tf_file("Artificial_Neural_Network_Questions.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<39))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="Convolutional Neural Network")
		{
			string TrueFalse;
			int lineno1=23;
			ifstream tf_file("Convolutional_Neural_Network_Questions.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<39))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
		else if(Topic_Name=="Recurrent Neural Network")
		{
			string TrueFalse;
			int lineno1=20;
			ifstream tf_file("Recurrent_Neural_Network_Questions.txt");
			while(getline(tf_file,TrueFalse)&&(lineno1<36))
			{
				cout<<TrueFalse<<endl;
				lineno1++;
			}
			tf_file.close();
		}
	}
}
void Quiz_Bank::descriptive_question(string course)
{
	if(course=="Programming Fundamentals")
	{
		if(Topic_Name=="Conditional Statements")
		{
			string descriptive;
			int lineno2=39;
			ifstream desc_file("Conditionals_Questions.txt");
			while(getline(desc_file,descriptive)&&(lineno2<44))
			{
				cout<<descriptive<<endl;
				lineno2++;
			}
			desc_file.close();
		}
		else if(Topic_Name=="Functions")
		{
			string descriptive;
			int lineno2=53;
			ifstream desc_file("Functions_Questions.txt");
			while(getline(desc_file,descriptive)&&(lineno2<58))
			{
				cout<<descriptive<<endl;
				lineno2++;
			}
			desc_file.close();
		}
		else if(Topic_Name=="Loops")
		{
			string descriptive;
			int lineno2=53;
			ifstream desc_file("Loops_Questions.txt");
			while(getline(desc_file,descriptive)&&(lineno2<58))
			{
				cout<<descriptive<<endl;
				lineno2++;
			}
			desc_file.close();
		}
	}
	else if(course=="Object Oriented Programming")
	{
		if(Topic_Name=="Recursion")
		{
			string descriptive;
			int lineno2=56;
			ifstream desc_file("Recursion_Questions.txt");
			while(getline(desc_file,descriptive)&&(lineno2<61))
			{
				cout<<descriptive<<endl;
				lineno2++;
			}
			desc_file.close();
		}
		else if(Topic_Name=="Structures")
		{
			string descriptive;
			int lineno2=39;
			ifstream desc_file("Structures_Questions.txt");
			while(getline(desc_file,descriptive)&&(lineno2<44))
			{
				cout<<descriptive<<endl;
				lineno2++;
			}
			desc_file.close();
		}
		else if(Topic_Name=="Classes")
		{
			string descriptive;
			int lineno2=39;
			ifstream desc_file("Classes_Questions.txt");
			while(getline(desc_file,descriptive)&&(lineno2<44))
			{
				cout<<descriptive<<endl;
				lineno2++;
			}
			desc_file.close();
		}
	}
	else if(course=="Artificial Intelligence")
	{
		if(Topic_Name=="Genetic Algorithms")
		{
			string descriptive;
			int lineno2=39;
			ifstream desc_file("Genetic_Algorithms_Questions.txt");
			while(getline(desc_file,descriptive)&&(lineno2<44))
			{
				cout<<descriptive<<endl;
				lineno2++;
			}
			desc_file.close();
		}
		else if(Topic_Name=="A* Search Algorithms")
		{
			string descriptive;
			int lineno2=39;
			ifstream desc_file("Search_Algorithms_Questions.txt");
			while(getline(desc_file,descriptive)&&(lineno2<44))
			{
				cout<<descriptive<<endl;
				lineno2++;
			}
			desc_file.close();
		}
		else if(Topic_Name=="Particle Swarm Optimization")
		{
			string descriptive;
			int lineno2=39;
			ifstream desc_file("Particle_Swarm_Optimization_Questions.txt");
			while(getline(desc_file,descriptive)&&(lineno2<44))
			{
				cout<<descriptive<<endl;
				lineno2++;
			}
			desc_file.close();
		}
	}
	else if(course=="Data Structures")
	{
		if(Topic_Name=="Linked List")
		{
			string descriptive;
			int lineno2=39;
			ifstream desc_file("Linked_List_Questions.txt");
			while(getline(desc_file,descriptive)&&(lineno2<44))
			{
				cout<<descriptive<<endl;
				lineno2++;
			}
			desc_file.close();
		}
		else if(Topic_Name=="Stacks and Queues")
		{
			string descriptive;
			int lineno2=39;
			ifstream desc_file("Stacks_And_Queues_Questions.txt");
			while(getline(desc_file,descriptive)&&(lineno2<44))
			{
				cout<<descriptive<<endl;
				lineno2++;
			}
			desc_file.close();
		}
		else if(Topic_Name=="Trees")
		{
			string descriptive;
			int lineno2=39;
			ifstream desc_file("Trees_Questions.txt");
			while(getline(desc_file,descriptive)&&(lineno2<44))
			{
				cout<<descriptive<<endl;
				lineno2++;
			}
			desc_file.close();
		}
	}
	else if(course=="Deep Learning")
	{
		if(Topic_Name=="Artificial Neural Network")
		{
			string descriptive;
			int lineno2=39;
			ifstream desc_file("Artificial_Neural_Network_Questions.txt");
			while(getline(desc_file,descriptive)&&(lineno2<44))
			{
				cout<<descriptive<<endl;
				lineno2++;
			}
			desc_file.close();
		}
		else if(Topic_Name=="Convolutional Neural Network")
		{
			string descriptive;
			int lineno2=39;
			ifstream desc_file("Convolutional_Neural_Network_Questions.txt");
			while(getline(desc_file,descriptive)&&(lineno2<44))
			{
				cout<<descriptive<<endl;
				lineno2++;
			}
			desc_file.close();
		}
		else if(Topic_Name=="Recurrent Neural Network")
		{
			string descriptive;
			int lineno2=36;
			ifstream desc_file("Recurrent_Neural_Network_Questions.txt");
			while(getline(desc_file,descriptive)&&(lineno2<41))
			{
				cout<<descriptive<<endl;
				lineno2++;
			}
			desc_file.close();
		}
	}
}
