#include <stdio.h>
void unique(int a[],int n)
{
 int count=0,i,j,k;
    printf("\nThe unique elements found in the array are: \n");
    for(i=0;i<n;i++)
    {
     count=0;
        for(j=0,k=n;j<k+1; j++)
        {
         /*Increment the counter when the seaarch value is duplicate.*/
            if (i!=j)
            {
		  if(a[i]==a[j])
              {
                count++;
               }
            }
        }
       if(count==0)
        {
          printf("%d",a[i]);
        }
    }
       printf("\n");
}
int main()
{
  int a[100],n,i;
  printf("\nPrint all unique elements of an array:\n");	
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  printf("Enter %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	       printf("Element - %d : ",i);
	       scanf("%d",&a[i]);
	      }
  unique(a,n);
  return 0;
}
