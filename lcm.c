#include<stdio.h>
void lcm(int,int);
void lcm(int x,int y)
{
  int i;
 for(i=1;i<=x*y;i++)
 if(i%x==0&&i%y)
  break;
  printf("LCM is %d",i);
}
int main()
{
  int a,b;
  
  printf("Enter two number\n");
  scanf("%d%d",&a,&b);
   
   lcm(a,b);
}
