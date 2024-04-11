int main()
{
	int i,n,j,cnt;
	printf("Enter num");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		cnt=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				cnt++;
			}
			if(cnt==2)
			{
				printf("%d",i);
			}
		}
	}

	return 0;
}
