/*
 * pro25.c
 *
 *  Created on: 28-Jan-2023
 *      Author: root
 */
#include<stdio.h>
void pattern(int);
void pattern(int n)
{
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		k=1;
		for(j=1;j<=9;j++)
		{
			if(j>=6-i && j<=4+i)
			{
				printf("%d",k);
				k++;
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return;
}
int main()
{
	int n;
	printf("enter number=");
	scanf("%d",&n);
	pattern(n);
	return 0;
}
