/*
 * pro5.c
 *
 *  Created on: 21-Jan-2023
 *      Author: root
 */
//year is leap or not
#include<stdio.h>
int leap(int);
int leap(int y)
{
	if((y%4==0) &&((y%400==0)||(y%100!=0)))
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
	int year;
	printf("enter year=");
	scanf("%d",&year);

	if(leap(year)==0)
	{
		printf("%d is leap year",year);
	}
	else
	{
		printf("%d is not leap year",year);
	}
	return 0;
}

