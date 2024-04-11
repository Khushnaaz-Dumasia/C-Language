/*
 * pro16.c
 *
 *  Created on: 03-Feb-2023
 *      Author: root
 */
//compare two dates
#include<stdio.h>
struct date{
	int day;
	int month;
	int year;
};
int comparedates(struct date date1 , struct date date2)
{
	if((date1.year==date2.year) && (date1.month==date2.month) && (date1.day==date2.day))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	struct date date1,date2;
	printf("enter date1=");
	scanf("%d %d %d",&date1.day,&date1.month,&date1.year);
	printf("enter date2=");
	scanf("%d %d %d",&date2.day,&date2.month,&date2.year);

	if(comparedates(date1,date2)==0)
	{
		printf("dates are equal");
	}
	else
	{
		printf("dates are not equal");
	}
	return 0;
}

