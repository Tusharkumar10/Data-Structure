#include<stdio.h>
#include<conio.h>

typedef struct node
{
 int data;
 struct node *next;
}node;

void main()
{
node *ptr,*ptr1,*head;
int item1,item2;
clrscr();
ptr=( node *)malloc(sizeof(node *));
ptr1=( node *)malloc(sizeof(node *));
printf("Enter the value of 1st item and 2nd item of linked list\n");
scanf("%d%d",&item1,&item2);
head=ptr;
ptr->data=item1;
ptr->next=ptr1;
ptr1->data=item2;
ptr1->next=NULL;
printf("Address of First node = %u\n",head);
printf("1st node data = %d\n",ptr->data);
printf("1st node next address = %d\n",ptr->next);
printf("2nd node data = %d\n",ptr1->data);
printf("2nd node next address = %d\n",ptr1->next);


 getch();
 }















































