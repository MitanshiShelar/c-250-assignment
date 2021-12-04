#include<stdio.h>
void main()
{
 int a[10]={10,20,30,40,50,60,70,80,90,100};
 int i,*p;
 p=a;
 for(i=0;i<10;i++)
 {
  printf("Values of a[%d]:%d\n",i,*p);
  p++;
 }


}
