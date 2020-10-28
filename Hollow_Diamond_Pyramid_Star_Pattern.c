/*
WAP to print Hollow Diamond Pyramid Star Pattern.
autrhor: Mohak-Goel
date: 02-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1,temp2,total;
  printf("Hollow Diamond Pyramid Star Pattern\n");
  printf("============================================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  total=2*n;
  temp1=n+1;
  temp2=n;
  for (i = 1; i <= total; i++) {
      for (j = 1; j <= total; j++)
      {
          if (j<temp1||j>temp2)
              printf("*");
          else
              printf(".");
      }
      printf("\n");
      if (i<n) {
        temp1--;
        temp2++;
      }
      else if (i==n)
        continue;
      else{
        temp1++;
        temp2--;
      }

  }

  return 0;
}
