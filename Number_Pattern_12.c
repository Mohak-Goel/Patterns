/*
WAP to print pattern:
  12345
  23456
  34567
  45678
  56789
autrhor: Mohak-Goel
date: 03-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1=1,temp2=2;
  printf("Number pattern 12\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  for (i = 1; i <= n*n; i++) {
      if (i%n!=0)
          printf("%d", temp1++);
      else{
          printf("%d\n", temp1);
          temp1=temp2++;
        }
  }

  return 0;
}
