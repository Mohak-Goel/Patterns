/*
WAP to print Eight Star Pattern.
autrhor: Mohak-Goel
date: 01-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,total,temp1,temp2;
  printf("Eight Star Pattern\n");
  printf("=========================================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  total=(2*n+3);
  temp1=temp2=0;
  for (i = 1; i <=total && i!=0 ; i++) {

      if (temp1==0 || temp2==n) {
        printf(" ");
        for ( j = 1; j <=n; j++)
          printf("*");
        printf("\n");
        temp1=1;
        temp2=0;
      }

      else{
          printf("*");
          for (j = 1; j <=n; j++)
            printf(" ");
          printf("*\n");
          temp2++;
      }

  }

  return 0;
}
