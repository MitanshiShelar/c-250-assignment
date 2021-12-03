#include<stdio.h>
void factorial(int);
void factorial(int x )
{
 int i,fact=1;
 if(num==0)
   printf("Factorial of 0 is 1\n");
 else
   { 
     for(i=1;i<=x;i++)
       {
         fact=fact*count;
       }
      
      printf("Factorial of %d is %d (!%d=%d)\n,x,fact,x,fact");
   }
}
  int main()
  {
    int num;
      printf("Enter a positive number to find factorial");
      scanf("%d",&num);
      factorial(num);
      return 0;
  }
