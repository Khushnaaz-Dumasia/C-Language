int main()
{
	int n,n1,r,sum=0;
	printf("Enter N");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	printf("%d",sum);
	if(sum==n1)
	{
		printf("\nArmstrong no");
	}
	else
	{
		printf("\nNot armstrong no");
	}
	return 0;
}
