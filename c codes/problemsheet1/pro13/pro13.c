/*
 * pro13.c
 *
 *  Created on: 23-Jan-2023
 *      Author: root
 */
#include<stdio.h>
int input(int m,int n,int[][n]);
int print(int m,int n,int[m][n]);
int input(int m,int n,int x[m][n])
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
	return 0;
}
int print(int m,int n,int y[m][n])
{
	int i,j;
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d",y[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void largest(int m,int n,int a[m][n])
{
	int i,j,max;
	max=a[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}
		}
	}
	printf("\n largest element is=%d",max);
	return;
}
void smallest(int m,int n,int a[m][n])
{
	int i,j,min;
	min=a[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(min>a[i][j])
			{
				min=a[i][j];
			}
		}
	}
	printf("\n smallest element is=%d",min);
	return;
}
int main()
{
	int b[3][3];
	input(3,3,b);
	print(3,3,b);
	largest(3,3,b);
	smallest(3,3,b);
	return 0;
}
