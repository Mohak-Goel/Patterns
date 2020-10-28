/*
WAP to print pattern:
  1
  24
  135
  2468
  13579
author: Mohak-Goel
date: 04-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1,temp2;
  printf("Number pattern 38\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  for (i = 1; i<=n; i++) {
      temp1=1;
      temp2=2;
      for ( j = 1; j <=i; j++)
      {
          if (i%2==0) {
            printf("%d", temp2);
            temp2+=2;
          }
          else
          {
            printf("%d", temp1);
            temp1+=2;
          }
      }
      printf("\n");
  }

  return 0;
}
