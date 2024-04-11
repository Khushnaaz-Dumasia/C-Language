/*
 * pro15.c
 *
 *  Created on: 28-Jan-2023
 *      Author: root
 */
//date is valid or not
#include<stdio.h>

int main()
{
	int d,m,y;
	printf("enter date=");
	scanf("%d %d %d",&d,&m,&y);
	if(date(d,m,y)==0)
	{
		printf("%d %d %d is a valid date",d,m,y);
	}
	else
	{
		printf("%d %d %d is not valid date",d,m,y);
	}
	return 0;

}
int date(int,int,int);
int date(int d, int m, int y)
{
	if(y>=1950 && y<=2023)
	{
		if(m>=1 && m<=12)
		{
			if((d>=1 && d<=31) && (m==1 || m==3 || m==5 || m==7 || m==10 || m==12))
			{
				return 0;
			}
			else if((d>=1 && d<=30) && (m==4 || m==6 || m==8 || m==9 || m==11))
			{
				return 0;
			}
			else if((d>=1 && d<=29) && (m==2) && ((y%4==0) && ((y%400==0) || (y%100!=0))))
			{
				return 0;
			}
			else{
				return 1;
			}
		}
	}
}





