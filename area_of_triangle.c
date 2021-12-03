#include<stdio.h>
float area(float,float);
float area(float base,float height)
{
   float are;
   are=(1/2.f)*base*height;
   return(are);
}
int main()
{ 
  float a,b,result;
 printf("Enter the base\n");
 scanf("%f",&a);
  printf("Enter the height\n");
 scanf("%f",&b);
  result=area(a,b);
  printf("area of triangle is %.2f\n",result);
  
return 0;
}
