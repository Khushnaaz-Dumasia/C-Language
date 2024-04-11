int main()
{
	int i,n,fact=1;
	printf("Enter num");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial is=%d",fact);
	return 0;
}
