/*
 * pro17=8.c
 *
 *  Created on: 03-Feb-2023
 *      Author: root
 */
//prime num or not in 2D array
#include<stdio.h>
int isprime(int n)
{
	if(n<=1)
	{
		return 1;
	}
	for(int i=1 ; i<=n/2 ;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int countprime(int m,int n,int arr[m][n])
{
	int i,count=0;
	for(i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(isprime(arr[i][j])==0)
			{
				count++;
			}
		}
	}
	return count;
}
int input(int m,int n,int a[m][n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter element a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	return 0;
}
int display(int m,int n,int a[m][n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#define m 3
int main()
{
	int a[m][m],result,n;
	input(m,m,a);
	display(m,m,a);
	isprime(n);
	result=countprime(m,m,a);
	printf("\n no of prime num=%d",result);
	return 0;
}
