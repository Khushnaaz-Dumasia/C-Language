/*
 * 8.c
 *
 *  Created on: 14-Feb-2023
 *      Author: root
 */


#include <stdio.h>
void input(int *p, int n) 
{
  for (int i = 0; i < n; i++) 
  {
    printf("enter element %d :", i + 1);
    scanf("%d", &(*(p + i)));
  }
}
void print(int *p, int n) 
{
  printf("\n");
  for (int i = 0; i < n; i++) 
  {
    printf("%d\t", (*(p + i)));
    if ((i + 1) % 3 == 0) 
    {
      printf("\n");
    }
  }
}
int sum(int *p, int n) {
  int s = 0;
  for (int i = 0; i < n; i++) {
    s = s + *(p + i);
  }
  return s;
}
int main() {

  int a[3][3];
  int *p = a;

  input(p, 9);
  print(p, 9);

  int s = sum(p, 9);
  printf("\nsum = %d", s);
  return 0;
}
