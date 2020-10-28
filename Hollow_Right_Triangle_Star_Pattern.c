/*
WAP to print Hollow Right Triangle Star Pattern.
autrhor: Mohak-Goel
date: 31-01-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,temp1,temp2,total,j=2;
  printf("Hollow Right Triangle Star Pattern\n");
  printf("=====================================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=1;
  temp2=temp1+1;
  total=(int)(0.5*(n+1)*(n));
  for (int i = 1; i <= total; i++) {

    if (i==temp2||(i>total-n && i<=total))
          printf("*");

    else if (i>temp2 && i<temp1)
          printf(" ");

    else
    {
          printf("*\n");
          temp2=temp1+1;
          temp1+=j++;
    }
  }

  return 0;
}
