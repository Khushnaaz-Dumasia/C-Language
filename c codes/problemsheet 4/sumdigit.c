#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[])
{
    int n, sum=0, m;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    if(argc>2 || argc<0)
    {
        printf("\nEnter 1 number only");
    }
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("\n Sum= %d", sum);
    return 0;
}