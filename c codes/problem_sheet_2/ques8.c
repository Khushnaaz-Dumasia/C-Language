int main()
{
	int d,m,y,days;
	printf("Enter Day-Month-Year");
	scanf("%d%d%d",&d,&m,&y);
	printf("Enter days to add");
	scanf("%d",&days);
	d=d+days;
	if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
	{
		if(d>=31)
		{
			d=d-31;
			m++;
		}
	}
	else if(m==2)
	{
		if(y%4==0)
			d=d-29;
		else
			d=d-28;
	}
	else
	{
		d=d-30;
	}
	if(m>=12)
	{
		m=1;
		y++;
	}
	printf("%d-%d-%d",d,m,y);
	return 0;
}
