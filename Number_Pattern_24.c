/*
WAP to print pattern:
  1
  12
  123
  1234
  12345
author: Mohak-Goel
date: 04-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1;
  printf("Number pattern 21\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");

  for (i = 1; i <=n; i++) {
      for ( j = 1; j <= i; j++)
        printf("%d", j);
      printf("\n");
  }

  return 0;
}
