#include<stdio.h>
void insert(int arr[],int pos,int val,int n)
  {
    int i;
    for(i=n-1;i>=pos-1;i--)
        arr[i+1] = arr[i];
        arr[pos-1] = val;

    printf("Updated array:\n");

    for(i=0;i<=n;i++)
        printf("%d\n",arr[i]);
   }
int main()
  {
    int arr[50],i,n,val,pos;

    printf("Enter number of element in array:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter position to insert your element:\n");
    scanf("%d",&pos);
    printf("Enter value:\n");
    scanf("%d",&val);
    
    insert(arr,pos,val,n);
    return 0;
  }
