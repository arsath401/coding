#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 3
struct bookstall
{
    int pages,price;
    char book_title[20];
    char author[20];
    
};

void insert(struct bookstall *s)
{
    int i=0;
    for(i=0;i<SIZE;i++)
    {
            printf("Book %d :",i+1);
            printf("\nenter the pages, price,book_title,author \n");
            scanf("%d",&s[i].pages);
            scanf("%d",&s[i].price);
            scanf("%s",s[i].book_title);
            scanf("%s",s[i].author);
    }
}
void display(struct bookstall *z)
{
    int i;
    for(i=0;i<SIZE;i++)
    {
         printf("Book %d :",i+1);
        printf("\nthe book details are:\npages :%d\nbook_title :%s\nauthor :%s\nprice :%d\n",z[i].pages,z[i].book_title,z[i].author,z[i].price);
    }
}
void update(struct bookstall *t)
{
    char name[20];
    int i,n;
    printf("enter book name whose price needs to be changed\n");
    scanf("%s",name);
    for(i=0;i<SIZE;i++)
    {
        n=strcmp(t[i].book_title,name);
        if(n==0)
        {
            printf("enter the amount \n");
            scanf("%d",&t[i].price);
            printf("the amount is updated\n");
            display(t);
        }
    }
}
int main()
{
    struct bookstall a[SIZE];
    insert(a);
    display(a);
    update(a);
    return 0;
}