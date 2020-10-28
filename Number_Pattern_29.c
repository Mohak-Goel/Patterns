/*
WAP to print pattern:
  54321
  5432
  543
  54
  5
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
  for (i = 1; i <=n; i++) {
      for ( j = n; j >= i; j--)
        printf("%d", j);
      printf("\n");
  }

  return 0;
}
