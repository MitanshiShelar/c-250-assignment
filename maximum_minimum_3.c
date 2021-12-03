#include<stdio.h>
float minimum(float,float,float);
float maximum(float,float,float);
float minimum(float a,float b,float c)
{
 if(a<=b&&a<=c)
 return a;
 else if(b<=a&&b<=c)
 return b;
 else
 return c;
}
float maximum(float a,float b,float c)
{
  if(a>=b&&a>=c)
  return a;
  else if(b>=a&&b>=c)
  return b;
  else
  return c;
}
 int main()
{
 float n1,n2,n3;
 printf("Enter three number:\n");
 scanf("%f %f %f",&n1,&n2,&n3);
  
  minimum(n1,n2,n3);
  maximum(n1,n2,n3);
  
   printf("minimum number:%.2f\n",minimum(n1,n2,n3));
   printf("maximum number:%.2f\n",maximum(n1,n2,n3)); 
}
