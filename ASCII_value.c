#include<stdio.h>
char ASCII(char x)
{
  printf("ASCII value of %c is %d ",x,x);
}
int main()
{
  char ch;
  printf("Enter the character\n");
  scanf("%c",&ch);
  ASCII(ch);
  return 0;
}
