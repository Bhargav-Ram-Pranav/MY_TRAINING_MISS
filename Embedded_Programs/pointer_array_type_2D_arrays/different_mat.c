#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
#define ROW1 3
#define COL1 1
void read_input(int(*ptr1)[],int row,int col);
void display_output(void* ptr1,int row,int col);
void read_input1(int(*ptr)[COL1],int row,int col);
void matrix_lower(int(*ptr1)[COL],int row,int col);
void matrix_upper(int(*ptr1)[COL],int row,int col);
//void matrix_trans(int(*ptr1)[COL],int row,int col);
void matrix_trans(int(*ptr1)[COL],int(*ptr2)[ROW],int row,int col);
//void read_input(int ptr[][],int row,int col)
void matrix_add(int(*ptr1)[],int(*ptr2)[],int(*ptr3)[],int row,int col);
void matrix_mul(int(*ptr1)[COL],int(*ptr2)[COL1],int row1,int col1,int row2,int col2);
//void display_output(int(*ptr1)[],int row,int col);
int main()
{
	//int arr1[ROW*COL];
	int(*arr)[]=(int(*)[])malloc(ROW*COL*sizeof(int));
	void *arr1=arr;
	int arr2[ROW1*COL1];
	int add[ROW*COL];
	//int trans[ROW*COL];
	printf("\n");
	printf(">>>>>Menu<<<<<");
	printf("\n");
	printf("------------------------Select the below option---------------\n");
	printf("\n");
	printf("0.Exit the program\n1.Matrix addition\n2.Matrix Multiplication\n3.Transpose matrix\n4.Upper triangle\n5.Lower traingle\n");
	printf("\n");
	int prog;
	scanf("%d",&prog);
	switch(prog)
	{
		case 0:
			printf("Successfully executed\n");
			exit(0);

	/*	case 1:
			printf("Matrix operation\n");
			printf("Read the first matrix elements\n");
			read_input(arr1,ROW,COL);
			printf("Read the second matrix elements\n");
			read_input(arr2,ROW,COL);
			printf("Performing the addition operation\n");
			matrix_add(arr1,arr2,add,ROW,COL);
			printf("Displaying output\n");
			display_output(add,ROW,COL);
			break;*/
		case 2:
			printf("Matrix multiply operation\n");
			printf("Read the first matrix elements\n");
			read_input(arr1,ROW,COL);
			printf("Read the second matrix elements\n");
			read_input1(arr2,ROW1,COL1);
			printf("Performing the multiply operation\n");
			matrix_mul(arr1,arr2,ROW,COL,ROW1,COL1);
			//printf("Displaying output\n");
			//display_output(add,ROW,COL);
			break;

		/*case 3:
			printf("The matrix transpose\n");
			read_input(arr1,ROW,COL);
			matrix_trans(arr1,trans,ROW,COL);
			break;

		case 4:
			printf("The upper triangle\n");
			read_input(arr1,ROW,COL);
			matrix_upper(arr1,ROW,COL);
			break;

		case 5:

			printf("The lower triangle\n");
			read_input(arr1,ROW,COL);
			matrix_lower(arr1,ROW,COL);
			break;*/





	}

}
void read_input(int(*ptr)[COL],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&ptr[i][j]);
		}
	}

}
void read_input1(int(*ptr)[COL1],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&ptr[i][j]);
		}
	}

}

/*void display_output(void* ptr1,int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d     ",((int(*)[COL])ptr1)[i][j]);
		}
		printf("\n");
	}
}*/
void matrix_mul(int(*ptr1)[COL],int(*ptr2)[COL1],int row1,int col1,int row2,int col2)
{
	int i,j,k;
	int ptr3[row1][col2];
	int sum;

	if(col1==row2)
	{

		for(i=0;i<row1;i++)
		{
			for(j=0;j<col2;j++)
			{
				sum=0;
			//	ptr3[i][j]=0;
				for(k=0;k<col1;k++){
					sum=sum+ptr1[i][k]*ptr2[k][j];
				}
				ptr3[i][j]=sum;



			}
		}
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col2;j++)
			{
				printf("%d    ",ptr3[i][j]);
			}
			printf("\n");
		}


	}
	else 
	{
		printf("Invalid rows and columns\n");
		exit(0);

	}
}
