/*
WAP to print pattern:
  1
  22
  333
  4444
  55555
author: Mohak-Goel
date: 04-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1,total;
  printf("Number pattern 20\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=1;
  total=(int)(0.5*(n+1)*(n));

  for (i = 1; i <=n; i++) {
      for ( j = 1; j <= i; j++)
        printf("%d", temp1);
      temp1++;
      printf("\n");
  }

  return 0;
}
