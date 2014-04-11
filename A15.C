#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
    int item;
    struct node *next;
}node;
 void ins(node **head,int a,node **tail);
 void del(node **head,int a);
 void trav(node *head);
 node *sear(node *head,int item);
 void main()
 {
    node *head=NULL,*tail=NULL;
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		printf("Enter Number %d ",i);
		scanf("%d",&j);
		ins(&head,j,&tail);
	}
	printf("Enter num you want to delete\n");
	scanf("%d",&k);
	del(&head,k);
	trav(head);
	getch();
 }
void ins(node **head,int a,node **tail)
 {
	node *ptr;
	ptr=(node *)malloc(sizeof(node));
	ptr->item=a;
	if(*head==NULL)
	{
		ptr->next=*head;
		*head=ptr;
		*tail=ptr;
	}
	else
	{
		(*tail)->next=ptr;
		ptr->next=NULL;
		*tail=ptr;
	}
 }
 void trav(node *head)
  {
	node *ptr;
	ptr=(node *)malloc(sizeof(node));
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->item);
		ptr=ptr->next;
	}
  }
 node *search(node *head,int item)
  { node *ptr;
    ptr=(node *)malloc(sizeof(node));
    ptr=head;
	if(head==NULL)
		return NULL;
	else if(head->item==item)
	{
		return head;
	}
	else
	{
		while(ptr->next!=NULL)
		{
			if(ptr->next->item==item)
				return ptr;
			else
				ptr=ptr->next;
		}
		return NULL;
	}
 }
 void del(node **head,int item)
  {
	node *ptr,*loc;
	loc=search(*head,item);
	if(loc==NULL)
		printf("Not Found\n");
	else if(loc==*head)
	{
		ptr=(*head);
		*head=(*head)->next;
		free(ptr);
	}
	else
	{
		ptr=loc->next;
		loc->next=(loc->next)->next;
		free(ptr);
	}
  }
