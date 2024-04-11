/*
 * pro20.c
 *
 *  Created on: 20-Jan-2023
 *      Author: root
 */
//sum of digit
#include<stdio.h>
int sum(int);
int sum(int n)
{
	int i,sum=0;
	while(n>0)
	{
		i=n%10;
		sum=sum+i;
		n=n/10;
	}
	return sum;
}
int main()
{
	int x,result;
	scanf("%d",&x);
	result=sum(x);
	printf("%d",result);
	return 0;
}

