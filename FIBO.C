#include<stdio.h>
#include<conio.h>
long int fibo(long int);
long int item,temp;
void main()
{
int n1=0;
long int n,i;
clrscr();
printf("Enter the value of n (How many numbers you want to display in your fibonacci series excluding 0)\n");
scanf("%ld",&n);
printf("Fibonnaci series of %d number\n",n);
printf("%d ",n1);
for(i=1;i<=n;i++)
{
printf("%ld ",fibo(i));
}
printf("\nEnter the starting value\n");
scanf("%ld",&temp);
if(temp==0)
{
printf("%d ",n1);
}
for(i=1;i<=n;i++)
{
item=fibo(i);
if(temp<=item)
{
printf("%ld ",item);
}


}
getch();
}

long int fibo(long int n)
{
if(n==1 || n==2)
{
 return 1;
}
return(fibo(n-1)+fibo(n-2));
}