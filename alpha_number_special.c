#include<stdio.h>
void alpha_number_or_special(char);
void alpha_number_or_special(char x)
{
  if((x>=97&&x<=122)||(x>=65&&x<=90))
    printf("%c is an alphabet",x);
      else if(x>=0&&x<=9)
        printf("it is a number");
         else
          printf("%c is a special symbol",x);
}

int main()
{
  char ch;
  printf("Enter the character:\n");
  scanf("%c",&ch);
    alpha_number_or_special(ch);
}
