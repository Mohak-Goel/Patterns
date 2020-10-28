/*
WAP to print pattern:
  5
  54
  543
  5432
  54321
author: Mohak-Goel
date: 04-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1;
  printf("Number pattern 28\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=n;
  for (i = 1; i <=n; i++) {
      for ( j = 1; j <= i; j++)
        printf("%d", temp1--);
      temp1=n;
      printf("\n");
  }

  return 0;
}
