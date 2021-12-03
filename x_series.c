#include<stdio.h>
void series(int);
void series(int n)
{
  int i=1,sum=0,x=9;
   while(i<=n)
   {
     sum=sum+x;
     if(i==n)
     printf("%d",x);
     else
     printf("%d+",x);
     x=x*10+9;
     i++;
   }
   printf("\nThe sum of series is %d\n",sum);
}
 void main()
 {
   int n;
   
   printf("Enter the limit :\n");
   scanf("%d",&n);
   
   series(n);
 
 }
