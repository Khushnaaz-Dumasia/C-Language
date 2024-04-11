/*
 * pro5.c
 *
 *  Created on: 10-Feb-2023
 *      Author: root
 */
#include<stdio.h>
void input(int *,int);
void input(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter element p[%d]=",i);
		scanf("%d",(p+i));
	}
	return ;
}
void print(int *,int);
void print(int *p1,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d",*(p1+i));
	}
	return;
}
void asort(int *,int);
void asort(int *p,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(p+i)<*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	return;
}
void dsort(int *,int);
void dsort(int *p,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	return;
}
int main()
{
	int a[5],*p;
	p=a;
	input(p,5);
	printf("\n");
	print(p,5);
	asort(p,5);
	printf("\n after sorting");
	print(p,5);
	dsort(p,5);
	printf("\n after sorting");
	print(p,5);
	return 0;

}
