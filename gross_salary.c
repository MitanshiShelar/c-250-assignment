#include<stdio.h>
float gross_salary(float);
float gross_salary(float x)
{
   float result,hra,da;
   hra=(x*20)/100;
   da=(x*80)/100;
   result=x+hra+da;
   return(result);
}
int main()
{ 
  float gs,bs;
 printf("Enter the base salary of the employee\n");
 scanf("%f",&bs);
   gs=gross_salary(bs);
  printf("gross salary is %.2f\n",gs);
  
return 0;
}
