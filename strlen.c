#include<stdio.h>
#include<string.h>
int check(char a[])
{
    int i;
    for(i=0;a[i]!='\0';i++);
    return i;
}

int main()
{
    char a[50];
    fgets(a,50,stdin);
    int i;
    i=check(a);
    printf("length is %d\n",i);
}
