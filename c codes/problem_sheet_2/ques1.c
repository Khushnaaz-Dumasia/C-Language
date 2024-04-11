int main()
{
	int n;
	printf("Enter no");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("Invalid input");
	}
	else if(n%2!=0)
	{
		printf("Prime number");
	}
	else	
	{
		printf("Not prime number");
	}
	return 0;
}
