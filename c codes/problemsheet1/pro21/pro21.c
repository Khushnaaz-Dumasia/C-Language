/*
 * pro21.c
 *
 *  Created on: 24-Jan-2023
 *      Author: root
 */
//sum of all element in 2D array
#include<stdio.h>
void input(int m,int n,int [][n]);
void input(int m,int n,int x[m][n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter element a[%d][%d]=",i,j);
			scanf("%d",&x[i][j]);
		}
	}

}
void print(int m,int n,int [][n]);
void print(int m,int n,int x[m][n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d",x[i][j]);
		}
		printf("\n");
	}

}
void sum(int m,int n,int y[m][n]);
void sum(int m,int n,int y[m][n])
{
	int i,j,sum=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+y[i][j];
		}
	}
	printf("sum of all element=%d",sum);
}
#define n 3
int main()
{
	int a[n][n];
	input(n,n,a);
	print(n,n,a);
	sum(n,n,a);
	return 0;
}

