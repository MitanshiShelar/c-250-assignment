#include<stdio.h>
void armstrong(int);
void armstrong(int n)
{
 int r=0,temp,sum=0;
 temp = n;
 while(n!=0)
 {
  r=n%10;
  sum=sum+r*r*r;
  n=n/10;
 }
  if(temp==sum)
   printf("number is armstrong");
   else
   printf("number is not armstrong");
}
 int main()
 {
   int n;
   printf("Enter the number\n");
   scanf("%d",&n);
 
   armstrong(n);
   return 0;
 }
