/*
 * pro11.c
 *
 *  Created on: 24-Jan-2023
 *      Author: root
 */
//sorting 2D array
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
	return ;
}
void print(int m,int n,int [][n]);
void print(int m,int n,int y[m][n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d",y[i][j]);
		}
		printf("\n");
	}
	return ;
}
int sort(int m,int n,int z[][n]);
int sort(int m,int n,int z[m][n])
{
	int i,j,temp,k,l;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
				for(l=0;l<n;l++)
				{
					if(z[i][j]<z[k][l])
					{
						temp=z[i][j];
						z[i][j]=z[k][l];
						z[k][l]=temp;
					}
				}
			}
		}
	}
	return 0;
}
int dsort(int m,int n,int z[][n]);
int dsort(int m,int n,int z[m][n])
{
	int i,j,temp,k,l;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
				for(l=0;l<n;l++)
				{
					if(z[i][j]>z[k][l])
					{
						temp=z[i][j];
						z[i][j]=z[k][l];
						z[k][l]=temp;
					}
				}
			}
		}
	}
	return 0;
}
int main()
{
	int a[3][3];
	input(3,3,a);
	print(3,3,a);
	sort(3,3,a);
	printf("\n after sorting");
	print(3,3,a);
	dsort(3,3,a);
	printf("\n after sorting");
	print(3,3,a);
	return 0;
}
