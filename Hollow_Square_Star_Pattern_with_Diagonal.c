/*
WAP to print Hollow Square star with diagonal pattern.
autrhor: Mohak-Goel
date: 31-01-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,diagonal1, diagonal2;
  printf("Hollow Square star with diagonal pattern\n");
  printf("===================================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  diagonal1 = n+2;
  diagonal2 = n*2-1;
  for (int i = 1; i <= n*n; i++) {

    if (i<n)
      printf("*");

    else if (i>(n*n-n) && i<n*n)
      printf("*");

    else if (i%n==0)
      printf("*\n");

    else if (i%n==1)
      printf("*");

    else if (i==diagonal1) {
      printf("*");
      diagonal1+=n+1;
    }

    else if (i==diagonal2) {
      printf("*");
      diagonal2+=n-1;
    }

    else
      printf(" ");

  }

  return 0;
}
