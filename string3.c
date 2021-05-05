#include<stdio.h>
#include<string.h>

int compare(char str1[],char str2[])
{
    int i=0,flag=0;
    while(str1[i]!='\0' && str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
            break;
        i++;
    }
    if(str1[i]=='\0' && str2[i]=='\0')
        flag=1;
    else
        flag=0;
    return flag;
}

void main()
{
    char str1[20],str2[20];int n;
    printf("enter the first string\n");
    scanf("%s",str1);
    printf("enter the second string\n");
    scanf("%s",str2);
    n=compare(str1,str2);
    if(n==1)
        printf("strings are equal\n");
    else
        printf("strings are not equal\n");
}