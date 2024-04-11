int main()
{
	int i,n,a,b,c;
	printf("Enter N");
	scanf("%d",&n);
	for(i=1,a=-1,b=1;i<=n;i++)
	{
		c=a+b;
		printf("%d",c);
		a=b;
		b=c;
	}
	return 0;
}