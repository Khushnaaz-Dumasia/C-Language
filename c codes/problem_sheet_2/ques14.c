int main()
{
	int i,n,r,sum=0;
	printf("Enter num");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r%2>0)
		{
			sum=sum+r;
		}
		n=n/10;
	}
	printf("sum of odd number=%d",sum);
	return 0;
}
