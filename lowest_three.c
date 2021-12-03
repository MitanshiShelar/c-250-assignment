#include<stdio.h>
void lowest_number(int,int,int);
void lowest_number(int x,int y,int z)
{
  if(x<y&&x<z)
    printf("%d is lowest\n",x);
     else if(y<z)
      printf("%d is lowest\n",y);
        else
         printf("%d is lowest\n",z);
}
 int main()
 {
   int a,b,c;
   printf("Enter three number\n");
   scanf("%d%d%d",&a,&b,&c);
   
   lowest_number(a,b,c);
 }


