/*
WAP to print pattern:
  12345
  23455
  34555
  45555
  55555
author: Mohak-Goel
date: 03-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1=1,temp2=2;
  printf("Number pattern 15\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=temp2=1;
  for (i = 1; i<=n; i++) {
      temp1=i;
      for (j=1; j<=n; j++) {
        if (j<i)
          printf("%d", temp1);
        else
          printf("%d", temp1++);
      }
      printf("\n");

  }

  return 0;
}
