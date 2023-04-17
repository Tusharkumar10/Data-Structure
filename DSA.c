/*****************************************
********************************/ 
//*********************	SINGLE LINEAR LINKED LIST	***********************
/*****************************************
********************************/ 

#include<stdio.h>
//#include<alloc.h>
#include<conio.h>
#include<process.h>

//*********************	DECLARAT ION OF STRUCTURE	************************/ /
/*****************************************
********************************/ 

typedef struct simplelink
{
int data;
struct simplelink *next;
}node;

//*********************	FUN OF CREATE FIRST NODE	************************/ /
/*****************************************
********************************/ 

node *create(node *p)
{
p=(node *)malloc( sizeof (node));



{
int a;
printf("\n\n"); node *brr[25]; int arr [25];
a=0 ;
while (p!=NULL)
{
//printf( "\n\n[%d ,%u]-->",p->data ,p->next) ; arr[a]=p->data;
brr[a]=p->next; p=p->next;
a++;
}
//printf( "NULL ");
for (int i=(a-l);i>=O ;i--)
printf (" [%d,%u]<-- ",arr[i],brr [i]) ; printf ("HEAD ");
printf ("\n\n\npress any key to
cont i. nue .........." )  ; getch ();
}

//*********************	FUN OF INSERT AT BEGINING	***********************/ /
//*****************************************
********************************/ /

node *insert_begin(node *p)
{
node *temp;



temp=(node *)malloc(sizeof (node)); printf( "\nEnter the inserted data :"); scanf ("%d",&temp->data) ;
temp->next=p; p=temp;
return (p);
}

//***********************	FUN OF INSERT AT END	**************************/ /
//*****************************************
********************************/ /

node *insert end(node *p)
{
node *temp,*q; q=p;
temp=(node *)malloc( sizeof (node)); printf( "\nEnter the inserted data :"); scanf("%d",&temp ->data) ;
while (p->next! =NULL)
{
p=p->next;
}
p->next=temp;
temp->next=(node *)NULL; return (q) ;
}

//********************	FUN OF INSERT AFTER ELEMENT	**********************/ /



//*****************************************
********************************/ /

node *insert after(node *p)
{
node *temp,*q; int x;
q=p;
printf ("\nEnter the data(after which you enter data) :");
scanf ("%d",&x); while (p->data!=x)
{
p=p->next;
}
temp=(node *)malloc( sizeof (node)); printf( "\nEnter the inserted data :"); scanf("%d",&temp->data) ;
temp->next=p->next; p->next=temp;
return (q) ;
}

//********************	FUN OF COUNT THE
NO . OF NODES	********************/ /
//*****************************************
********************************/ /

int count(node *p)
{
int i=O;



while (p!=NULL)
{
p=p->next; i++;
}
return (i);
}

//*****************		FUN OF INSERT AT SPECIFIC POSITION	******************//
//*****************************************
********************************/ /

node *insert at spe_pos(node *p)
{
node *temp,*q,*r; int x,a,i=l; a=count (p);
q=p;
printf ("\nEnter the position(at which you want to enter data) :");
scanf ("%d",&x); if (x>(a+l))
{
printf ("Not able to insert node at such position	:");
getch();
}
else
{
if (x==l)

ternp=(node *)rnalloc( sizeof (node)); printf( "\nEnter the inserted data :"); scanf("%d",&temp->data);
ternp->next=p; q=ternp;
}
else
{
while (i!=x)
{
r=p;
p=p->next; i++ ;
}
ternp=(node *)rnalloc( sizeof (node)); printf( "\nEnter the inserted data :"); scanf("%d",&temp->data);
ternp->next=p ; r->next=temp;
}
}
return (q) ;
}

//**********************	FUN OF DELETE LAST NODE	************************/ /
//*****************************************
********************************/ / node *delend(node *p)

node *q,*r; r=p;
q=p;
if (p->next==NULL)
{
r=(node *)NULL;
}
else
{
while (p->next!=NULL)
{
q=p;
p=p->next;
}
q->next=(node *)NULL;
}
free (p); return (r);
}

//*******************	FUN OF DELETE SPECIFIC ELEMENT	********************/ /
//*****************************************
********************************/ /


node *del speci	ele(node	*p)
{		
node *q,*r;		
int x; q=p;		



int x ,a,i=l;	
a=count (p);			
q=p ;			
printf ("\nEnter	the position(at	which	you
want to remove data) :"); scanf ("%d",&x) ;
if (x>(a))
{
printf ("Not able to remove node at such position	:");
getch() ;
}
else
{
if (x== l)
{
q=q->next ; free (p);
}
else
{
while (i!=x)
{
r=p;
p=p->next ; i++ ;
}
r->next=p->next ; free (p);
}
}

return (q) ;
}

