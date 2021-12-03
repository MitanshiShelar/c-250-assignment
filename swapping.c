#include<stdio.h>
void swap(int,int);
void swap(int a,int b)
 {
  int temp;
  temp = a;
  a = b;
  b = temp;
 // printf("values before swapping a=%d\nb=%d\n",a,b);
  printf("values after swapping a=%d\nb=%d\n",a,b); 
 }
int main()
{
 int a,b;
 printf("Enter two number:\n");
 scanf("%d%d",&a,&b);
// printf("values before swapping a=%d\nb=%d\n",a,b);
 swap(a,b);
 //printf("values after swapping a=%d\nb=%d\n",a,b); 
}
