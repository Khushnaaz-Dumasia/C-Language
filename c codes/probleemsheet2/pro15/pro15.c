/*
 * pro15.c
 *
 *  Created on: 28-Feb-2023
 *      Author: root
 */
#include<stdio.h>
/*void reverse(int *p,int n)
{
	int i,j=0,c;
	for(i=0;i<n/2;i++)
	{
		j=n;
		c=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=c;
		j--;
	}
	return;
}*/
void reverse(int *p, int n)
{
	int a[n], i;
	p=&a[n-1];
	printf("\nElements of array in reverse order\n");
	for(i=0; i<n;i++)
	{
		printf("%d ", *p--);
	}
}
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
int main()
{
	int a[5];
	input(a,5);
	printf("\n array of elements:");
	print(a,5);
	reverse(a,5);
	//printf("\n reverse array elements:");
	//print(a,5);
	return 0;
}
