/*
 * pro3.c
 *
 *  Created on: 27-Jan-2023
 *      Author: root
 */
#include<stdio.h>
struct hotel{
	char name[20];
	char address[100],grade[3];
	int room_charge,No_of_rooms;
};
void grade(char ch[],struct hotel h[],int n);
void grade(char ch[],struct hotel h[],int n)
{
	printf("Hotel_name \t Address \t Grade \t Average Charge \t No of rooms \n");
	int i;
	for(i=0;i<n;i++)
	{
		if(ch[0]==h[i].grade[0])
		{
			printf("%s \t %s \t %s \t %d \t %d \n",h[i].name,h[i].address,h[i].grade,h[i].room_charge,h[i].No_of_rooms);
		}
	}
}
void value(int k,struct hotel h[],int n);
void value(int k,struct hotel h[],int n)
{
	printf("Hotel_name \t Address \t Grade \t Average Charge \t No of rooms \n");
	int i;
	for(i=0;i<n;i++)
	{
		if(k>h[i].room_charge)
		{
			printf("%s \t %s \t %s \t %d \t %d \n",h[i].name,h[i].address,h[i].grade,h[i].room_charge,h[i].No_of_rooms);
		}
	}
}
#define n 3
int main()
{
	struct hotel h[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter hotel name=");
		scanf("%s",h[i].name);
		printf("enter hotel address=");
		scanf("%s",h[i].address);
		printf("enter grade of hotel=");
		scanf("%s",h[i].grade);
		printf("enter avg room charge in hotel=");
		scanf("%d",&h[i].room_charge);
		printf("enter no of rooms in hotel=");
		scanf("%d",&h[i].No_of_rooms);
	}
	printf("\n Hotel_name \t Hotel_address \t Grade \t Room_charge \t No_of_rooms");
	for(i=0;i<n;i++)
	{
		printf("\n %s \t %s \t %s \t %d  \t %d",h[i].name,h[i].address,h[i].grade,h[i].room_charge,h[i].No_of_rooms);
	}

	char ch[3];
	printf("\n enter grade you want to search=");
	scanf("%s",ch);
	grade(ch,h,n);

	int b;
	printf("\n enter price you want to search hotel=");
	scanf("%d",&b);
	value(b,h,n);
	return 0;
}
