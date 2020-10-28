/*
WAP to print Diamond Pyramid Star Pattern.
autrhor: Mohak-Goel
date: 02-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1,temp2;
  printf("Diamond Pyramid Star Pattern\n");
  printf("============================================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  temp1=temp2=n;
  printf("\n");

  for (i = 1,temp2=1; i <= 2*n-1; i++) {
      for (j = 1; j < temp1; j++)
        printf("*");
      for (j = 1; j <=temp2; j++)
        printf(".");
        for (j = 1; j < temp1; j++)
          printf("*");
      printf("\n");
      if (i<n){
        temp2+=2;
        temp1--;
      }
      else{
        temp2-=2;
        temp1++;
      }
  }

  return 0;
}
