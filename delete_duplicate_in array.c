#include <stdio.h>  
void dublicate(char arr[])
{   
 int i,j,k,limit;
     printf("The number of elements in an array: ");      
     scanf("%d",&limit);      
     printf("\nEnter %d elements of an array: \n",size);      
        for(i=0;i<limit;i++) 
        {
         scanf("%d",&arr[i]);          
        }    
        for(i=0;i<limit;i++)  
          { 
            for(j=i+1;j<limit;j++)  
              { 
                if(arr[i]==arr[j])  
                  {  
                    for(k=j;k<limit-1;k++)  
                     {  
                       arr[k] = arr [k + 1];
                      }  
                        limit--;
                        j--;
                   }  
               }  
           }  
            printf("\nArray elements after deletion of the duplicate elements:");
               for(i=0;i<limit;i++)  
                {    
                 printf (" %d \t", arr[i]);
                }  
}  
int main() {
    char arr[10];
    dublicate(arr);
    return 0;
}
