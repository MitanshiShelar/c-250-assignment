#include<stdio.h>
void alpha_number_or_special(char);
void alpha_number_or_special(char x)
{
  if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
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
