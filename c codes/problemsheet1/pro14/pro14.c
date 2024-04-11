/*
 * pro14.c
 *
 *  Created on: 27-Jan-2023
 *      Author: root
 */
#include<stdio.h>
struct date
{
	int day;
	int month;
	int year;
};
int calculateage(struct date birthday)
{
	time_tt=time(null);
	struct tm.tm=*localtime(&t);
	int currentyear=tm.tm_year+1900;
	int currentmonth=tm.tm_month+1;
	int currentday=tm.tm_dat;
	int ageyear=currentyear-birthday.year;
	int agemonth=currentmonth-birthday.month;
	int currentday=currentday-birthday.day;

	if(agemonth<0 || (agemontg==0 && ageday<0))
	{
		ageyear--;
	}
	return ageyear;
}
int calculateage()
