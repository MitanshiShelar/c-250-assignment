#include<stdio.h>
void factorial(double);
void factorial(double x )
{
 double i,fact=1;
 if(x==0)
   printf("Factorial of 0 is 1\n");
 else
   { 
     for(i=1;i<=x;i++)
       {
         fact=fact*i;
       }
      
      printf("Factorial of %.2lf is %.2lf  (!%.2lf=%.2lf)\n",x,fact,x,fact);
   }
}
  double main()
  {
    double num;
      printf("Enter a positive number to find factorial\n");
      scanf("%lf",&num);
      factorial(num);
      return 0;
  }
