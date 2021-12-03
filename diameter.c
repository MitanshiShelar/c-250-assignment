#include<stdio.h>
int diameter(int);
int diameter(int r)
{
  int value;
  value=(2*r);
  return (value);
}
 int main()
{
  int number,a;
  printf("Enter the radius\n");
  scanf("%d",&number);
  
  a=diameter(number);
  printf("Diameter of is:%d",a);  
  return 0;
 }
