#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char a[30];
    int i,count=1;
    printf("Enter the sentence\n");
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==' ')
            count++;
    }
    printf("Word count is %d\n",count);
}