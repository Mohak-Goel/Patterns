/*
WAP to print  Right Arrow Star Pattern.
autrhor: Mohak-Goel
date: 02-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp2,temp1,total;
  printf("Right Arrow Star Pattern\n");
  printf("============================================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  total=2*n;
  temp2=0;
  temp1=n;
  for (i = 1; i < total; i++) {
      for (j = 1; j <=n; j++)
      {
          if (j>temp2)
              printf("*");
          else
              printf("  ");
      }
      printf("\n");

      if (i<n)
        temp2++;

      else
        temp2--;
  }

  return 0;
}
