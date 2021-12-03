#include<stdio.h>
void days(int);
void days(int n)
{
 if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
  printf("31 days\n");
   else if(n==4||n==6||n==9||n==11)
    printf("30 days\n");
     else if(n==2) 
      printf("28 days\n");
      else
      printf("Invalid\n");     
}
int main()
{
 int n;
 printf("Enter Month Number(1-12)\n");
 scanf("%d",&n);
  days(n);
}
