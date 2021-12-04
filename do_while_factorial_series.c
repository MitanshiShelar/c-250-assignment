#include<stdio.h>
void series( int);
void series(int num)
{
   int i=1,fact=1;
   float sum=0;
  if (num>0)
    {
     do
       {
        fact=fact*i;
        sum=sum+(i/fact);
        i++;
       }
     while (i<=num);
         printf("The sum is %f\n",sum);
    }
    else
         printf ("Enter no.greater than 0\n");
}
int main()
{
int num;
   printf("To print series: 1/1!+2/2!+3/3!+......\n");
   printf("Enter the number:\n");
   scanf("%d",&num);
}
