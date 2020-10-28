/*
WAP to print pattern:
  5
  45
  345
  2345
  12345
author: Mohak-Goel
date: 04-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1;
  printf("Number pattern 30\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  for (i = n; i>=1; i--) {
      for ( j = i; j <=n; j++)
        printf("%d", j);
      printf("\n");
  }

  return 0;
}
