/*
WAP to print pattern:
  54321
  4321
  321
  21
  1
author: Mohak-Goel
date: 04-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1;
  printf("Number pattern 27\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=n;
  for (i = 1; i <=n; i++) {
      for ( j = temp1; j >= 1; j--)
        printf("%d", j);
      temp1--;
      printf("\n");
  }

  return 0;
}
