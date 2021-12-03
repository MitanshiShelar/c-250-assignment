#include<stdio.h>
void tri(int,int,int);
void tri(int A,int B,int C)
{
 if (A==B&& B==C)
  printf("Triangle is Equilateral triangle:\n");
   else if (A==B||A==C||B==C)
     printf("Triangle is Isosceles:\n");
      else
       printf("Triangle is scalene triangle:\n");
}
int main()
{
 int A,B,C;
 printf("Enter three sides of triangle:\n");
 scanf("%d%d%d",&A,&B,&C);
 
  tri(A,B,C);
 }

