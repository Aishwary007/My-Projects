#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct nodetype
{
    int i;
    struct nodetype *next;
}node;
void cre(node **head,int i,node **tail);
void add(node*head,int i,int a);
void del(node **head,int i);
int cou(node *head);
void dis(node *head);
void adb(node **head,int i);
void apd(node *head,int i);
node *sear(node *head,int i);
void main()
{
    node *head=NULL,*tail =NULL;
    int a,i,j,c;
    for(i=0;i<10;i++)
    {
        printf("Enter Number %d: ",i+1);
        scanf("%d",&a);
        cre(&head,a,&tail);
    }
    printf("Press 1 to Add number after a location\n"
           "Press 2 to Delete a number\n"
           "Press 3 to Count number of nodes\n"
           "Press 4 to Display linked list\n"
           "Press 5 to Add number at beginning\n"
           "Press 6 to Append a number\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            puts("Enter a number");
            scanf("%d",&i);
            puts("Number after which it has to be inserted");
            scanf("%d",&a);
            add(head,i,a);
            dis(head);
            break;

        case 2:
            puts("Enter a number");
            scanf("%d",&i);
            del(&head,i);
            dis(head);
            break;

        case 3:
            j=cou(head);
            printf("No. of nodes= %d",j);
            break;

        case 4:
            puts("Your linked list is");
            dis(head);
            break;

        case 5:
            puts("Enter a number");
            scanf("%d",&i);
            adb(&head,i);
            dis(head);
            break;

        case 6:
            puts("Enter a number");
            scanf("%d",&i);
            apd(head,i);
            dis(head);
    }
    getch();
}
void cre(node **head,int i,node **tail)
{
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    ptr->i=i;
    if((*head)==NULL)
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
void add(node*head,int i,int a)
{
    node *ptr,*loc;
    ptr=(node *)malloc(sizeof(node));
    ptr->i=i;
    loc=sear(head,a);
    if(loc==NULL)
	printf("Not Found");
    else if(loc==head)
    {
	ptr->next=head->next;
	head->next=ptr;
    }
    else
    {
	ptr->next=loc->next->next;
	loc->next->next=ptr;
    }

}
void del(node **head,int i)
{
    node *ptr,*loc;
	loc=sear(head,i);
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
int cou(node *head)
{
    int i=0;
    node *ptr;
    ptr=head;
    if(head==NULL)
	return 0;
    else
    {
        while(ptr!=NULL)
        {
            i++;
            ptr=ptr->next;
        }
        return i;
    }
}
void dis(node *head)
{
    node *ptr;
	ptr=(node *)malloc(sizeof(node));
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->i);
		ptr=ptr->next;
	}
}
void adb(node **head,int i)
{
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    ptr->i=i;
    ptr->next=*head;
    *head=ptr;
}
void apd(node *head,int i)
{
    node *ptr,*temp;
    ptr=(node *)malloc(sizeof(node));
    ptr->i=i;
    temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    ptr->next=temp->next;
    temp->next=ptr;
}
node *sear(node *head,int i)
{
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    ptr=head;
	if(head==NULL)
		return NULL;
	else if(head->i==i)
	{
		return head;
	}
	else
	{
		while(ptr->next!=NULL)
		{
			if(ptr->next->i==i)
				return ptr;
			else
				ptr=ptr->next;
		}
		return NULL;
	}
}
