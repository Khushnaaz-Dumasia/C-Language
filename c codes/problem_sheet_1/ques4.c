int main(void)
{
	int a,b,c,largest;
		printf("enter 3 nos");
		scanf("%d %d %d",&a ,&b ,&c);
		if(a==b==c)
		{
			printf("All are euqal");
		}
		else if(a==b>c)
		{
			printf("largest=%d",a);
		}
		else if(a==c>b)
		{
			printf("largest=%d",a);
		}
		else if(c==b>a)
		{
			printf("largest=%d",c);
		}
		else if(a==b<c)
		{
			printf("largest=%d",c);
		}
		else if(a==c<b)
		{
			printf("largest=%d",b);
		}
		else if(c==b<a)
		{
			printf("largest=%d",a);
		}
		largest=((a>b)?((a>c)?a:c):((b>c)?b:c));
		printf("largest=%d",largest);
		return 0;
}
