#include <stdio.h>
#include <stdlib.h>

#define Q_size 5
void insert(int q[],int item,int *r)
{
	if(*r==Q_size-1)
	{
		printf("Q full\n");
		return;
	}
	*r=*r+1;
	q[*r]=item;
}
int delet(int q[],int *f,int *r)
{
	if(*f>*r)
	{
		return -1;
	}
	return q[(*f)++];
}
void display(int q[],int f,int r)
{
	int i;
	if(f>r)
	{
		printf("Q empty\n");
		return;
	}
	for(i=f;i<=r;i++)
	{
		printf("%d\t",q[i]);
	}
}




void main()
{
	int f=0; 
	int r=-1; 
	int choice; 
	int q[10]; 
	int item;

	for(;;)
	{
		printf("1:insert 2:delete 3: dipslay 4:exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter the element to be inser\n");
				scanf("%d",&item);
				insert(q,item,&r);
				break;
			case 2: item=delet(q,&f,&r);
				if(item==-1)
					printf("q empty\n");
				else
					printf("item_deleted=%d",item);
				break;
			case 3: display(q,f,r);
				break;
			case 4:exit(0);

		}
	}


}