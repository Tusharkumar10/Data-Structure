#include<stdio.h>

void addition();
void MatrixMul();
int mat1[3][3],mat2[3][3],mat3[3][3],i,j,k;
void main()
{
	printf("Enter the 9 elements of matrix 1\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&mat1[i][j]);
        }
	}
	printf("Enter the 9 elements of matrix 2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
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


	MatrixMul();
	printf("\nMatrix Multiplication \n");
	for(i=0;i<3;i++)
	   { 
		for(j=0;j<3;j++)
		{
		   printf("%d ",mat3[i][j]);
		}
		printf("\n");
	   }
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
{
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
		{
			mat3[i][j]=0;
			for(k=0;k<3;k++)
			{
			  mat3[i][j]+=mat1[i][k]*mat2[k][j];	
			}
			
		}
	}
}
