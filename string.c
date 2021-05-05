#include<stdio.h>
#include<stdlib.h>

void accept(char *str)
{
    printf("Enter the string\n");
    scanf("%s",str);
}
void print(char *str)
{
    printf("The string is %s",str);
}
void main()
{
    char *str;
    str=(char*)malloc(sizeof(char));
    accept(str);
    print(str);
    free(str);
}
