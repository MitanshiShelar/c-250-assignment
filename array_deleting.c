#include<stdio.h>
void delete(int arr[],int pos,int val,int n)
  {
    int i;
    { 
      if(pos>=n+1)
       printf("Deletion not possible");
        else 
        {
          for(i=pos-1;i<n-1;i++)
           arr[i]=arr[i+1];
           n=n-1;
           printf("Updated array:\n");
 
           for(i=0;i<=n-1;i++)
            printf("%d\n",arr[i]);
        } 
    }
}
int main()
   {
     int arr[50],i,n,val,pos;
     printf("Enter number of element in array:\n");
     scanf("%d",&n);
      
     printf("Enter %d elements:\n",n);
     for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
 
     printf("Enter position to delete your element:\n");
     scanf("%d",&pos);
     printf("Enter value:\n");
     scanf("%d",&val);
    
    delete(arr,pos,val,n);
    return 0;
   }
