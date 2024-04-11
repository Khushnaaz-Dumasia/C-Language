#include<stdio.h>
#define row 3
#define col 3
int main(void)
{
	int a[row][col],i,j,k=0,t=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n 2D array \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<col;i++)
	{
		for(j=0;j<col;j++)
		{
			for(k=j+1;k<col;k++)
			{
				if(a[j][i]>a[k][i])
				{
					t=a[j][i];
					a[j][i]=a[k][i];
					a[k][i]=t;
				}
			}
		}
	}
	printf("\n");
	printf("\n After column wise sorting \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
