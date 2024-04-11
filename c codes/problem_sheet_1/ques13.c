int main()
{
	int amount;
	float it;
	printf("enter amount");
	scanf("%d",&amount);
	if(amount>100000)
	{
		it=amount*0.12;
	}
	else if(amount>60000)
	{
		it=amount*0.10;
	}
	else if(amount>30000)
	{
		it=amount*0.08;
	}
	else
	{
		it=amount*0.072;
	}
	printf("Interest=%.2f",it);
	return 0;
}
