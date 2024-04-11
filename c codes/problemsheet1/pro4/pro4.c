/*
 * pro4.c
 *
 *  Created on: 27-Jan-2023
 *      Author: root
 */
#include<stdio.h>
#include<string.h>
struct library{
	int accession_number;
	char title_of_the_book[30];
	char author_name[30];
	int price_of_the_book;
	char flag_indicating[10];
}t;
int main()
{
	struct library b[3];
	int i,num,j,k;
	int ch1, ch2;
	char temp1[20], temp2[20];

	do
	{
		printf("\n 1.Add book information");
		printf("\n 2.Display book information");
		printf("\n 3.List all books of given author");
		printf("\n 4.List the title of specified book");
		printf("\n 5.List total no. of books in the library");
		printf("\n 6.List the books in the order of accession number");
		printf("\n 7.Exit");
		printf("what do you want to do");
		scanf("%d",&ch1);

		switch(ch1)
		{
		case 1:
			printf("Add book information");
			for(i=0;i<3;i++)
				{
					printf("enter accession number=");
					scanf("%d",&b[i].accession_number);
					printf("enter title of the book=");
					scanf("%s",b[i].title_of_the_book);
					printf("enter author name=");
					scanf("%s",b[i].author_name);
					printf("enter price of the book=");
					scanf("%d",&b[i].price_of_the_book);
					printf("enter flag_indicating=");
					scanf("%s",b[i].flag_indicating);
				}
			break;

		case 2:
			printf("\n Display book information");
			printf("\n accession_number \t title_of_the_book \t author_name \t price_of_the_book \t flag_indicating");
			for(i=0;i<3;i++)
			{
				printf("\n %d \t %s \t %s \t %d \t %s",b[i].accession_number,b[i].title_of_the_book,b[i].author_name,b[i].price_of_the_book,b[i].flag_indicating);
			}
			break;

		case 3:
			printf("\n List all books of given author");
			printf("Enter author name:");
			scanf("%s", temp1);
			for(i=0;i<3;i++)
			{
				if(strcmp(b[i].author_name,temp1)==0)
				{
					printf("\n %d \t %s \t %s \t %d \t %s",b[i].accession_number,b[i].title_of_the_book,b[i].author_name,b[i].price_of_the_book,b[i].flag_indicating);
				}
			}
			break;

		case 4:
			printf("\n List the title of specified book");
			printf("Enter author to search title: ");
			scanf("%s", temp2);
			for(i=0;i<3;i++)
			{
				if(strcmp(b[i].title_of_the_book,temp2)==0)
				{
					printf("\n %d \t %s \t %s \t %d \t %s",b[i].accession_number,b[i].title_of_the_book,b[i].author_name,b[i].price_of_the_book,b[i].flag_indicating);
				}
			}
			break;

		case 5:
			printf("\n List total no. of books in the library");
			int count=0;
			for(i=0;i<3;i++)
			{
				count++;
			}
			printf("total books=%d",count);
			break;

		case 6:

			printf("\n enter accession num=");
			scanf("%d",&num);
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					if(b[i].accession_number<b[j].accession_number)
					{
						t=b[i];
						b[i]=b[j];
						b[j]=t;
					}
				}
			}
			break;

		case 7:

			k=k+1;
			break;

		default:
			printf("invalid input");
			break;
		}
		printf("\nDo you wish to continue: ");
		scanf("%d", &ch2);

	} while (ch2==0);
	
	return 0;
}
