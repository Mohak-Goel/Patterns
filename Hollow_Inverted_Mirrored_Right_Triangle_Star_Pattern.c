/*
WAP to print Hollow Inverted Mirrored Right Triangle Star Pattern.
autrhor: Mohak-Goel
date: 01-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,temp2,temp1,total,j=2;
  printf("Hollow Inverted Mirrored Right Triangle Star Pattern\n");
  printf("============================================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp2=n;
  temp1=temp2+2;
  total=n*n;
  for (int i = 1; i <= total; i++) {

    if (i<n||i==temp1)
          printf("*");

    else if (i<temp1 && i<temp2 || (i>temp1 && i<temp2))
          printf(" ");

    else
    {
          printf("*\n");
          temp1=temp2+j;
          temp2+=n;
          j++;
    }
  }

  return 0;
}
