#include<stdio.h>
int main()
{
	int km,meter,feet,inch,cm;
	printf("enter the distance between two cities");
	scanf("%d",&km);
	meter=km*1000;
	feet=meter*3.2;
	inch=feet*12;
	cm=meter*100;
	{
		printf("meters=%d",meter);
		printf("\nfeets=%d",feet);
		printf("\ninchs=%d",inch);
		printf("\ncentimetres=%d",cm);
	}
		return 0;
}
