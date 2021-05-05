#include <stdio.h>
#include <stdlib.h>
#define ssize 3

void push(int a[],int *top,int ele)
{
    if(*top==ssize-1)
    {
        printf("\nstack overflow\n");
        return;
    }

    (*top)++;
    a[*top]=ele;
}
void pop(int a[],int *top)
{
    int ele;
    if(*top==-1)
    {
        printf("\nstack Under flow\n");
        return;
    }
    ele= a[*top];
    (*top)--;
    printf("\nThe element deleted%d\t",ele);

}
void display(int a[],int top)
{
    int i;
    if(top==-1)
    {
        printf("\nstack Under flow\n");
        return;
    }
    printf("\nStack contents are\n");
    for(i=0; i<=top; i++)
    {
        printf("%d",a[i]);
    }

}

int main()
{
    int a[ssize];
    int top=-1;

    int ele;
    int choice;

    for(;;)
    {
        printf("\npress \n 1:Push\n2:pop\n3:display4:exit\n");
        printf("\n Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\nenter the ele to be inserted\n");
            scanf("%d",&ele);
            push(a,&top,ele);
            break;

        case 2:
            pop(a,&top);
            break;
        case 3:
            display(a,top);
            break;
        case 4:
            exit(0);

        }
    }
    return 0;
}
