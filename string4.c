#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void con_cat(char a[],char b[])
{
    int i=0,j=0;
    while(a[i]!='\0')
    {
        i++;
    }
    while(b[j]!='\0')
    {
        a[i+j]=b[j];
        j++;
        a[i+j]='\0';
    }
    puts(a);
   
}
void main()
{
    char a[30];
    char b[20];
    printf("Enter the first string\n");
    scanf("%s",a);
    printf("Enter the second string\n");
    scanf("%s",b);
    con_cat(a,b);
}
