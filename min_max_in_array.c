#include<stdio.h>
void min_max(int,int[]);
void min_max(int n,int arr[])
{
 int i,min=0,max=0;
  min=arr[0];
  max=arr[0];
  for(i=0;i<n;i++)
  {
   if(arr[i]>max)
    {
     max=arr[i];
    }
   if(arr[i]<min)
    {
     min=arr[i];
    }
  }
  printf("The maximum number is %d\n",max);
  printf("The minimum number is %d\n",min);  
}


int main()
{
 int arr[50],i,n;
 
  printf("Enter number of element in array:\n");
  scanf("%d",&n);
  printf("Enter %d elements:\n",n);
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);

   min_max(n,arr);
}
