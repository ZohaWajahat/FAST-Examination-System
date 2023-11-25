#ifndef DATE_H
#define DATE_H
#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
using namespace std;
class Date
{
	private:
		int date;
		int year;
		string month;
	public:
		Date();
		Date(int date,int year,string month);
		void Set_date(int date);
		void Set_year(int year);
		void Set_month(int month);
		void display();
};
#endif
