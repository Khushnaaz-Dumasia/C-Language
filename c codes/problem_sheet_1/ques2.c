int main()
{
	int cy,jy,y,rs;
	printf("enter current year & joining year");
	scanf("%d%d",&cy,&jy);
	{
	y=cy-jy;
	}
	if(jy>cy)
	{
		printf("Error");
	}
	else if(y>7)
		{
			rs=5000;
			printf("Bonus=%d",rs);
		}
	else if(y>4)
		{
			rs=3000;
			printf("Bonus=%d",rs);
		}
	else if(y>1)
		{
			rs=1000;
			printf("Bonus=%d",rs);
		}
	else
		{
			printf("Not eligible for bonus");
		}

	return 0;
}
