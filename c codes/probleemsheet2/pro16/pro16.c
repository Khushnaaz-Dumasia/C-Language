/*
 * pro16.c
 *
 *  Created on: 28-Feb-2023
 *      Author: root
 */
#include<stdio.h>
void strrev(char *p);
int main()
{
	char s[50];
	printf("enter string=");
	scanf("%s",s);
	strrev(s);
	printf("reverse string=%s",s);
	return 0;
}
void strrev(char *p)
{
	int l,i;
	char *b,*e,temp;
	b=p;
	e=p;
	while(*p!='\0')
	{
		p++;
		l++;
	}
	while(*p!='\0')
	{
		p--;
	}
	for(i=0;i<l-1;i++)
	{
		e++;
	}
	for(i=0;i<l/2;i++)
	{
		temp=*e;
		*e=*b;
		*b=temp;
		b++;
		e--;
	}
}
