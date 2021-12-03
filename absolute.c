#include<stdio.h>
float absolute(int);
float absolute(int n)
{
 if(n<0)
 return -n;
 else
 return n;
}
int main()
{
 int num,result;
 printf("Enter the number:\n");
 scanf("%d",&num);
 
 result=absolute(num);
printf("absolute value of %d=%d\n",num,result);
return 0;
}
