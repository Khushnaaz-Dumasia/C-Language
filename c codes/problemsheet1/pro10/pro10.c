/*
 * pro10.c
 *
 *  Created on: 24-Jan-2023
 *      Author: root
 */
//sorting in 1D array
#include<stdio.h>
void input(int [],int);
void input(int x[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("enter element a[%d]=",i);
		scanf("%d",&x[i]);
	}
	return;
}
void print(int [],int);
void print(int y[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf(" %d",y[i]);
	}
	return;
}
void sort(int [],int);
void sort(int z[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(z[i]<z[j])
			{
				temp=z[i];
				z[i]=z[j];
				z[j]=temp;
			}
		}
	}
	return ;
}
void sortd(int [],int);
void sortd(int z[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(z[i]>z[j])
			{
				temp=z[i];
				z[i]=z[j];
				z[j]=temp;
			}
		}
	}
	return ;
}
int main()
{
	int a[5];
	input(a,5);
	print(a,5);
	printf("\n after sorting= ");
	sort(a,5);
	print(a,5);
	printf("\n after sorting= ");
	sortd(a,5);
	print(a,5);
	return 0;

}
