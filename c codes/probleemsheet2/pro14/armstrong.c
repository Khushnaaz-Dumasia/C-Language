#include<stdio.h>
int countdigit(int *);
int countdigit(int *p)
{
    int count=0;
    //p=a;
    while(*p>0)
    {
        *p=*p/10;
        count++;
    }
    return count;
}
int power(int *, int *);
int power(int *b, int *e)
{
    int pow=1;
    //b=x;
    //e=y;
    for(int i=1; i<=*e; i++)
    {
        pow=pow*(*b);
    }
    return pow;
}
int isarmstrong(int *);
int isarmstrong(int *p1)
{
    int n1, sum=0, r, digit=0, temp=1, i;
    n1=p1;
    digit=countdigit(n1);
    printf("Number of digits=%d", digit);
    n1=p1;
    while(n1!=0)
    {
        r=n1%10;
        temp=1;
        temp=power(r, digit);
        sum=sum+temp;
        n1=n1/10;
    }
    if(p1==sum)
    {
        return 0;
    }
}
int main()
{
    int n;
    int *ptr;
    ptr=n;
    printf("Enter the number=");
    scanf("%d", ptr);
    if(isarmstrong(*ptr)==0)
    {
        printf("Is an armsrong number");
    }
    else{
        printf("Not an armstrong number");
    }
    return 0;
}