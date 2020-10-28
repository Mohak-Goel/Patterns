/*
WAP to print pattern:
  1
  121
  12321
  1234321
  123454321
author: Mohak-Goel
date: 04-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp1,temp2,temp3=1;
  printf("Number pattern 43\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=1;
  for (i = 1; i<=n; i++) {
      temp2=temp1-((temp1-1)/2);
      temp3=1;
      for ( j = 1; j <=temp1; j++)
      {
          if (j<temp2) {
            printf("%d", temp3);
            temp3+=1;
          }
          else
          {
            printf("%d", temp3);
            temp3-=1;
          }
      }
      temp1+=2;
      printf("\n");
  }

  return 0;
}
