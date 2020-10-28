/*
WAP to print Hollow Inverted Right Triangle Star Pattern.
autrhor: Mohak-Goel
date: 31-01-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,temp2,temp1,total,j=1;
  printf("Hollow Inverted Right Triangle Star Pattern\n");
  printf("=======================================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp2=n;
  temp1=temp2+1;
  total=0.5*n*(n+1);
  for (int i = 1; i <= total; i++) {

    if (i<n||i==temp1)
          printf("*");

    else if (i<temp2)
          printf(" ");

    else
    {
          printf("*\n");
          temp1=temp2+1;
          temp2+=n-j;
          j++;
    }
  }

  return 0;
}
