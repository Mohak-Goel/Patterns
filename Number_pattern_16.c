/*
WAP to print pattern:
  12345
  23451
  34521
  45321
  54321
author: Mohak-Goel
date: 03-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1=1,temp2=2;
  printf("Number pattern 17\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=temp2=1;
  for (i = 1; i<=n; i++) {
      temp1=temp2=i;
      for (j=1; j<=n; j++) {
        if (temp1>n)
          printf("%d", --temp2);
        else
          printf("%d", temp1++);
      }
      printf("\n");

  }

  return 0;
}
