#include<stdio.h>
#include<string.h>
void check(char a[])
{
    int j,i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65&&a[i]<=90)
            a[i]=a[i]+32;
        else    
            a[i]=a[i]-32;
    }
    printf("%s\n",a);
}

int main()
{
    char a[50];
    printf("enter a string\n");
    fgets(a,50,stdin);
    
    check(a);
}
