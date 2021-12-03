#include<stdio.h>
char upper_lower(char);
char upper_lower(char ch)
 { 
   if((ch>='A'&&ch<='Z')||(ch>=65&&ch<=90))
     printf("%c is in upper case\n",ch);
   else if((ch>='a'&&ch<='z')||(ch>=97&&ch<=122))
     printf("%c is in lower case\n",ch);
      return(ch);
 }
  int main()
   {
     char ch;
     printf("Enter the character:\n");
     scanf("%c",&ch);
       
       upper_lower(ch);
   }
