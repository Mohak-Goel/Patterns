/*
WAP to print pattern:
  55555
  4444
  333
  22
  1
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
  temp1=n;

  for (i = 1; i <=n; i++) {
      for ( j = 1; j <= temp1; j++)
        printf("%d", temp1);
      temp1--;
      printf("\n");
  }

  return 0;
}
