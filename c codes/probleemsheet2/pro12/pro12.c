/*
 * pro12.c
 *
 *  Created on: 13-Feb-2023
 *      Author: root
 */
#include<stdio.h>
void xstrcpy(char *p1,char *p2)
{
	while(*p1!='\0')
	{
		*p2=*p1;
		p1++;
		p2++;
	}
	*p2='\0';
	return;
}
int main()
{
	char str1[10];
	char str2[10];
	printf("enter str1=");
	scanf("%s",str1);
	xstrcpy(str1,str2);
	printf("\n str2=%s",str2);
	return 0;
}

