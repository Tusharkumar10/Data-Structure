#include<stdio.h>
#include<conio.h>
void sort();
void print();
int a[50],n,i=0,j,temp,pass=1,ch;
void main()
{

clrscr();
printf("How many numbers you want to enter in the array\n");
scanf("%d",&n);
printf("Enter the %d numbers\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Entered array\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
while(1)
{
printf("\nEnter your choice\n");
scanf("%d",&ch);
switch(ch)
{
 case 1 : sort(); print(); break;
 case 2 : exit(0); break;
}}
getch();
}

void sort()
{
while(i<n)
{  j=i+1;
//for(j=1;j<n;j++)
//{
 if(a[i]>a[j])
 {
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
 }}
 printf("\nSorted array Pass %d \n",pass);
 pass++;
 i++;
 }
 void print(){
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
