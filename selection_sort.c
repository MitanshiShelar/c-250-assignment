#include<stdio.h>
void selection_sort(int a[],int);
void selection_sort(int a[],int n)
{
int i,j,temp;
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
     if(a[i]>a[j])
     {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     }
    }
  }
}
int main()
{
  int n,i;
  
  printf("Enter the limit\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter number\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  selection_sort(a,n);
   printf("Ascending order of given number is:");
    for(i=0;i<n;i++)
    printf("%d \n",a[i]);

}
