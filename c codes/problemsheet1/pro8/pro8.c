/*
 * pro8.c
 *
 *  Created on: 19-Jan-2023
 *      Author: root
 */
#include<stdio.h>
int fact(int);
int fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int x,result;
	scanf("%d",&x);
	result=fact(x);
	printf("factorial=%d",result);
	return 0;
}

