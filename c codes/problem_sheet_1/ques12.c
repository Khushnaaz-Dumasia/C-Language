int main()
{
	int a,b,payment;//a=regular working hours,b=overtime hours
	printf("enter number of hours worked");
	scanf("%d",&a);
	{
		b=a-48;
	}
	if(a<48)
		{
			printf("NO payment");
		}
	else if(a==48)
		{
			payment=a*50;
			printf("Payment=%d",payment);
		}
	else if(b>=5)
		{
			payment=(48*50)+(b*70);
			printf("Payment=%d",payment);
		}
	else if(b>=10)
		{
			payment=(48*50)+(b*85);
			printf("Payment=%d",payment);
		}
	else
		{
			payment=(48*50)+(b*120);
			printf("Payment=%d",payment);
		}
	return 0;
}
