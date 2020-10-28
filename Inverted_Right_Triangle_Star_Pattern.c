/*
WAP to print Inverted Right Triangle Star Pattern.
autrhor: Mohak-Goel
date: 31-01-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,temp2,total,j=1;
  printf("Inverted Right Triangle Star Pattern\n");
  printf("=======================================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp2=n;
  total=0.5*n*(n+1);
  for (int i = 1; i <= total; i++) {

    if (i<temp2)
          printf("*");

    else
    {
          printf("*\n");
          temp2+=n-j;
          j++;
    }
  }

  return 0;
}
