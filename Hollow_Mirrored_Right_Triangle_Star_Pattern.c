/*
WAP to print Hollow Mirrored Right Triangle Star Pattern.
autrhor: Mohak-Goel
date: 31-01-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,temp1,temp2,total,j=1;
  printf("Hollow Mirrored Right Triangle Star Pattern\n");
  printf("=========================================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=temp2=n;
  total=n*n;
  for (i = 1; i <= total; i++) {

    if ((i==temp2 && temp2!=n)||(i>total-n && i<=total))
          printf("*");

    else if ((i<temp2 && i>temp1-n)||(i>temp2 && i<temp1))
          printf(" ");

    else
    {
          printf("*\n");
          temp1 += n;
          temp2 = temp1-j;
          j++;
    }
  }

  return 0;
}
