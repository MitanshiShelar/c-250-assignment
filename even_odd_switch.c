#include<stdio.h>
int eve_odd(int);
int eve_odd(int x)
{
  switch(x%2)
  {
   case 0:printf("even");
   break;
   case 1:printf("odd");
  }
}
int main()
{
 int n;
 printf("Enter the number:\n");
 scanf("%d",&n);
 eve_odd(n);
}
