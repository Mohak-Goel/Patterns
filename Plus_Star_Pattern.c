/*
WAP to print  Plus Star Pattern.
autrhor: Mohak-Goel
date: 02-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp2,total;
  printf("Plus Star Pattern\n");
  printf("============================================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  total=2*n-1;
  temp2=n;
  for (i = 1; i <=total; i++) {
    if (i==n){
      for ( j = 1; j <=total; j++)
        printf("+");
      printf("\n");
      }
    else{
      for (j = 1; j <n; j++)
        printf(" ");
      printf("+\n");
      }
  }

  return 0;
}
