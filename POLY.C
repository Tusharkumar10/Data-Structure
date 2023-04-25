// Polynomial program
#include<stdio.h>
#include<conio.h>

typedef struct NodeType
{
int coef;
int power;
struct NodeType *next;
}node;
void AddPolynomial(node *,node *,node *);

node *head1,*head2,*head3,*ptr1,*ptr2,*ptr3;

ptr1=(node*)malloc(sizeof(node));
head1=ptr1;
ptr1->coef=4;
ptr1->power=3;
ptr1->next=NULL;

ptr2=(node*)malloc(sizeof(node));
head2=ptr2;
ptr2->coef=5;
ptr2->power=3;
ptr2->next=NULL;

ptr3=(node*)malloc(sizeof(node));
head3=ptr3;

void main(){
clrscr();
AddPolynomial(ptr1,ptr2,ptr3);
getch();
}

void AddPolynomial(node *ptr1,node *ptr2,node *ptr3)
{
   while(ptr1->next==NULL && ptr2->next==NULL)
   {
    if(ptr1->power==ptr2->power)
     {
	 ptr3->power = ptr1->power;
	 ptr3->coef=ptr1->coef+ptr2->coef;
	 ptr3->next=NULL;
	 ptr1=ptr1->next;
	 ptr2=ptr1->next;
	 ptr3=ptr1->next;

     }
   }
   printf("%d x^%d + %d x^%d = %d x^%d\n",ptr1->coef,ptr1->power,ptr2->coef,ptr2->power,ptr3->coef,ptr3->power);
}