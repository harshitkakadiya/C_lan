#include<stdio.h>
int add (int a, int b)
{
	int t;
	t=a+b;
	printf("Addition is : %d ",t);
	
}
int main ()
{
	int x,y;
	printf("Enter X and Y: ");
	scanf("%d%d",&x,&y);
	add (x,y);
}
