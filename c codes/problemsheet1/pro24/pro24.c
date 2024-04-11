/*
 * pro24.c
 *
 *  Created on: 24-Jan-2023
 *      Author: root
 */
#include<stdio.h>
int pattern(int);
int pattern(int n)
{
	int i,j,k,l;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		for(l=1;l<i;l++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	int m;
	printf("enter number=");
	scanf("%d",&m);
	pattern(m);
	return 0;
}

