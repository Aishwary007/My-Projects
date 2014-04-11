#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
	struct node *p;
	int i;
	struct node *n;
}node;
void cre(node *head,node *tail,int i);
void addaf(node *head,node**tail,int a,int i);
void addbf(node **head,node*tail,int b,int i);
void delaf(node *head,node**tail,int a);
void delbf(node **head,node*tail,int b);
void del(node **head,node**tail,int i);
int cou(node *head);
void dis(node *head,node *tail);
void addbeg(node **head,node**tail,int i);
void addend(node **head,node**tail,int i);
node *search(node *head,int i);
int main()
{
	node *head=NULL,*tail=NULL;
	printf("Press 1 to add number after a particular location\n"
	       "Press 2 to add number before a particular location\n"
	       "Press 3 to delete number after a particular location\n"
	       "Press 4 to delete number before a particular location\n"
	       "Press 5 to delete given  number\n"
	       "Press 6 to count number of nodes\n"
	       "Press 7 to display linked list from both head and tail\n"
	       "Press 8 to add number at the beginning of linked list\n"
	       "Press 9 to add number at the end of linked list\n"
	       "Press 10 to exit\n\n");
	puts("Enter your choice:- ");
    return 0;
}
void cre(node **head,node **tail,int i)
{
	node *ptr;
	ptr=(node*)malloc(sizeof(node));
	ptr->i=i;
	if(*head==NULL && *tail==NULL)
	{
		ptr->p=ptr->n=NULL;
		*head=*tail=ptr;
	}
	else
	{
		ptr->p=*tail;
		*tail=ptr;
		ptr->n=NULL;
	}
}
void addaf(node *head,node**tail,int a,int i)
{
	node *ptr;node *l;
	ptr=(node *)malloc(sizeof(node));
	ptr->i=i;
	l=search(head,a);
	if(l==NULL)
	{
		puts("Not Found");
		return;
	}
	else if(l->n==NULL)
	{
		ptr->n=l->n;
		l->n=ptr;
		ptr->p=*tail;
		*tail=ptr;
	}
	else{
		l->n->p=ptr;
		ptr->n=l->n;
		l->n=ptr;
		ptr->p=l;
	}
}
void addbf(node **head,node*tail,int b,int i)
{
	node *ptr,*l;
	ptr=(node *)malloc(sizeof(node));
	ptr->i=i;
	l=search(*head,b);
	if(l==NULL)
	{
		puts("Not Found");
		return;
	}
	else if(l->p==NULL)
	{
		ptr->p=l->p;
		l->p=ptr;
		ptr->n=*head;
		*head=ptr;
	}
	else{
		l->p->n=ptr;
		ptr->p=l->p;
		l->p=ptr;
		ptr->n=l;
	}
}
void delaf(node *head,node**tail,int a)
{
	node *temp,*l;
	l=search(head,a);
	if(l==NULL || l->n==NULL)
	{
		puts("Not Found");
		return;
	}
	else if(l->n->n==NULL)
	{
		temp=l->n;
		l->n=NULL;
		*tail=l;
	}
	else{
		temp=l->n;
		l->n=l->n->n;
		l->n->p=l;
	}
	free(temp);
}
void delbf(node **head,node*tail,int b)
{
	node *temp,*l;
	l=search(*head,b);
	if(l==NULL || l->p==NULL)
	{
		puts("Not Found");
		return;
	}
	else if(l->p->p==NULL)
	{
		temp=l->p;
		l->p=NULL;
		*head=l;
	}
	else{
		temp=l->p;
		l->p=l->p->p;
		l->p->n=l;
	}
	free(temp);
}
void del(node **head,node**tail,int i)
{
	node *l;
	l=search(*head,i);
	if(l==NULL)
	{
		puts("Not Found");
		return;
	}
	else if(l->p==NULL)
	{
		l->n->p=NULL;
		*head=l->n;
	}
	else if(l->n==NULL)
	{
		l->p->n=NULL;
		*tail=l->p;
	}
	else{
		l->p->n=l->n;
		l->n->p=l->p;
	}
	free(l);
}
int cou(node *head)
{
	node *t;
	int a=0;
	t=head;
	while(t!=NULL)
	{
		a++;
		t=t->n;
	}
	return a;
}
void dis(node *head,node *tail)
{
	node *t;
	t=head;
	puts("\nTraversing in order\n");
	while(t!=NULL)
	{
		printf("%d\n",t->i);
		t=t->n;
	}
	t=tail;
	puts("\nTraversing in reverse order\n");
	while(t!=NULL)
	{
		printf("%d\n",t->i);
		t=t->p;
	}
}
void addbeg(node **head,node**tail,int i)
{
	node *ptr;
	ptr=(node *)malloc(sizeof(node));
	ptr->i=i;
	if(*head==NULL && *tail==NULL)
	{
		ptr->p=ptr->n=NULL;
		*head=*tail=ptr;
	}
	else
    {
        ptr->n=*head;
        *head=ptr;
        ptr->p=NULL;
	}

}
void addend(node **head,node**tail,int i)
{
	node *ptr;
	ptr=(node *)malloc(sizeof(node));
	ptr->i=i;
	if(*head==NULL && *tail==NULL)
	{
		ptr->p=ptr->n=NULL;
		*head=*tail=ptr;
	}
		else
    {
        ptr->p=*tail;
        *tail=ptr;
        ptr->n=NULL;
	}
}
node *search(node *head,int i)
{
	node *ptr;
	ptr=head;
	while(ptr->i!=i)
		ptr=ptr->n;
	return ptr;
}
