/*
 * pro3.c
 *
 *  Created on: 13-Feb-2023
 *      Author: root
 */
#include<stdio.h>
int multiply(int,int);
int multiply(int a,int b)
{
	static int product=0,i=0;
	if(i<a)
	{
		product=product+b;
		i++;
		multiply(a,b);
	}
	return product;
}
int main()
{
	int a,b,product;
	printf("enter two integer=");
	scanf("%d %d",&a,&b);
	product=multiply(a,b);
	printf("multiplication is %d",product);
	return 0;
}

