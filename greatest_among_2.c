#include<stdio.h>
void greatest_number(int,int);
void greatest_number(int x,int y)
{
  if(x>y)
    printf("%d is greatest\n",x);
     else
         printf("%d is greatest\n",y);
}
 int main()
 {
   int a,b;
   printf("Enter two number\n");
   scanf("%d%d",&a,&b);   
   greatest_number(a,b);
 }


