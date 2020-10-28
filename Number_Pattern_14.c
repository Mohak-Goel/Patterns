/*
WAP to print pattern:
  55555
  54444
  54333
  54322
  54321
author: Mohak-Goel
date: 03-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1=1,temp2=2;
  printf("Number pattern 14\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=temp2=n;
  for (i = 1; i<=n; i++) {
      temp1=n;
      for (j=1; j<=n; j++) {
        if (j<i)
          printf("%d", temp1--);
        else
          printf("%d", temp1);
      }
      printf("\n");

  }

  return 0;
}
