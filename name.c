#include <stdio.h>
#include<stdlib.h>
int main()
{
    char *name;
    name=(char*)malloc(sizeof (char));
    printf("enter the name\n");
    scanf("");
    gets(name);
    printf("inputted name is : %s\n",name);
    free(name);
    return 0;
    
}