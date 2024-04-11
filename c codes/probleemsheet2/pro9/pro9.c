/*
 * pro9.c
 *
 *  Created on: 10-Feb-2023
 *      Author: root
 */
#include<stdio.h>
int xstrcmp(char *p1,char *p2)
{
	int diff=0;
	while(*p1!='\0')
	{
		if(*p1==*p2)
		{
			p1++;
			p2++;
		}
		else
		{
			diff=*p1-*p2;
			break;
		}
	}
	return diff;
}
int main()
{
	char str1[20]="Vnsgu";
	char str2[20]="Vnsgu";
	int d;
	d=xstrcmp(str1,str2);
	if(d==0)
	{
		printf("strings are equal");
	}
	else
	{
		printf("strings are not equal");
	}
	return 0;
}

