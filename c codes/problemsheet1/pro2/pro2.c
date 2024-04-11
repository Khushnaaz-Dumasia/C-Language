/*
 * pro2.c
 *
 *  Created on: 27-Jan-2023
 *      Author: root
 */
#include<stdio.h>
#define n 3
struct cricket{
	char player_name[50];
	char team_name[50];
	float batting_avg;
}temp;
int main()
{
	struct cricket c[n];//c[i]=array player
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("enter player name c[%d]=",i);
		scanf("%s",c[i].player_name);
		printf("enter team name=");
		scanf("%s",c[i].team_name);
		printf("enter batting avg=");
		scanf("%f",&c[i].batting_avg);
	}
	printf("\n playerName \t teamName \t batting avg");
	for(i=0;i<n;i++)
	{
		for(j=0; j<n;j++)
		{
			if(c[i].team_name<c[j].team_name)
			{
				struct cricket temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n %s \t %s \t %f",c[i].player_name,c[i].team_name,c[i].batting_avg);
	}
	return 0;
}
