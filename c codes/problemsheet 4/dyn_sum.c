#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, sum=0, n, *p;
    printf("Enter number of elements = ");
    scanf("%d", &n);

    p=(int *)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("\nmemory not allocated");
        exit(0);
    }
    printf("\nEnter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d", p+i);
        sum+=*(p+i);
    }
    printf("\nSum= %d", sum);

    free(p);
    return 0;
}