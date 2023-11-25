#ifndef TIME_H
#define TIME_H
#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
using namespace std;
class Time
{
	private:
		int hrs;
		int min;
		int sec;
	public:
		Time();
		Time(int hrs,int min,int sec);
		void Set_Hours(int hrs);
		void Set_Minutes(int min);
		void Set_Seconds(int sec);
		void display();
};
#endif
