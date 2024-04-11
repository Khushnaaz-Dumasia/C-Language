/*
 * pro9.c
 *
 *  Created on: 20-Jan-2023
 *      Author: root
 */
//amstrong number
#include<stdio.h>
int countdigit(int);
int countdigit(int a)
{
	int count=0;
	while(a>0)
	{
		a=a/10;
		count++;
	}
	return count;
}
int power(int,int);
int power(int b,int e)
{
	int power=1,i;
	for(i=1;i<=e;i++)
	{
		power=power*b;
	}
	return power;
}
int isarmstrong(int);
int isarmstrong(int n)
{
	int n1,sum=0,r,digit=0,temp=1;
	n1=n;
	digit=countdigit(n1);
	printf("no of digit=%d",digit);
	n1=n;
	while(n1!=0)
	{
		r=n1%10;
		temp=1;
		temp=power(r,digit);
		sum=sum+temp;
		n1=n1/10;
	}
	if(n==sum)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	int x;
	printf("enter number: ");
	scanf("%d",&x);
	if(isarmstrong(x)==0)
	{
		printf("\n %d is a armstrong",x);
	}
	else
	{
		printf("\n %d is not a armstrong",x);
	}
	return 0;
}
