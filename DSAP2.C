#include<stdio.h>
void transpose();

int main()
{
transpose();	
}
void transpose()
{
	int mat1[3][3],i,j;
	printf("Enter the 9 elements of matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&mat1[i][j]);
        }
    }
    printf("\nEntered matrix\n");
    for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
		{
			printf("%d ",mat1[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose matrix\n");
    for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
		{
			printf("%d ",mat1[j][i]);
		}
		printf("\n");
	}
}
