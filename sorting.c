#include<stdio.h>
void ascending(int arr[],int n)
{
  int i,j,temp;
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if (arr[i]>arr[j])
      {
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;  
      }
    }
  }
   printf("Elements sorted in ascending order\n");
   for(i=0;i<n;i++)
   printf("%d\n",arr[i]);
}

int main()
  {
    int arr[50],i,n;

    printf("Enter number of element in array:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
     
    ascending(arr,n);
   }
