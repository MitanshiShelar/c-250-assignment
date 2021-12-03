#include<stdio.h>
void sum_of_number(int);
void sum_of_number(int n)
{ 
  int i=1,sum=0;
  if(n>0)
  {
    while(i<=n)
    {
     printf("%d\n",i);
     sum=sum+i;
     i++;
    }
    printf("sum=%d\n",sum);
  }
}
int main()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  
  sum_of_number(n);
}
