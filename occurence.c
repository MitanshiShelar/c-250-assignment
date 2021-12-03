#include<stdio.h>
void occurence(int arr[],int n,int num)
{
  int i,count=0;
  for(i=0;i<n;i++)
  {
    if (arr[i]==num)
     count++;
  }
   printf("occurence of %d is :%d\n",num,count);
}

int main()
  {
    int arr[50],i,n,num;

    printf("Enter number of element in array:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter number to find occurence:\n");
    scanf("%d",&num);
     
    occurence(arr,n,num);
   }
