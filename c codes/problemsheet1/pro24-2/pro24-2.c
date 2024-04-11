/*
 * pro24-2.c
 *
 *  Created on: 30-Jan-2023
 *      Author: root
 */
#include<stdio.h>
void input(int [],int,int [],int);
void input(int a[],int n,int b[],int m)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter element a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		printf("enter element b[%d]=",i);
		scanf("%d",&b[i]);
	}
	return ;
}
void print(int [],int);
void print(int c[],int k)
{
	int i;
	for(i=0;i<k;i++)
	{
		printf("%d",c[i]);
	}
	return;
}
void sort(int [],int);
void sort(int p[],int q)
{
	int i,j,r,temp;
	for(i=0;i<r;i++)
	{
		for(j=i+1;j<q;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	return ;
}
void merge(int [],int,int [],int,int [],int);
void merge(int x[],int y,int z[],int e,int f[],int g)
{
	int i,l=0;
	for(i=0;i<y;i++)
	{
		f[l]=x[i];
		l++;
	}
	for(i=0;i<e;i++)
	{
		f[l]=z[i];
		l++;
	}
	return ;
}
int main()
{
	int a,b,choice1,choice2;
	printf("enter a array=");
	scanf("%d",&a);
	printf("enter b array=");
	scanf("%d",&b);

	int r=a+b;
	int x[a],y[b],z[r];

	do
	{
		printf("\n 1.Read two integer arrays with unsorted elements");
		printf("\n 2.Sort them in ascending order");
		printf("\n 3.Merge the sorted arrays");
		printf("\n 4.Print the sorted list");
		printf("\n 5.Exit");

		printf("\n enter your choice=");
		scanf("%d",&choice1);

		switch(choice1)
		{
		case 1:
			input(x,a,y,b);
			break;

		case 2:
			sort(x,a);
			print(x,a);
			sort(y,b);
			print(y,b);
			break;

		case 3:
			merge(x,a,y,b,z,r);
			sort(z,r);
			break;

		case 4:
			print(z,r);
			break;

		case 5:
			exit(0);
			printf("\n exit");
			break;
		}
		printf("\n enter 0 for countinue");
		scanf("%d",&choice2);
	}
	while(choice2==0);
	return 0;

}



