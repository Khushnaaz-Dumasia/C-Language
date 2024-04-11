/*
 * pro22.c
 *
 *  Created on: 20-Jan-2023
 *      Author: root
 */
//prime num or not
#include<stdio.h>
int isprime(int);
int isprime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
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
	scanf("%d",&x);
	if(isprime(x)==0)
	{
		printf("%d is a prime number",x);
	}
	else
	{
		printf("%d is not a prime number",x);
	}
	return 0;
}


