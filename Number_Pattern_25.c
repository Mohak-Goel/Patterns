/*
WAP to print pattern:
  12345
  1234
  123
  12
  1
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
  temp1=n;
  for (i = 1; i <=n; i++) {
      for ( j = 1; j <= temp1; j++)
        printf("%d", j);
      temp1--;
      printf("\n");
  }

  return 0;
}
