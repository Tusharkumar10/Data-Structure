#include<stdio.h>
#include<conio.h>
void addition();
void MatrixMul();
int mat1[20][20],mat2[20][20],mat3[20][20],i,j,k,r1,c1,r2,c2,flag=1;
void main()
{       clrscr();
	printf("How many rows and column you want to enter in matrix 1\n");
	scanf("%d%d",&r1,&c1);
	printf("How many rows and column you want to enter in matrix 2\n");
	scanf("%d%d",&r2,&c2);
	printf("Enter the  elements of matrix 1\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		scanf("%d",&mat1[i][j]);
        }
	}
	printf("Enter the  elements of matrix 2\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
		scanf("%d",&mat2[i][j]);
        }
	}
	addition();
	printf("\nMatrix Addition \n");
	for(i=0;i<3;i++)
	   { 
		for(j=0;j<3;j++)
		{
		   printf("%d ",mat3[i][j]);
		}
		printf("\n");
	   }

     if(flag=1)
     {
	MatrixMul();
	printf("\nMatrix Multiplication \n");
	for(i=0;i<r1;i++)
	   { 
		for(j=0;j<c2;j++)
		{
		   printf("%d ",mat3[i][j]);
		}
		printf("\n");
	   }
     }
     else
     {
      printf("Matrix multiplication is not posible because");
      printf("columns of matrix 1 is different from rows of matrix 2\n");
     }
	   getch();
}

void addition()
{
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	
}

void MatrixMul()
{     if(c1==r2)
      {
	for(i=0;i<r1;i++)
	{
	  for(j=0;j<c2;j++)
		{
			mat3[i][j]=0;
			for(k=0;k<c1;k++)
			{
			  mat3[i][j]+=mat1[i][k]*mat2[k][j];	
			}
			
		}
	}
      }
      else
      {
	flag=0;
      }
}