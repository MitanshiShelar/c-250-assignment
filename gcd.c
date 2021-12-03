#include<stdio.h>
void gcd(int,int);
void gcd(int x,int y)
{
  int i,gcd;
 for(i=1;i<=x&&i<=y;++i)
 if(x%i==0&&y%i==0)
  gcd=i;
  printf("GCD is %d",gcd);
}
int main()
{
  int a,b;
  
  printf("Enter two number\n");
  scanf("%d%d",&a,&b);
   
   gcd(a,b);
}
