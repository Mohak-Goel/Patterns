/*
WAP to print Hollow Mirrored Rhombus star pattern.
autrhor: Mohak-Goel
date: 31-01-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,temp1,temp2,j=1, total;
  printf("Hollow Mirrored Rhombus Star pattern\n");
  printf("=====================================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=n;
  temp2=0;
  total=(n*n + (int)(0.5*(n-1)*(n)));
  for (int i = 1; i <= (n*n + (int)(0.5*(n-1)*(n))); i++) {

      if (i==temp2+1 || i<n || ((i>(total-n)) && i<total))
        printf("*");

      else if (i<=temp2)
        printf(" ");

      else{

        if (i==temp1){

            printf("*\n");
            temp1+=n+j;
            temp2+=n+j;
            j++;
        }
        else
          printf(" ");
      }
  }

  return 0;
}
