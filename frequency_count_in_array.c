#include <stdio.h>
void frequency_count(int a[],int n)
{
 int b[100],i,j,c=0 ;
   for(i=0; i<n; i++)
   {
     c=1;
     if(a[i]!=-1)
     {
       for(j=i+1;j<n;j++)
       {
         if(a[i]==a[j])
         {
           c++;
           a[j]=-1;
          }
	 }
    b[i]=c;
     }
   }
  for(i=0; i<n; i++)
    {
     if(a[i]!=-1)
     {
       printf("no of %d is %d \n",a[i],b[i]);
	}   
    }    
} 
int main()
{
 int a[100],n,i;
   printf("Enter size of the array : ");
   scanf("%d",&n);
   printf("Enter elements in array : ");
    for(i=0; i<n; i++) 
     {
       scanf("%d",&a[i]);
     }
frequency_count(a,n);
}
