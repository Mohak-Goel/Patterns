/*
WAP to print Square star pattern.
autrhor: Mohak-Goel
date: 31-01-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i;
  printf("Square star pattern\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");

  for (int i = 1; i <= n*n; i++) {
    if (i%n!=0)
        printf("*");
    else
      printf("*\n");
  }

  return 0;
}
