#include<stdio.h>
void add_matrix(a[],int n,b[])


int main()
{
int i,j,row,col;
  printf("Enter the number of rows:\n");
  scanf("%d",&row);
  
  printf("Enter the number of column:\n");
  scanf("%d",&col);
 int a1[row][col],a2[row][col],add[row][col];
  
   printf("Enter Matrix 1\n");
   for(i=0;i<row;i++)
   {  
     printf("Enter %d element of %d row\n",col,(i+1));
     for(j=0;j<col;j++)
     {
     scanf("%d",&a1[i][j]);
     }
   }

   printf("Enter Matrix 2\n");
   for(i=0;i<row;i++)
   { 
      printf("Enter %d element of %d row\n",col,(i+1));
     for(j=0;j<col;j++)
     {
     scanf("%d",&a2[i][j]);
     }
   }
      for(i=0;i<row;i++)
      {
        for(j=0;j<col;j++)
       {
         add[i][j]=a1[i][j]+a2[i][j];
       }
      }
        printf ("addition of above matrix is:\n");
      for(i=0;i<row;i++)
      {
       for(j=0;j<col;j++)
       {
         printf("%d\t",add[i][j]);
       }
              printf("\n");
      }
       


return 0;
}
