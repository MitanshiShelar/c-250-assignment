#include<stdio.h>
int cube(int);
int cube(int r)
{
  int value;
  value=(r*r*r);
  return (value);
}
 int main()
{
  int number,a;
  printf("Enter the number\n");
  scanf("%d",&number);
  
  a=cube(number);
  printf("cube of number is:%d",a);  
  return 0;
 }
