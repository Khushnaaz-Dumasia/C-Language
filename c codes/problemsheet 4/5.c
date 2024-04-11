#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int a[10], temp;
    for(int i=0;i<10;i++)
    {
        printf("Enter elements");
        scanf("%d", &a[i]);   
    }
    if(argc>11)
    {
        printf("Enter 10 values only");
    }
    else{
        for(int i=0;i<10;i++)
        {
            a[i-1]=atoi(argv[i]);
        }
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(a[i]<a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(int i=0;i<10;i++)
        {
            printf("%d", a[i]);
        }
    }
    return 0;
}
