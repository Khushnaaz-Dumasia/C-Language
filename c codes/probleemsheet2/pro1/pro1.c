/*
 * pro1.c
 *
 *  Created on: 13-Feb-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int n,fact;
	printf("enter n=");
	scanf("%d",&n);
	fact=factorial(n);
	printf("%d",fact);
	return 0;
}
int factorial(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
	return 0;
}

