#include<stdio.h>
void func(int x,int *y);
int main()
{
	int a=2,b=6;
	func(a,&b);
	printf("A-------%d\nB--------%d\n",a,b);
}
void func(int x,int *y)
{
	int temp;
	temp=x;
	x=*y;
	*y=temp;
}

