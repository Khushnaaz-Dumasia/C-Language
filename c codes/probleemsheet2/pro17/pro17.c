
/*
 * pro17.c
 *
 *  Created on: 04-Mar-2023
 *      Author: root
 */
#include<stdio.h>
void insert(int n,int *p)
{
	int poss,num,i;
	printf("\n enter position to insert value=");
	scanf("%d",&poss);
	printf("enter num to insert %d",poss);
	scanf("%d",&num);
	for(i=n;i>=poss;i--)
	{
		*(p+i)=*(p+i-1);
	}
	*(p+(poss-1))=num;
	for(i=0;i<n;i++)
	{
		printf("%d",*p);
		p++;
	}
}
void delete(int n,int *p)
{
	int poss,i;
	printf("\n enter position to delete value=");
	scanf("%d",&poss);
	for(i=poss-1;i<n;i++)
	{
		*(p+i)=*(p+i+1);
	}
	*(p+i)=0;
	printf("\n new array");
	for(i=0;i<n-1;i++)
	{
		printf("%d",*p);
		p++;
	}
}
void update(int n,int *p)
{
	int poss,num,i;
	printf("\n enter position to update value=");
	scanf("%d",&poss);
	printf("enter num to updated at %d",poss);
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(poss-1==i)
		{
			*(p+i)=num;
		}
	}
	printf("\n new array:");
	for(i=0;i<n;i++)
	{
		printf("%d",*p);
		p++;
	}
}
int main()
{
	int size,i;
	printf("enter the size of array=");
	scanf("%d",&size);
	size++;
	int a[size];
	printf("enter array elements");
	for(i=0;i<size-1;i++)
	{
		scanf("%d",&a[i]);
	}
	insert(size,a);
	update(size,a);
	delete(size,a);
	return 0;
}
