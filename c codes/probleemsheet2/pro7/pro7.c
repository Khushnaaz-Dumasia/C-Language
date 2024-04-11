/*
 * pro7.c
 *
 *  Created on: 27-Feb-2023
 *      Author: root
 */
#include<stdio.h>
void input(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter element [%d]=",i);
		scanf("%d",(p+i));
	}
}
void print(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}
}
int sum(int *p,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+*(p+i);
	}
	return sum;
}
int main()
{
	int n,result;
	printf("enter the number of elements in array=");
	scanf("%d",&n);
	int a[n];
	input(a,n);
	printf("\n array element=");
	print(a,n);
	result=sum(a,n);
	printf("\n sum of elements=%d",result);
	return 0;
}
