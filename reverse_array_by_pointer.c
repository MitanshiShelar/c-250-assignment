#include<stdio.h>
void print(int *a,int n)
{
    int temp;
   for(int i=0;i<n/2;i++)
   { 
     temp=*(a+i);
     (a+i)=(a+(n-i-1));
     *(a+(n-i-1))=temp;
   }
   printf("Reverse array\n");
    for(int i=0;i<n;i++)
        printf("%d   ",*(a+i));
}

int main()
{
   int n;
   printf("Enter the limit\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d element for array\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    print(a,n);
    
}
