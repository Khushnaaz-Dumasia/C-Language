/*
 * pro17.c
 *
 *  Created on: 03-Feb-2023
 *      Author: root
 */
#include<stdio.h>
#include<time.h>
struct time{
	int hour;
	int minute;
	int second;
};
struct time input(void)
{
	struct time t1;
	printf("enter hour=");
	scanf("%d",&t1.hour);
	printf("enter minute=");
	scanf("%d",&t1.minute);
	printf("enter second=");
	scanf("%d",&t1.second);
	return t1;

}
void display(struct time t2)
{
	printf("%d %d %d \n",t2.hour,t2.minute,t2.second);
}
int validate(struct time t)
{
	if(t.hour>=0 && t.hour<=23 && t.minute>=0 && t.minute<=59 && t.second>=0 && t.second<=59)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}
int main()
{
	struct time time;
	int result;
	time=input();
	display(time);
	result=validate(time);
	if(result==0)
	{
		printf("valid time");
	}
	else
	{
		printf("invalid time");
	}
	return 0;
}
