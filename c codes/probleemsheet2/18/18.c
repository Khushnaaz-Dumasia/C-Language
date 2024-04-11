/*
 * 18.c
 *
 *  Created on: 14-Feb-2023
 *      Author: root
 */

#include <stdio.h>
void input(int *p, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("enter element of %d : ", i + 1);
    scanf("%d", &(*(p + i)));
  }
  return;
}
void print(int r1, int c1, int (*p)[c1])
{
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      printf("%d\t", *(*(p + i) + j));
    }
    printf("\n");
  }
  return;
}
void addi(int r1, int c1, int (*p1)[c1], int r2, int c2, int (*p2)[c2])
{
  if (r1 == r2 && c1 == c2)
  {
    int c[r1][c1];
    int(*d)[c1] = c;

    for (int i = 0; i < r1; i++)
    {
      for (int j = 0; j < c2; j++)
      {
        *(*(d + i) + j) = *(*(p1 + i) + j) + *(*(p2 + i) + j);
      }
    }
    print(r2, c2, d);
  }
  else
  {
    printf("\naddition is not posibale\n");
  }
  return;
}

void subtract(int r1, int c1, int (*p1)[c1], int r2, int c2, int (*p2)[c2])
{
	if (r1 == r2 && c1 == c2)
	{
    int c[r1][c1];
    int(*d)[c1] = c;

    for (int i = 0; i < r1; i++)
    {
    	for (int j = 0; j < c2; j++)
    	{
        *(*(d + i) + j) = *(*(p1 + i) + j) - *(*(p2 + i) + j);
    	}
    }
    print(r2, c2, d);
  }
  else
  {
    printf("\naddition is not posibal\n");
  }
  return;
}

void multi(int r1, int c1, int (*p1)[c1], int r2, int c2, int (*p2)[c2])
{
  if (c1 == r2)
  {
    int c[r1][c2];
    int(*d)[c2] = c, sum = 0;
    for (int i = 0; i < r1; i++)
    {
      for (int j = 0; j < c1; j++)
      {
        sum = 0;
        for (int k = 0; k < r2; k++)
        {
          sum += (*(*(p1 + i) + k)) * (*(*(p2 + k) + j));
        }
        *(*(d + i) + j) = sum;
      }
    }
    print(r1, c2, d);
  }
  else
  {
    printf("\n multipikation is not posibal\n");
  }
  return;
}

void transpose(int r1, int c1, int (*p)[c1])
{
  int c[c1][r1];
  int(*d)[r1] = c, temp;

  for (int i = 0; i < c1; i++)
  {
    for (int j = 0; j < r1; j++)
    {
      *(*(d + i) + j) = *(*(p + j) + i);
    }
  }
  // int l = r1 * c1;

  print(c1, r1, d);
  return;
}

int main()
{
  int r1, c1, r2, c2;
  printf("how many row in 1 array : ");
  scanf("%d", &r1);
  printf("how many column in 1 array : ");
  scanf("%d", &c1);
  printf("how many row in 2 array : ");
  scanf("%d", &r2);
  printf("how many column in 2 array : ");
  scanf("%d", &c2);

  int a[r1][c1], b[r2][c2];
  int(*p1)[c1] = a, (*p2)[c2] = b;
  printf("\n\nenter first array element : \n");
  input(p1, r1 * c1);
  print(r1, c1, p1);

  printf("\n\nenter second array element : \n");
  input(p2, r2 * c2);
  print(r2, c2, p2);

  printf("\n\naddition is :\n\n");
  addi(r1, c1, p1, r2, c2, p2);

  printf("\n\subtract  is :\n\n");
  subtract(r1, c1, p1, r2, c2, p2);

  printf("\n\nmultipication is :\n\n");
  multi(r1, c1, p1, r2, c2, p2);

  printf("\ntranspose of 1 array  is : \n");
  transpose(r1, c1, p1);

   printf("\ntranspose of 2 array  is : \n");
  transpose(r2, c2, p2);
  return 0;
}
