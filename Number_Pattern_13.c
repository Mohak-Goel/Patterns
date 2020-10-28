/*
WAP to print pattern:
  1 2 3 4 5
  6 7 8 9 10
  11 12 13 14 15
  16 17 18 19 20
  21 22 23 24 25
autrhor: Mohak-Goel
date: 03-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1=1,temp2=2;
  printf("Number pattern 13\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  for (i = 1; i <= n*n; i++) {
      if (i%n!=0)
          printf("%d\t", i);
      else
          printf("%d\n", i);
  }

  return 0;
}
