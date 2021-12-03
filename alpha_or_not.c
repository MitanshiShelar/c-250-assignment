#include<stdio.h>
char alpha_or_not(char);
char alpha_or_not(char x)
 { 
   if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
     printf("%c is an alphabet",x);
   else
     printf("%c is not an alphabet",x);
      return(x);
 }
  int main()
   {
     char ch;
     printf("Enter the character:\n");
     scanf("%c",&ch);
       
       alpha_or_not(ch);
   }
