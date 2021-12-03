#include<stdio.h>

int main()
{
  char fname[20],mname[20],lname[20];
  printf("Enter the First name Middle name Last name\n");
  scanf("%s%s%s",fname,mname,lname);
  printf("abbrivate name:");
  printf("%c.%c.%s\n",fname[0],mname[0],lname);
  return 0;
}

