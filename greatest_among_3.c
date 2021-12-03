#include<stdio.h>
void greatest_number(int,int,int);
void greatest_number(int x,int y,int z)
{
  if(x>y&&x>z)
    printf("%d is greatest\n",x);
     else if(y>z)
      printf("%d is greatest\n",y);
        else
         printf("%d is greatest\n",z);
}
 int main()
 {
   int a,b,c;
   printf("Enter three number\n");
   scanf("%d%d%d",&a,&b,&c);
   
   greatest_number(a,b,c);
 }


