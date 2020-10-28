/*
WAP to print pattern:
  56789
  4567
  345
  23
  1
author: Mohak-Goel
date: 04-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1,temp2;
  printf("Number pattern 31\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=temp2=n;

  for (i = 1; i<=n; i++) {
      for ( j = 1; j <=temp2; j++)
        printf("%d", temp1++);
      temp1=--temp2;
      printf("\n");
  }

  return 0;
}
