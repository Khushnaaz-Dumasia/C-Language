/*
 * pro13.c
 *
 *  Created on: 13-Feb-2023
 *      Author: root
 */
#include<stdio.h>
int isprime(int *p,int n)
{
	int i,j,count=0,prime=0;
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=1;j<=*(p+i);j++)
		{
			if(*(p+i)%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			prime++;
		}
	}
	return prime;
}
void input(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter array elements[%d]=",i);
		scanf("%d",(p+i));
	}
	return;
}
void print(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d",*(p+i));
	}
}
int main()
{
	int result;
	int a[5];
	input(a,5);
	printf("\n array elements:");
	print(a,5);
	result=isprime(a,5);
	printf("\n no of prime number is %d",result);
	return 0;

}
