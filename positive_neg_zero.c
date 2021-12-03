#include<stdio.h>
int pos_neg(int x);
int pos_neg(int x)
  {
    if(x>0)
    printf("%d is positive",x);
    else if(x<0)
    printf("%d is negative",x);
    else if(x==0)
    printf("number is zero");
    return (x);
  }
  int main()
  {
    int num ;
    printf("Enter the number:\n");
    scanf("%d",&num);
    pos_neg(num);
  }
