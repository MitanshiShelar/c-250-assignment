#include<stdio.h>
void print(int *a,int *b,int n)
{
  for(int i=0;i<n;i++)
   { 
      (a+i)=(a+i)+*(b+i);
      (b+i)=(a+i)-*(b+i);
      (a+i)=(a+i)-*(b+i);
   }
   printf("First array\n");
    for(int i=0;i<n;i++)
        printf("%d   ",*(a+i));
    printf("Second array\n");
    for(int i=0;i<n;i++)
        printf("%d   ",*(b+i));
}

int main()
{
   int n;
   printf("Enter limit\n");
   scanf("%d",&n);
   int a[n],b[n];
   printf("Enter %d element for first array\n",n);
   for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    printf("Enter %d element for second array\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);

    print(a,b,n);
    
}
