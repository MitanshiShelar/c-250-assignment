#include<stdio.h>
void reverse(int,int[]);
void reverse(int n,int arr[])
{
  int i,j,temp;
  for(i=0,j=n-1;i<j;i++,j--)
  {
   temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
  }
   printf("result is:\n");
   
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
}
 int main()
 {
  int i,n,arr[50];
 
   printf("Enter number of element in array:\n");
   scanf("%d",&n);
   printf("Enter %d elements:\n",n);
   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
   
   reverse(n,arr);
 }
