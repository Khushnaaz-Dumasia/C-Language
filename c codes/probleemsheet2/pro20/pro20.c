/*
 * pro20.c
 *
 *  Created on: 28-Feb-2023
 *      Author: root
 */
#include<stdio.h>
int vowels(char *p)
{
	int vowels=0,c=0;
	while(*p!='\0')
	{
		if(*(p)=='a' ||*(p)=='e' ||*(p)=='i' ||*(p)=='o' ||*(p)=='u' ||*(p)=='A' ||*(p)=='E' ||*(p)=='I' ||*(p)=='O' ||*(p)=='U')
		{
			vowels++;
			p++;
		}
		else
		{
			c++;
			p++;
		}
		
	}
	//printf("count num of vowels in a given string=%d",vowels);
	return vowels;
}
int main()
{
	int result;
	char s[10];
	printf("enter string=");
	scanf("%s",s);
	result=vowels(s);
	printf("\n count num of vowels in a given string=%d",result);
	return 0;
}
