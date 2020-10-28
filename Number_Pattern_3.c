/*
WAP to print pattern:
  01010
  01010
  01010
  01010
  01010
autrhor: Mohak-Goel
date: 03-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,temp1=0;
  printf("Number pattern 3\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");

  for (int i = 1; i <= n*n; i++) {
    if (i%n!=0){
        if (temp1%2==0)
          printf("0");
        else
          printf("1");
        temp1++;
      }
    else{
      if (temp1%2==0)
        printf("0\n");
      else
        printf("1\n");
      temp1=0;
    }
  }

  return 0;
}
