#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
#include"Time.h"
using namespace std;
Time::Time()
{
	hrs=0;
	min=0;
	sec=0;
}
Time::Time(int hrs,int min,int sec)
{
	this->hrs=hrs;
	this->min=min;
	this->sec=sec;
}
void Time::Set_Hours(int hrs)
{
	this->hrs=hrs;
}
void Time::Set_Minutes(int min)
{
	this->min=min;
}
void Time::Set_Seconds(int sec)
{
	this->sec=sec;
}
void Time::display()
{
	cout<<hrs<<" : "<<min<<" : "<<sec<<endl;
}
