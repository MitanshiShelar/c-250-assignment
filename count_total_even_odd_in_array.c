#include<stdio.h>
void even_odd(int a[],int n)
{
 int i,even=0,odd=0;
     for(i=0; i<n; i++)
       {
         if(a[i]%2==0)
         even++;
         else
         odd++;
       }
  printf("Even numbers in array are: %d\n",even);
  printf("Odd numbers in array are: %d\n",odd);
  return 0;
}
int main()
{
  int a[10],n,i;
  printf("Enter size of the array : ");
  scanf("%d",&n);
 
  printf("Enter elements in array : ");
   for(i=0; i<n; i++)
    {
      scanf("%d",&a[i]);
    }
  even_odd(a,n);
 return 0;
}
