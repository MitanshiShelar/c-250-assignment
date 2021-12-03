#include<stdio.h>
void palindrome(int);
void palindrome(int n)
{
 int rev=0,temp,sum=0;
 temp = n;
 while(n!=0)
 {
  rev=n%10;
  sum=sum*10+rev;
  n=n/10;
 }
  if(temp==sum)
   printf("number is palindrome");
   else
   printf("number is not palindrome");
}
 int main()
 {
   int n;
   printf("Enter the number");
   scanf("%d",&n);
 
   palindrome(n);
   return 0;
 }
