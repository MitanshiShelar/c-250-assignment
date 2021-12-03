#include<stdio.h>
void cal_power(int,int);
void cal_power(int b,int e)
{
  int power=1;
  while(e!=0)
  {
    power=power*b;
     e--;
  }
    printf("The power of the no = %d",power);
}
 int main()
 {
   int b,e;
   printf("Enter the number:\n");
   scanf("%d",&b);
   
   printf("Enter the power:\n");
   scanf("%d",&e);
   
   cal_power(b,e);
 }
