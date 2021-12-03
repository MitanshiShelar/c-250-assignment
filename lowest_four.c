#include<stdio.h>
void lowest_number(int,int,int,int);
void lowest_number(int x,int y,int z,int a)
{
  if(x<y&&x<z&&x<a)
    printf("%d is lowest\n",x);
     else if(y<z&&y<a)
      printf("%d is lowest\n",y);
        else if(z<a)
         printf("%d is lowest\n",z);
          else
           printf("%d is lowest\n",a);
}
 int main()
 {
   int a,b,c,d;
   printf("Enter four number\n");
   scanf("%d%d%d%d",&a,&b,&c,&d);
   
   lowest_number(a,b,c,d);
 }


