#include<stdio.h>
#include<conio.h>
void main()
{
int stack[50],top=-1,item,maxstk,i,minstk;
clrscr();
printf("How many elements you want to insert in the stack between 1 to 50\n");
scanf("%d",&maxstk);
top=top+1;
for(;top<=maxstk;top++)
{
printf("Enter the %d element which you want to insert in the stack\n",top);
scanf("%d",&item);
stack[top]=item;

}
//printf("Value of top = %d\n",top);
printf("++++++++++++++++Stack elements++++++++++++++\n");
for(;top>=0;top--)
{
printf("%d ",stack[top]) ;
}
printf("\nYou insert %d element in the stack.\n",maxstk);
printf("How many elements you want to delete from the stack.\n");
scanf("%d",&minstk);
for(i=minstk;i>0;i--)
{
printf("Top=%d \n",top);
top=top-1;
printf("Element deleted \n ");

}
printf("++++++++++++++++Stack elements after deletion ++++++++++++++\n");
while(top!=0)
{
printf("%d ",top);
top--;
}

getch();
}