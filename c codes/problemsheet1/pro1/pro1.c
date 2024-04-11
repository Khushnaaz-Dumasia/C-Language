/*
 * pro1.c
 *
 *  Created on: 19-Jan-2023
 *      Author: root
 */
#include<stdio.h>
#define n 3
struct city{
	char city_name[20];
	int population;
	float literacy;
};
int main()
{
	struct city c[n];
	int i,choice1,choice2,j,temp;
	for(i=0;i<n;i++)
	{
		printf("\n enter city name=");
		scanf("%s",c[i].city_name);
		printf("\n enter population of city");
		scanf("%d",&c[i].population);
		printf("\n enter literacy ");
		scanf("%f",&c[i].literacy);
	}
	do{
		printf(" 1.To read details for city");
		printf("\n 2.To sort the list alphabetically");
		printf("\n 3.To sort the list based on literacy level");
		printf("\n 4.To sort the list based on population");
		printf("\n Enter your choice: ");
        scanf("%d", &choice1);

		switch(choice1)
		{
		case 1:
			printf("\n city name  Population  Literacy");
			for(i=0;i<n;i++)
			{
				printf("\n %s \t\t %d \t %f",c[i].city_name,c[i].population,c[i].literacy);
			}
			break;
		case 2:
				printf("\nTo sort the list alphabetically");
				printf("\n city name  Population  Literacy");
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
						if(c[i].city_name<c[j].city_name)
						{
							struct city temp=c[i];
							c[i]=c[j];
							c[j]=temp;
						}
					}
				}
				for(i=0;i<n;i++)
				{
					printf("\n %s \t\t %d \t %f",c[i].city_name,c[i].population,c[i].literacy);
				}
				break;

			case 3:
				printf("\nTo sort the list based on literacy level");
				printf("\n city name  Population  Literacy");
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
						if(c[i].literacy<c[j].literacy)
						{
							struct city  temp=c[i];
							c[i]=c[j];
							c[j]=temp;
						}
					}
				}
				for(i=0;i<n;i++)
				{
					printf("\n %s \t\t %d \t %f",c[i].city_name,c[i].population,c[i].literacy);
				}
				break;

			case 4:
				printf("\nTo sort the list based on population");
				printf("\n city name  Population  Literacy");
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
						if(c[i].population<c[j].population)
						{
							struct city  temp=c[i];
							c[i]=c[j];
							c[j]=temp;
						}
					}
				}
				for(i=0;i<n;i++)
				{
					printf("\n %s \t\t %d \t %f",c[i].city_name,c[i].population,c[i].literacy);
				}
				break;
		}
		printf("\n Do you want to continue");
		scanf("%d",&choice2);
	}
	while(choice2==0);
	return 0;
}
