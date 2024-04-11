int main()
{
	int a,b,payment;//a=regular working hours,b=overtime hours
	printf("enter number of hours worked");
	scanf("%d",&a);
	{
		b=a-40;
	}
	if(a<40)
		{
			printf("No payment");
		}
	else if(a==40)
		{
			payment=a*2.5;
			printf("Payment=%d",payment);
		}
	else if(b>=5)
		{
			payment=(40*2.5)+(b*7);
			printf("Payment=%d",payment);
		}
	else if(b>=10)
		{
			payment=(40*2.5)+(b*8.5);
			printf("Payment=%d",payment);
		}
	else
		{
			payment=(40*2.5)+(b*12);
			printf("Payment=%d",payment);
		}
	return 0;
}
