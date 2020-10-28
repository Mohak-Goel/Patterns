/*
WAP to print Half Diamond Star Pattern.
autrhor: Mohak-Goel
date: 01-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1,temp2,total;
  printf("Half Diamond Star Pattern\n");
  printf("============================================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  temp1=temp2=n;
  printf("\n");
  total=2*n-1;
  for (i = 1; i <= total; i++) {
      if (i<=n) {
        for (j = 1; j <=i; j++)
          printf("*");
        printf("\n");
      }
      else{
        for (j = n - (i-n); j > 0; j--)
          printf("*");
        printf("\n");
      }
  }

  return 0;
}
