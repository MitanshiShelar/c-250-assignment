#include<stdio.h>
int leap_year(int);
int leap_year(int x)
{
  if(x%4==0)
  printf("%d year is a leap year\n",x);
  else
  printf("%d year is not a leap year\n",x);
}
 int main()
 {
   int a;
   printf("Enter a year\n");
   scanf("%d",&a);
    leap_year(a);
 
 }
