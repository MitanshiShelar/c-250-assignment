#include<stdio.h>
void find_fact(int,int*);
void find_fact(int n,int*f)
{
  int i;
  *f=1;
  for(i=1;i<=n;i++)
  *f=*f*i;
}
int main()
{
  int fact,num;
  printf("Enter the number:\n");
  scanf("%d",&num);
  
  find_fact(num,&fact);
  printf("The factorial of %d is:%d\n",num,fact);
  return 0;
}

