int main()
{
	int i=1,n,sum=0;
	printf("Enter N");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		printf("\nOdd num is = %d",i);
		i=i+2;
	}
	printf("\nSum of all odd num is = %d",sum);
	return 0;
}