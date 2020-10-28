/*
WAP to print pattern:
  10001
  01010
  00100
  01010
  10001
autrhor: Mohak-Goel
date: 03-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,temp1,temp2;
  printf("Number pattern 7\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=1;
  temp2=n;
  for (int i = 1; i <= n*n; i++) {
    if (i%n!=0){
        if (i==temp1||i==temp2)
          printf("1");
        else
          printf("0");
      }
    else{
        if (i==temp2||i==temp1)
          printf("1\n");
        else
          printf("0\n");
        temp1+=n+1;
        temp2+=n-1;
    }
  }

  return 0;
}
