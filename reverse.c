#include<stdio.h>
void reverse(int);
void reverse(int x)
{
  int sum=0,rev;
  while(x!=0)
  {
    rev=x%10;
    sum=sum*10+rev;
    x=x/10;  
  }
  printf("reverse of number is : %d\n",sum);
}
 void main()
 {
   int n;
   printf("Enter the number:\n");
   scanf("%d",&n);
   
    reverse(n);
 
 }
