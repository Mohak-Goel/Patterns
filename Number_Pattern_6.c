/*
WAP to print pattern:
  11011
  11011
  00000
  11011
  11011
autrhor: Mohak-Goel
date: 03-02-2020
version 1.0
*/

#include<stdio.h>

int main() {

  int n,i,temp1,temp2;
  printf("Number pattern 7\n");
  printf("========================================\n");
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("\n");
  temp1=(n/2)+1;
  temp2=(int)n/2;
  temp2=temp2*n;
  temp2++;
  for (int i = 1; i <= n*n; i++) {
    if (i%n!=0){
        if (i==(temp1)||i==temp2){
          printf("0");
          if (i==temp2)
            temp2++;
        }
        else
          printf("1");
      }
    else{
        if (i==temp2)
          printf("0\n");
        else
          printf("1\n");
        temp1+=n;
    }
  }

  return 0;
}
