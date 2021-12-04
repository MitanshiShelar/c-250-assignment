#include <stdio.h>
void descending(int a[],int n)
  {
    int i,j,temp;	     
    for(i=0;i<n;i++)
     {
      for(j=i+1;j<n;j++) 
            {
              if(a[i]<a[j])
                {
                   temp=a[i];
                   a[i]=a[j];
                   a[j]=temp;
                }
            }
      }
        printf("Array in decending order\n");
        for(i=0;i<n;i++)
       {
         printf("%d\n",a[i]);
       }
   }
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
 int a[10],n,i;
 printf("Enter Number of terms\n");
 scanf("%d",&n);
 printf("Enter the term one by one\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    decending(a,n);
    ascending(arr,n);
    return 0;
}
