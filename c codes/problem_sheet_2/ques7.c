int main()
{
	int min,max,dd,yy,mm;
	printf("Enter date : ");
	scanf("%d%d%d",&dd,&mm,&yy);
	min=1800;
	max=2022;
	if(dd<1 || dd>31)
	{
		printf("Invalid date");
	}
	else
	{
		if(mm<1 || mm>12)
		{
			printf("\nInvalid date");
		}
		else
		{
			if(yy<min || yy>max)
			{
				printf("\nInvalid date");
			}
			else
			{
				if(mm==2 && yy%4==0)
				{
					if(dd<1 || dd>29)
					{
						printf("\nInvalid date");
					}
				}
				else
				{
					if(mm==2 && yy%4!=0)
					{
						if(dd<1 || dd>28)
						{
							printf("\nInvalid date");
						}
					}
					else
					{
						printf("\nValid date");
					}
				}
			}
		}
	}
	return 0;
}
