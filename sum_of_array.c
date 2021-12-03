#include<stdio.h>
void sum(int a[],int n)
{
 int i,sum=0;
  for(i=0;i<n;i++)
   {    
       sum= sum+a[i];
   }
   printf("sum of array is:%d",sum);
}   
int main()
{
 int i,given_sum,n;
  printf("Enter the size of array\n");
  scanf("%d",&n);
   int a[n];
  printf("Enter %d elements one by one\n",n);
  for(i=0;i<n;i++)
  {
    printf("Enter %d elements:",i+1);
    scanf("%d",&a[i]); 
  }
   sum(a,n);
return 0;
}
