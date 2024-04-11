int main()
{
	int num,temp=0,r,sum=0,sno,eno;
	printf("Enter starting number");
	scanf("%d",&sno);
	printf("Enter ending number");
	scanf("%d",&eno);
	for(num=0;num<=eno;num++)
	{
		temp=num;
		sum=0;
		while(temp!=0)
		{
			r=temp%10;
			sum=sum+(r*r*r);
			temp=temp/10;
		}
		if(sum==num)
			printf("%d\t",num);
	}
	return 0;
}
