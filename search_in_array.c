#include<stdio.h>

void search(int a[],int n,int element)
{
    int flag=0;
   for(int i=0;i<n;i++)
   { 
        if(a[i]==element)
        {
            printf("%d Element found\n",a[i]);
            flag=1;
            break;
        }
   }
   if(flag==0)
        printf(" Element not found\n");
}

int main()
{
    int n,element;
    printf("enter limit\n");
    scanf("%d",&n);
    int a[n];
    printf("enter %d element of array\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("enter a element\n");
    scanf("%d",&element);

    search(a,n,element);
    
}
