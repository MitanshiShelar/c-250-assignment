#include<stdio.h>

void add(int*p,int*q)
{
 int r;
 r=*p+*q;
 printf("Addition:%d",r);
}
int main()
{
  int a,b;
  printf("Enter first number:\n");
  scanf("%d",&a);
  
  printf("Enter Second number:\n");
  scanf("%d",&b);
  
  add(&a,&b);
}
