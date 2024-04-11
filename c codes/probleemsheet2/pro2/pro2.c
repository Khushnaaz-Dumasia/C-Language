/*
 * pro2.c
 *
 *  Created on: 27-Feb-2023
 *      Author: root
 */
#include<stdio.h>
int fibonacci(int);
int fibonacci(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
int main()
{
	int n;
	printf("enter number=");
	scanf("%d",&n);
	printf("\n fibonacci series:");
	for(int i=0;i<n;i++)
	{
		printf("%d",fibonacci(i));
	}
	return 0;
}

