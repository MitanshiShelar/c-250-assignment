#include<stdio.h>
void insertion_sort(int a[],int);
void insertion_sort(int a[],int n)
{
int i,j,temp;
  for(i=0;i<n;i++)
  {
    j=i;
    while((a[j]<a[j-1])&&j>0)
     {
       temp=a[j];
       a[j]=a[j-1];
       a[j-1]=temp;
       j--;
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
  
  insertion_sort(a,n);
   printf("Ascending order of given number is:\n");
    for(i=0;i<n;i++)
    printf("%d \n",a[i]);

}
