#include<stdio.h>
void function(int);
void function(int score)
{
	switch( score / 10 )
   {

   case 10:
   case 9:
     printf("Grade: A");
     break;

   case 8:
     printf("Grade: B");
     break;

   case 7:
     printf("Grade: C");
     break;

   case 6:
     printf("Grade: D");
     break;

   case 5:
     printf("Grade: E");
     break;

   default:
     printf("Grade: F");
     break;

   }

}
int main()
{
   int score;

   printf("Enter score( 0-100 ): ");
   scanf("%d", &score);
   function(score);
   
   return 0;
}
