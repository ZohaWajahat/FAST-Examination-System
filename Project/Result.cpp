#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
#include"Result.h"
using namespace std;
Result::Result()
{
	marks_per_question=0;
	total_marks=0;
	obtained_marks=0;
}
Result::Result(int marks_per_question,int total_marks,int obtained_marks)
{
	this->marks_per_question=marks_per_question;
	this->total_marks=total_marks;
	this->obtained_marks=obtained_marks;
}
int Result::CalculateTotalMarks(string quizquestions)
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
void Result::result_mcqs(string course,string topic,char opt1,char opt2,char opt3)
{
	if(course=="Programming Fundamentals")
	{
		if(topic=="Conditional Statements")
		{
			if(opt1=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='d')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='d')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="Loops")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='c')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="Functions")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
	}
	else if(course=="Object Oriented Programming")
	{
		if(topic=="Recursion")
		{
			if(opt1=='c')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='d')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='d')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="Structures")
		{
			if(opt1=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='c')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='c')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="Classes")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='d')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='c')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
	}
	else if(course=="Data Structures")
	{
		if(topic=="Linked List")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='d')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='d')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="Stacks and Queues")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='c')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="Trees")
		{
			if(opt1=='c')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='d')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='c')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
	}
	else if(course=="Deep Learning")
	{
		if(topic=="Artificial Neural Network")
		{
			if(opt1=='d')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="Convolutional Neural Network")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='c')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="Recurrent Neural Network")
		{
			if(opt1=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='c')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
	}
	else if(course=="Artificial Intelligence")
	{
		if(topic=="Genetic Algorithms")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='d')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="A* Search Algorithms")
		{
			if(opt1=='c')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="Particle Swarm Optimization")
		{
			if(opt1=='d')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='d')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
	}
	cout<<"The marks You achieved in this Quiz = "<<obtained_marks<<endl;
}
void Result::result_truefalse(string course,string topic,char opt1,char opt2,char opt3)
{
	if(course=="Programming Fundamentals")
	{
		if(topic=="Conditional Statements")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="Loops")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="Functions")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
	}
	else if(course=="Object Oriented Programming")
	{
		if(topic=="Recursion")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="Structures")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="Classes")
		{
			if(opt1=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
	}
	else if(course=="Data Structures")
	{
		if(topic=="Linked List")
		{
			if(opt1=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="Stacks and Queues")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="Trees")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
	}
	else if(course=="Deep Learning")
	{
		if(topic=="Artificial Neural Network")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="Convolutional Neural Network")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="Recurrent Neural Network")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
	}
	else if(course=="Artificial Intelligence")
	{
		if(topic=="Genetic Algorithms")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="A* Search Algorithms")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
		else if(topic=="Particle Swarm Optimization")
		{
			if(opt1=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt2=='a')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
			if(opt3=='b')
			{
				obtained_marks=obtained_marks+marks_per_question;
			}
		}
	}
	cout<<"The marks You achieved in this Quiz = "<<obtained_marks<<endl;
}
void Result::result_descriptive(string course,string topic,string ans)
{
	int count;
	if(course=="Programming Fundamentals")
	{
		if(topic=="Conditional Statements")
		{
			for(char c: ans)
			{
				if(c==' ')
				{
					count++;
				}
			}
			count=count+1;
			obtained_marks=count*0.01;
		}
		else if(topic=="Loops")
		{
			for(char c: ans)
			{
				if(c==' ')
				{
					count++;
				}
			}
			count=count+1;
			obtained_marks=count*0.01;
		}
		else if(topic=="Functions")
		{
			for(char c: ans)
			{
				if(c==' ')
				{
					count++;
				}
			}
			count=count+1;
			obtained_marks=count*0.01;
		}
	}
	else if(course=="Object Oriented Programming")
	{
		if(topic=="Recursion")
		{
			for(char c: ans)
			{
				if(c==' ')
				{
					count++;
				}
			}
			count=count+1;
			obtained_marks=count*0.01;
		}
		else if(topic=="Structures")
		{
			for(char c: ans)
			{
				if(c==' ')
				{
					count++;
				}
			}
			count=count+1;
			obtained_marks=count*0.01;
		}
		else if(topic=="Classes")
		{
			for(char c: ans)
			{
				if(c==' ')
				{
					count++;
				}
			}
			count=count+1;
			obtained_marks=count*0.01;
		}
	}
	else if(course=="Artificial Intelligence")
	{
		if(topic=="Genetic Algorithms")
		{
			for(char c: ans)
			{
				if(c==' ')
				{
					count++;
				}
			}
			count=count+1;
			obtained_marks=count*0.01;
		}
		else if(topic=="A* Search Algorithms")
		{
			for(char c: ans)
			{
				if(c==' ')
				{
					count++;
				}
			}
			count=count+1;
			obtained_marks=count*0.01;
		}
		else if(topic=="Particle Swarm Optimization")
		{
			for(char c: ans)
			{
				if(c==' ')
				{
					count++;
				}
			}
			count=count+1;
			obtained_marks=count*0.01;
		}
	}
	else if(course=="Data Structures")
	{
		if(topic=="Linked List")
		{
			for(char c: ans)
			{
				if(c==' ')
				{
					count++;
				}
			}
			count=count+1;
			obtained_marks=count*0.01;
		}
		else if(topic=="Stacks and Queues")
		{
			for(char c: ans)
			{
				if(c==' ')
				{
					count++;
				}
			}
			count=count+1;
			obtained_marks=count*0.01;
		}
		else if(topic=="Trees")
		{
			for(char c: ans)
			{
				if(c==' ')
				{
					count++;
				}
			}
			count=count+1;
			obtained_marks=count*0.01;
		}
	}
	else if(course=="Deep Learning")
	{
		if(topic=="Artificial Neural Network")
		{
			for(char c: ans)
			{
				if(c==' ')
				{
					count++;
				}
			}
			count=count+1;
			obtained_marks=count*0.01;
		}
		else if(topic=="Convolutional Neural Network")
		{
			for(char c: ans)
			{
				if(c==' ')
				{
					count++;
				}
			}
			count=count+1;
			obtained_marks=count*0.01;
		}
		else if(topic=="Recurrent Neural Network")
		{
			for(char c: ans)
			{
				if(c==' ')
				{
					count++;
				}
			}
			count=count+1;
			obtained_marks=count*0.01;
		}
	}
	cout<<"The marks You achieved in this Quiz = "<<obtained_marks<<endl;
}
