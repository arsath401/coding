#include <stdio.h>
#include <stdlib.h>

struct stack
{
	int key;
};
typedef struct stack element; 

element* stackFull(element *stack,int *capacity)
{
	 printf("Wait stack is getting doubled\n");
	 stack=(element*)realloc(stack,2*(*capacity)*sizeof(element));
	 (*capacity)=(*capacity)*2; 
	 return stack;


}
element* push(element *stack,int *top,int item,int *capcity)
{
	if(*top>=(*capcity)-1) 
	{
	   stack=stackFull(stack,capcity);
	}
	(*top)++;
	(stack+*top)->key=item;
	return stack;

}
int pop(element *stack,int *top)
{
	int item_del;
	if(*top==-1)
	{
		printf("stack underflow\n");
		return -1;
	}
	item_del=((stack+*top))->key;
	(*top)--;
	return item_del;
}
void display(element *stack,int top)
{
	int i;
	if(top==-1)
	{
		printf("stack underflow\n");
		return ;
	}
	for(i=top;i>=0;i--)
	{
		printf("\t%d",(stack+i)->key);
	}

}
void main()
{
	int top=-1;
	int capacity=1; 
	int item; 
	int choice;
	int item_deleted;
	element *stack;



	stack=(element*)malloc(sizeof(element)*capacity);
	if(stack==NULL)
	{
	    printf(" Moemory not suff...\n");
	    exit(0);
	}
	for(;;)
	{
		printf("1:push 2:pop 3:display 4:exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{

		       case 1: printf("Enter the element to be inserted\n");
			       scanf("%d",&item);
			       stack=push(stack,&top,item,&capacity);
			       break;

		       case 2: item_deleted=pop(stack,&top);
			       if(item_deleted!=-1)
			       {
					printf("Deleted item %d",item_deleted);
			       }
			       break;


		       case 3:display(stack,top);
			      break;

		       case 4:exit(0);

		}

	}


}
