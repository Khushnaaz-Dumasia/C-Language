/*
 * pro10.c
 *
 *  Created on: 13-Feb-2023
 *      Author: root
 */
#include<stdio.h>
void xstrcat(char *p1,char *p2)
{
	while(*p1!='\0')
	{
		p1++;
	}
	while(*p2!='\0')
	{
		*p1=*p2;
		p1++;
		p2++;
	}
	*p1='\0';
}
int main()
{
	char str1[10]="surat";
	char str2[10]="city";
	xstrcat(str1,str2);
	printf("new string=%s",str1);
}

