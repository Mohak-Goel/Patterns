/*
WAP to print pattern:
  13579
  3579
  579
  79
  9
author: Mohak-Goel
date: 04-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1,temp2;
  printf("Number pattern 34\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp2=n;

  for (i = 1; i<=(2*n-1); i+=2) {
      for ( j = i; j <=(2*n-1); j+=2)
        printf("%d", j);
      printf("\n");
  }

  return 0;
}
