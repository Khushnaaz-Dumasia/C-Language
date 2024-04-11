/*
 * pro19.c
 *
 *  Created on: 10-Mar-2023
 *      Author: root
 */
#include<stdio.h>
void input(int r,int c,int (*p)[c])
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter array element [%d][%d]=",i,j);
			scanf("%d",(*(p+i)+j));
		}
	}
}
void print(int r,int c,int (*p)[c])
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",*(*(p+i)+j));
		}
		printf("\n");
	}
}
void reverse(int r,int c,int (*p)[c])
{
	int i,j,k,*p1,temp;
	p1=p;
	k=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			*(p1+k)=*(*(p+i)+j);
			k++;
		}
	}
	j=2*2-1;
	for(i=0;i<2*2/2;i++)
	{
		temp=*(p1+i);
		*(p1+i)=*(p1+j);
		*(p1+j)=temp;
		j--;
	}
	k=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			*(*(p+i)+j)=*(p1+k);
			k++;
		}
	}
}
int main()
{
	int a[2][2];
	input(2,2,a);
	printf("\n array elements:");
	print(2,2,a);
	reverse(2,2,a);
	printf("\n reverse 2D array:");
	print(2,2,a);
	return 0;
}
