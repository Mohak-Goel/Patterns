/*
WAP to print pattern:
  01110
  10001
  10001
  10001
  01110
autrhor: Mohak-Goel
date: 03-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1,temp2;
  printf("Number pattern 9\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=1;
  temp2=n;
  for (i = 1; i <= n; i++) {
      if (i==1 || i==n) {
          for (j = 1; j <= n; j++) {
            if (j==1||j==n)
              printf("0");
            else
              printf("1");
          }
      }
      else
      {
        for (j = 1; j <= n; j++) {
          if (j==1||j==n)
            printf("1");
          else
            printf("0");
        }
      }
      printf("\n");
  }

  return 0;
}
