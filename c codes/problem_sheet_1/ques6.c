#include<stdio.h>
int main()
{
	int bs;
	float da,ha,ma,gs;
	printf("enter basic salary");
	scanf("%d",&bs);
	{
		da=bs*0.40;
		ha=bs*0.20;
		ma=bs*0.05;
		gs=bs+da+ha+ma;
		printf("Gross salary=%.2f",gs);
	}
	return 0;
}
