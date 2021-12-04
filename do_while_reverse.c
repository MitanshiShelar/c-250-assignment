#include<stdio.h>
void reverse(int num);
void reverse(int num)
{
 int rev,sum=0;
 do
  {
     rev=num%10;
     sum=sum*10+rev;
     num=num/10;
     }
     while(num!=0);
    printf("%d",sum);
    
}
int main()
{
  int num;
  printf("Enter the number\n");
  scanf("%d",&num);
  reverse(num);
}
