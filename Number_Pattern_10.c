/*
WAP to print pattern:
  11111
  22222
  33333
  44444
  55555
autrhor: Mohak-Goel
date: 03-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1;
  printf("Number pattern 10\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=1;
  for (i = 1; i <= n*n; i++) {
      if (i%n!=0)
          printf("%d", temp1);
      else
          printf("%d\n", temp1++);
  }

  return 0;
}
