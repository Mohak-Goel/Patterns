/*
WAP to print pattern:
  5 5 5 5 5 5 5 5 5
  5 4 4 4 4 4 4 4 5
  5 4 3 3 3 3 3 4 5
  5 4 3 2 2 2 3 4 5
  5 4 3 2 1 2 3 4 5
  5 4 3 2 2 2 3 4 5
  5 4 3 3 3 3 3 4 5
  5 4 4 4 4 4 4 4 5
  5 5 5 5 5 5 5 5 5
author: Mohak-Goel
date: 03-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1=1,temp2=2,temp3;
  printf("Number pattern 18\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp3=n;
  temp1=0;
  temp2=2*n-2;

  for (i = 0; i<(2*n-1); i++) {
      temp3=n;
      for (j=0; j<(2*n-1); j++) {
        if (j>=temp1&&j<=temp2)
          printf(" %d", temp3);
        else if (j>temp2)
          printf(" %d", ++temp3);
        else
          printf(" %d", temp3--);
      }
      printf("\n");
      if (i<n-1) {
        temp1++;
        temp2--;
      }
      else
      {
        temp2++;
        temp1--;
      }

  }

  return 0;
}
