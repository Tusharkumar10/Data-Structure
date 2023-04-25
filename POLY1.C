#include<stdio.h>
#include<conio.h>
typedef struct NodeType
{
int coef;
int power;
struct NodeType *next;
}node;
void AddPOlynomial(node *,node *,node *);
void main()
{
node *head1,*head2,*head3,*ptr1,*ptr2,*ptr3;
ptr1=(node*)malloc(sizeof(node));
ptr2=(node*)malloc(sizeof(node));
ptr3=(node*)malloc(sizeof(node));
head1=ptr1;
head2=ptr2;
head3=ptr3;
clrscr();

ptr1->coef=4;
ptr1->power=3;
ptr1->next=NULL;

ptr2->coef=5;
ptr2->power=3;
ptr2->next=NULL;

AddPolynomial(ptr1,ptr2,ptr3);
printf("%d x^%d + %d x^%d = %d x^%d\n",ptr1->coef,ptr1->power,ptr2->coef,ptr2->power,ptr3->coef,ptr3->power);
getch();
}

void AddPOlynomial(node *ptr1,node *ptr2,node *ptr3)
{
   int power;
   int coef;
   while((ptr1->next==NULL) && (ptr2->next==NULL))
   {
     if(ptr1->power>ptr2->power)
     {
     coef=ptr1->coef;
     power=ptr1->power;
     ptr1=ptr1->next;
     }
     else if(ptr1->power<ptr2->power)
     {
     coef=ptr2->coef;
     power=ptr2->power;
     ptr2=ptr2->next;
     }
     else
     {
      coef=ptr1->coef+ptr2->coef;
      power=ptr1->power;
      ptr1=ptr1->next;
      ptr2=ptr2->next;
     }
     if(coef!=0)
     AddNode(ptr3,coef,power);
   }
   if(ptr1==NULL)
   for(;ptr2!=NULL;ptr2=ptr2->next)
   AddNode(ptr3,ptr2->coef,ptr2->power);
   else if(ptr2==NULL)
   for(;ptr1!=NULL;ptr1=ptr1->next)
   AddNode(ptr3,ptr1->coef,ptr1->power);
}
