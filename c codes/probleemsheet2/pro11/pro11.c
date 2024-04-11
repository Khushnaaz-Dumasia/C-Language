/*
 * pro11.c
 *
 *  Created on: 13-Feb-2023
 *      Author: root
 */
#include<stdio.h>
#include<string.h>
int ispadindrome(char *str)
{
	char *b,*e;
	b=str;
	e=str;
	int flag=0;
	int l=xstrlen(str);
	for(int i=0;i<l-1;i++)
	{
		e++;
	}
	for(int j=0;j<l/2;j++)
	{
		if(*b==*e)
		{
			b++;
			e--;
		}
		else
		{
			flag=1;
			break;
		}
	}
	return flag;
}
int main()
{
	char str1[10];
	printf("enter string=");
	scanf("%s",str1);
	if(ispadindrome(str1)==0)
	{
		printf("string is palindrone");
	}
	else
	{
		printf("string is not palindrone");
	}
	return 0;
}
int xstrlen(char *p)
{
	int l=0;
	while(*p!='\0')
	{
		p++;
		l++;
	}
	return l;
}

