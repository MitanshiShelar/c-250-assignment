#include<stdio.h>
float minimum(float,float);
float maximum(float,float);
float minimum(float a,float b)
{
 if(a<=b)
 return a;
 else
 return b;
}
float maximum(float a,float b)
{
  if(a>=b)
  return a;
  else
  return b;
}
 int main()
{
 float n1,n2;
 printf("Enter two number:\n");
 scanf("%f %f",&n1,&n2);
  
   printf("minimum number:%.2f\n",minimum(n1,n2));
   printf("maximum number:%.2f\n",maximum(n1,n2)); 
}
