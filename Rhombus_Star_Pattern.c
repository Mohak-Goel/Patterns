/*
WAP to print Rhombus star pattern.
autrhor: Mohak-Goel
date: 31-01-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,temp1,temp2,j=2;
  printf("Rhombus Star pattern\n");
  printf("===================================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=n;

  for (int i = 1; i <= n*n + (int)(0.5*(n-1)*(n)); i++) {

      if (i<temp1)
        printf(" ");

      else{
        printf("*");

        if (i%(temp1+n-1)==0)
        {
          printf("\n");
          temp1 += 2*n-j;
          j++;
        }
      }
  }

  return 0;
}
