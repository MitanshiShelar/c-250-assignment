#include <stdio.h>
void copyarray(int arr1[],int n)
{
 int arr2[100],i;
   for(i=0; i<n; i++)
    {
      arr2[i] = arr1[i];
    }
    printf("\nThe elements stored in the first array are :\n");
    for(i=0; i<n; i++)
    {
      printf("% 4d",arr1[i]);
    }
    printf("\nThe elements copied into the second array are :\n");
    for(i=0; i<n; i++)
    {
      printf("% 4d",arr2[i]);
    }
     printf("\n");
}
int main()
{
 int arr1[100],n,i;
   printf("Enter the number of element:");
       scanf("%d",&n);
       printf("Enter %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	    printf("element - %d : ",i);
	    scanf("%d",&arr1[i]);
	    }
copyarray(arr1,n);
return 0;
}
