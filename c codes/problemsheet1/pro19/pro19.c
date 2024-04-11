/*
 * pro19.c
 *
 *  Created on: 21-Jan-2023
 *      Author: root
 */
//Fibonaci series
#include<stdio.h>
int fibonaci(int);
int fibonaci(int n)
{
	int a=0,b=1,c,i;
	for(i=1;i<=n;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
	return a;
}
int main()
{
	int x,result;
	scanf("%d",&x);
	result=fibonaci(x);
	//printf("\n fibonaci series= %d",result);
	return 0;
}
