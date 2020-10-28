/*
WAP to print Right Triangle Star Pattern.
autrhor: Mohak-Goel
date: 31-01-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,temp1;
  printf("Right Triangle Star Pattern\n");
  printf("=====================================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=1;
  for (int i = 1; i <= (int)(0.5*(n+1)*(n)); i++) {

      if (i<temp1)
        printf("*");

      else if (i==temp1){
        printf("*\n");
        temp1+=i;
      }

  }

  return 0;
}
