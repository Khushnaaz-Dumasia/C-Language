/*
 * pro4.c
 *
 *  Created on: 27-Feb-2023
 *      Author: root
 */
#include<stdio.h>
int pow(int,int);
int pow(int b,int e)
{
	if(e==0)
	{
		return 1;
	}
	else
	{
		return (b*pow(b,e-1));
	}
}
int main()
{
	int c,d;
	printf("enter c=");
	scanf("%d",&c);
	printf("enter d=");
	scanf("%d",&d);
	printf("\n power=");
	printf("%d",pow(c,d));
}

