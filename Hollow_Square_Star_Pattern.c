/*
WAP to print Hollow Square star pattern.
autrhor: Mohak-Goel
date: 31-01-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i;
  printf("Hollow Square star pattern\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");

  for (int i = 1; i <= n*n; i++) {

    if (i<n)
      printf("*");

    else if (i>(n*n-n) && i<n*n)
      printf("*");

    else if (i%n==0)
      printf("*\n");

    else if (i%n==1)
      printf("*");
      
    else
      printf(" ");

  }

  return 0;
}
