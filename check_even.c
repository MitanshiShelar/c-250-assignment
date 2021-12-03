#include<stdio.h>
int even_odd(int);
int even_odd(int x)
{
   if(x%2==0)
    printf("The number is even\n");
   else
    printf("The number is odd\n");
}
int main()
{
  int n;
  printf("Enter the number:\n");
  scanf("%d",&n);
  even_odd(n);
}
