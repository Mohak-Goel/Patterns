/*
WAP to print pattern:
  11111
  10001
  10001
  10001
  11111
autrhor: Mohak-Goel
date: 03-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,temp1,temp2;
  printf("Number pattern 4\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=2;
  temp2=n-1;
  for (int i = 1; i <= n*n; i++) {
    if (i%n!=0){
        if (i<temp1 || i>temp2||i<n||( i>(n*n-n) && i<(n*n)))
          printf("1");
        else
          printf("0");
      }
    else{
      printf("1\n");
      temp1+=n;
      temp2+=n;
    }
  }

  return 0;
}
