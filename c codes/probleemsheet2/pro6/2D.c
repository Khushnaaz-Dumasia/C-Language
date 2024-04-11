#include<stdio.h>
#define row 3
#define col 3
void input(int a[row][col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter array elements [%d][%d]: ", i+1, j+1);
            scanf("%d", *(a+i)+j);
        }
    }
}
void print(int a[row][col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d", *(*(a+i)+j));
        }
        printf("\n");
    }
}
int asort(int a[row][col], int b[row*col])
{
    int i, j, k=0, t;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            *(b+k)=*(*(a+i)+j);
            k++;
        }
    }

    for(i=0;i<row*col;i++)
    {
        for(j=0;j<row*col;j++)
        {
            if(*(b+i)<*(b+j))
            {
                t=*(b+i);
                *(b+i)=*(b+j);
                *(b+j)=t;
            }
        }
    }
    k=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            *(*(a+i)+j)=*(b+k);
            k++;
        }
    }
}
int main()
{
    int x[row][col], y[row*col];
    input(x);
    printf("\n");
    print(x);
    printf("\n");
    asort(x,y);
    print(x);
    return 0;
}