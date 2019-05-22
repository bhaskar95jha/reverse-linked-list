#include<stdio.h>
#include<stdlib.h>
#include"implement.h"
struct node *createlist(struct node *start)
{
	int i,n,item;
	printf("enter the number of nodes\n");
	scanf("%d",&n);
	start=NULL;
	if(n==0)
		return start;
	else
	{
		printf("enter the item to be inserted");
		scanf("%d",&item);
		start=addatbeg(start,item);
		for(i=2;i<=n;i++)
		{
			printf("enter the item to be inserted");
			scanf("%d",&item);
			start=addatend(start,item);
		}
		return start;
	}
}
struct node *reverse(struct node *start)
{
	struct node *prev,*next,*ptr;
	prev=NULL;
	ptr=start;
	while(ptr!=NULL)
	{
		next=ptr->link;
		ptr->link=prev;
		prev=ptr;
		ptr=next;
	}
	start=prev;
	return start;
}
void main()
{
	struct node *start;
	start=NULL;
	start=createlist(start);
	printf("Linked list is \n");
	display(start);
	start=reverse(start);
	printf("Reverse of this list is\n");
	display(start);
}
