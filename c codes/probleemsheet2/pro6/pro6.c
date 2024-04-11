/*
 * pro6.c
 *
 *  Created on: 14-Feb-2023
 *      Author: root
 */
#include<stdio.h>
#define row 3
#define cols 3
void input(int a[row][cols])
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("enter array elements a[%d][%d]= ",i+1,j+1);
			scanf("%d",*(a+i)+j);
		}
	}
}
void print(int a[row][cols])
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d \t",*(*(a+i)+j));
		}
		printf("\n");
	}
}
void sort(int a[row][cols],int b[row*cols])
{
	int i,j,k=0,t;
	for(i=0;i<row;i++)
	{
		for(j=0;j<cols;j++)
		{
			*(b+k)=*(*(a+i)+j);
			k++;
		}
	}
	for(i=0;i<row*cols;i++)
	{
		for(j=0;j<cols*row;j++)
		{
			if(*(b+i)>*(b+j))
			{
				t=*(b+i);
				*(b+i)=*(b+j);
				*(b+j)=t;
			}
		}
	}
	k=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<cols;j++)
		{
			(*(*(a+i)+j))=*(b+k);
			k++;
		}
	}
}
void dsort(int a[row][cols],int b[row*cols])
{
	int i,j,k=0,t;
	for(i=0;i<row;i++)
	{
		for(j=0;j<cols;j++)
		{
			*(b+k)=*(*(a+i)+j);
			k++;
		}
	}
	for(i=0;i<row*cols;i++)
	{
		for(j=0;j<cols*row;j++)
		{
			if(*(b+i)<*(b+j))
			{
				t=*(b+i);
				*(b+i)=*(b+j);
				*(b+j)=t;
			}
		}
	}
	k=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<cols;j++)
		{
			(*(*(a+i)+j))=*(b+k);
			k++;
		}
	}
}
int main()
{
	int a[row][cols],b[row*cols];
	input(a);
	printf("\n");
	print(a);
	sort(a,b);
	printf("after sorting");
	print(a);
	return 0;

}

