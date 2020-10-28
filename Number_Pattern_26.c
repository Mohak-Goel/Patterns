/*
WAP to print pattern:
  1
  21
  321
  4321
  54321
author: Mohak-Goel
date: 04-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1;
  printf("Number pattern 25\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  for (i = 1; i <=n; i++) {
      temp1=i;
      for ( j = 1; j <= i; j++)
        printf("%d", temp1--);
      printf("\n");
  }

  return 0;
}
