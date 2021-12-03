#include<stdio.h>
void week_day(int);
void week_day(int n)
{
 if(n==1)
 printf("Monday\n");
 else if(n==2)
 printf("Tuesday\n");
 else if(n==3) 
 printf("Wednesday\n");
 else if(n==4)  
 printf("Thursday\n");
 else if(n==5) 
 printf("Friday\n");
 else if(n==6) 
 printf("Saturday\n");
 else if(n==7) 
 printf("Sunday\n");
 else
 printf("Invalid output\n");     
}
int main()
{
 int n;
 printf("Enter Day Number(1-7)\n");
 scanf("%d",&n);
  week_day(n);
}
