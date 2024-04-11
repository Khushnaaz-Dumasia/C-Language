/*
 * pro12.c
 *
 *  Created on: 24-Jan-2023
 *      Author: root
 */
//Largest and smallest in 1D array
#include<stdio.h>
int input(int [],int);
int print(int [],int);
int input(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter element a[%d]=",i);
		scanf("%d",&x[i]);

	}
	return 0;
}
int print(int y[],int m)
{
	int i;
	printf("\n");
	for(i=0;i<m;i++)
	{
		printf(" %d",y[i]);
	}
	return 0;
}
void largest(int z[],int a)
{
	int i,max;
	max=z[0];
	for(i=0;i<a;i++)
	{
		if(max<z[i])
		{
			max=z[i];
		}

	}
	printf("\n largest element is=%d",max);
	return;
}
void smallest(int z[],int a)
{
	int i,min;
	min=z[0];
	for(i=0;i<a;i++)
	{
		if(min>z[i])
		{
			min=z[i];
		}

	}
	printf("\n smallest element is=%d",min);
	return;
}
int main()
{
	int b[5];
	input(b,5);
	print(b,5);
	largest(b,5);
	smallest(b,5);
	return 0;
}

