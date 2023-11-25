#include<iostream>
#include<ctype.h>
#include<string>
#include<cstring>
#include<sstream>
#include<fstream>
#include"Date.h"
using namespace std;
Date::Date()
{
	date=0;
	year=0;
	month="";
}
Date::Date(int date,int year,string month)
{
	this->date=date;
	this->year=year;
	this->month=month;
}
void Date::Set_date(int date)
{
	this->date=date;
}
void Date::Set_year(int year)
{
	this->year=year;
}
void Date::Set_month(int month)
{
	this->month=month;
}
void Date::display()
{
	cout<<date<<"  "<<month<<"  "<<year<<endl;
}
