#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#define NUM 5
#include "pranav.h"
int main()
{
	int sum,prog,i;

	int *ptr;
	ptr=(int *)malloc(NUM*sizeof(int));
	while(1)
	{
		printf("Select the options\n 1.Read the inputs\n 2.Display the inputs\n 3.Biggest number\n 4.Second higest number\n 5.Decimal to binary\n 6.Ascending order\n");
		scanf("%d",&prog);

		switch(prog)
		{
			case 0:
				exit(0);
			case 1:
				printf("Reading the inputs\n");
				for(i=0;i<NUM;i++)
				{
					scanf("%d",(ptr+i));
				}
				
			case 2:
				printf("Displaying output\n");
				for(i=0;i<NUM;i++)
				{
					printf("%p----%d\n",&ptr[i],ptr[i]);

				}
				break;
			case 3:
				printf("THE BIGGEST NUMBER\n");
				big(ptr,NUM);
				printf("\n");
				break;
			case 4:
				printf("The second number\n");
				sec_high(ptr,NUM);
				printf("\n");
				break;
			case 5:
				printf("decimal to binary\n");
				dec_bin(ptr,NUM);
				break;
			case 6:
				printf("Ascending order\n");
				ascend(ptr,NUM);
				printf("\n");
				break;





		}


	}



}
