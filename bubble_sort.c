#include<stdio.h>
void bubble_sort(int a[],int);
void bubble_sort(int a[],int n)
{
int i,j,temp;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-1;j++)
    {
     if(a[j]>a[j+1])
     {
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
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
  
  bubble_sort(a,n);
   printf("Ascending order of given number is:\n");
    for(i=0;i<n;i++)
    printf("%d \n",a[i]);

}
