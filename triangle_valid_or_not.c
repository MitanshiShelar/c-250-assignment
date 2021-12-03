#include<stdio.h>
int valid_triangle(int,int,int);
int valid_triangle(int x,int y,int z)
 {
   int sum;
   sum=x+y+z;
  
  
    if(sum==180)
     printf("Triangle is valid");
    else
     printf("Triangle is not valid");
     return (sum);
 }
 
   int main()
   {
     int a1,a2,a3;
     printf("Enter three angles of triangle:\n");
     scanf("%d%d%d",&a1,&a2,&a3);
     valid_triangle(a1,a2,a3);   
   }
