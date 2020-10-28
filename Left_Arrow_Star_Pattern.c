/*
WAP to print  Left Arrow Star Pattern.
autrhor: Mohak-Goel
date: 02-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,j,temp2,temp1,total;
  printf("Left Arrow Star Pattern\n");
  printf("============================================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  total=2*n;
  temp2=n;
  temp1=total;
  for (i = 1; i < total; i++) {
      for (j = 1; j <=temp1; j++)
      {
          if (j<temp2)
            printf(" ");

          else if (j>temp2)
              printf("*");
      }
      printf("\n");

      if (i<n){
        temp2--;
        temp1-=2;
      }

      else{
        temp2++;
        temp1+=2;
      }
  }

  return 0;
}