//**********************	FUN OF REVERSE THE LIST	************************/ /
//*****************************************
********************************/ /

node *reverse(node *p)
{
node *q,*r;
q= (node *)NULL; while (p!=NULL )
{
r=q; q=p;
p=p->next;
q->next=r;
}
return (q) ;

}

//*************************	FUN OF MAIN SCREEN	**************************/ /
//*****************************************
********************************/ /

void screen(node *head)
{
clrscr();



printf ("\n---------------------------------

---- " ) ;
switch (ch)
{
case 0:


case 1:

exit(O );

head=create(head);

II	display(head);
break ;

case 2 :


case 3 :


head= insert- break ;


begin (head);



case 4 :


case 5:


case 6:


case 7:


case 8:

head=insert end (head); break ;

head= insert after(head); break ;

head= insert at spe-pos (head); break ;

head=delend(head); break ;

head=delbegin(head) ; break ;

head=delete after(head);





case 9:

break ;

head=del speci ele(head); break ;

case 10:
head=delete at spe_pos(head); break ;
case 11:
display (head); break ;
case 12:
revdisplay(head); break ;
case 13:



%d",a);

a=count(head);
printf ("The no . of node in list- :

printf ("\n\n\npress any key to

cont i. nue .........." )  ;
getch (); break ;
case 14:
head=reverse(head); break ;
default :
printf ("\n\n\nPlease enter the

ri. ght


}

ch01. ce .......");
getch (); break ;

screen(head);



}

//************************	DECLARATION OF MAIN	**************************/ /
//*****************************************
********************************/ /

void main ()
{
clrscr(); node *head;
//int a,ch ;  head=( node *)NULL; screen(head); getche();
}



printf( "Enter the data :"); scanf("%d",&p->data);
p->next= (node *)NULL; return (p);
}

//*********************	FUN OF TRAVERSE IN ORDER	************************/ /
//*****************************************
********************************/ /

void display(node *p)
{
printf ("\n\n"); while (p!=NULL)
{
printf( " [%d,%u]--> ",p->data,p->next) ; p=p->next;
}
printf ("NULL ");
printf ("\n\n\npress any key to

cont i'

nue .........." )   ;

getch();
}

//****************	FUN OF TRAVERSE IN REVERSE ORDER	********************/ /
//*****************************************
********************************/ / void revdisplay(node *p)




int ch,a; printf ("\t\t\t LIST");


SINGLE LINEAR LINKED

printf ("\n\t\t\t***************************
******** ");
printf( "\n\n	OPTIONS ARE-- :");
pr	nt f ( "\ n,..,, ,..,, ,..,, ,..,, "' ,..,, ,..,, ,..,, ,..,, ,..,, "' "',..,, ,..,, "' "' "' " ) ;
printf ("\n\n 0-Exit ");
printf ("\n\n 1-Create first node "); printf ("\n\n 2-Insert at begining "); printf ("\n 3-Insert at end");
printf ("\n 4-Insert after element ");
printf ("\n 5-Insert at specific position "); printf ("\n\n 6-Delete at end");
printf ("\n 7-Delete at begining "); printf ("\n 8-Delete after element "); printf ("\n 9-Delete specific element ");
printf ("\nl O-Delete element from specific position ");
printf ("\n\nll-Traverse in order(Display) ");
printf ("\n12-Traverse in reverse order(Display) ");
printf ("\n\n13-Count no . of node"); printf ("\n\n14-Reversed linked list");
printf ("\n---------------------------------

---- " ) ;
printf( "\n\nEnter the choice :");
//printf ("\n");
scanf("%d",&ch);



r=q;
printf( "\nEnter the	
data	
to	
remove :");
scanf ("%d",&x); while (q->data!=x)			
{			
r=q;			
q=q->next;
}			
if (q==r)			
p=p->next; else			
r->next=q->next; free (q) ;
return (p);			
}			

//**********************	FUN OF DELETE FIRST NODE	***********************/ /
//*****************************************
********************************/ /

node *delbegin(node *p)
{
node *q; q=p;
p=p->next; free(q) ; return (p);
}



//******************	FUN OF DELETE NODE AFTER ELEMENT	*******************/ /
//*****************************************
********************************/ /

node *delete after(node *p)
{
node *temp,*q; int x;
q=p;
printf ("\nEnter the data(after which you want to delete) :");
scanf ("%d",&x); while (p->data! =x)
{
p=p->next;
}
temp=p->next;
p->next=temp->next; free (temp);
return (q) ;
}

//**************	FUN OF DELETE NODE AT SPECIFIC POSITION		****************//
//*****************************************
********************************/ /

node *delete at spe_pos(node *p)
{
node *temp,*q,*r;
