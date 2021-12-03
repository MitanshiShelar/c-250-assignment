#include<stdio.h>
void asterisk(char a[])
{
  int i;
 for(i=1;a[i]!='\0';i++)
 {
  printf("*");
 }
}
int main()
{
 char a[100];
 printf("Enter the string\n");
  fgets(a,100,stdin);
 
  asterisk(a);
  return 0;
}
