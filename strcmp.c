#include<stdio.h>
#include<string.h>
void check(char a[],char b[])
{
    int i,f=0;

    for(i=0;a[i]!='\0';i++)
        if(a[i]>=65&&a[i]<=90)
            a[i]=a[i]+32;

    for(i=0;b[i]!='\0';i++)
        if(b[i]>=65&&b[i]<=90)
            b[i]=b[i]+32;

    for(i=0;a[i]!='\0';i++)
       if(a[i]!=b[i])
       {
            f=1;
            break;
       }
    if(f)
        printf("both are not same\n");
    else    
        printf("both same\n");
}

int main()
{
    char a[50],b[50];
    printf("enter 1st string\n");
    fgets(a,50,stdin);

    printf("enter 2nd string\n");
    fgets(b,50,stdin);

    check(a,b);
}
