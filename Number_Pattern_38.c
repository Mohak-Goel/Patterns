/*
WAP to print pattern:
  1
  11
  101
  1001
  11111
author: Mohak-Goel
date: 04-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j;
  printf("Number pattern 38\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  for (i = 1; i<=n; i++) {
      for ( j = 1; j <=i; j++)
        printf("%d", (j==1||j==i||i==n?1:0));
      printf("\n");
  }

  return 0;
}
