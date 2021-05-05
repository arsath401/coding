#include<stdio.h>
struct stall{
    int bookid;
    char title[10];
    char author[10];
    int price;
}a;
void main()
{
    
    printf("enter the book id, title, author and price");
    scanf("%d%s%s%d",&a.bookid,a.title,a.author,&a.price);
    printf("book is %s \n its id is %d, its author is %s, its price is %d ",a.title,a.bookid, a.author, a.price);
    
}