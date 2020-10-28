/*
WAP to print pattern:
  1
  123
  12345
  1234567
  123456789
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
  for (i = 1; i<=2*n-1; i+=2) {
      for ( j = 1; j <=i; j++)
        printf("%d", j);
      printf("\n");
  }

  return 0;
}
