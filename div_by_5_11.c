#include<stdio.h>
int div(int);
int div(int x)
  {
    if((x%5==0)&&(x%11==0))
      printf("%d is divisible by 5 and 11",x);
    else 
      printf("%d is not divisible by 5 and 11",x);
    return (x);
  }
  int main()
  {
    int num ;
    printf("Enter the number:\n");
    scanf("%d",&num);
    div(num);
  }
