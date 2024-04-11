/*
 * pro6.c
 *
 *  Created on: 20-Jan-2023
 *      Author: root
 */
//sum of digit
#include<stdio.h>
int sum(int);
int sum(int n)
{
	int i,sum=0, t;
	while(n>0)
	{
		t=n%10;
		sum=sum+t;
		n=n/10;
	}
	return sum;
}
int main()
{
	int x,result;
	printf("Enter number");
	scanf("%d",&x);
	result=sum(x);
	printf("%d",result);
	return 0;
}

