 /*
 * pro14.c
 *
 *  Created on: 13-Feb-2023
 *      Author: root
 */
#include<stdio.h>
int countdigit(int *);
int countdigit(int *a)
{
	int count=0,b;
	b=a;
	while(b>0)
	{
		b=b/10;
		count++;
	}
	return count;
}
int power(int *,int *);
int power(int *b,int *e)
{
	int power=1,i,c,d;
	c=b;
	d=e;
	for(i=1;i<=d;i++)
	{
		power=power*c;
	}
	return power;
}
int isarmstrong(int *);
int isarmstrong(int *n)
{
	int m;
	m=n;
	int n1,sum=0,r,digit=0,temp=1;
	n1=m;
	digit=countdigit(n1);
	printf("no of digit=%d",digit);
	n1=m;
	while(n1!=0)
	{
		r=n1%10;
		temp=1;
		temp=power(r,digit);
		sum=sum+temp;
		n1=n1/10;
	}
	if(m==sum)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	int *x,a;
	a=&x;
	scanf("%d",&a);
	if(isarmstrong(a)==0)
	{
		printf("\n %d is a armstrong",a);
	}
	else
	{
		printf("\n %d is not a armstrong",a);
	}
	return 0;
}
