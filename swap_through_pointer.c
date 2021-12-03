#include<stdio.h>
void swap(int*,int*);
void swap(int *p,int *q)
 {
  int temp;
  temp=*p;
  *p=*q;
  *q=temp;
 }
int main()
{
 int a,b;
 printf("Enter two number:\n");
 scanf("%d%d",&a,&b);
 printf("values before swapping a=%d\nb=%d\n",a,b);
 swap(&a,&b);
 printf("values after swapping a=%d\nb=%d\n",a,b); 
}
