#include<stdio.h>
void checkprime(int);
void checkprime(int n)
 {
   int i;
    for(i=2;i<=n/2;i++)
    {
      if(n%i!=0)
        continue;
      else
        return 1;  
    }
      return 0;
 }
 int main()
 {
   int n,result=0;
    printf("Enter the limit\n");
    scanf("%d",&n);
      result=checkprime(n);
      if(result==0)
       printf("\n%d is a prime number",n);
       else
       printf("%d ia not a prime number",n);
 }
