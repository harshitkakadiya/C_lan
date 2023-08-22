#include<stdio.h>
int add (int a, int b)
{
	int t;
	t=a+b;
	return t;
	
}
int main ()
{
	int x,y;
	printf("Enter X and Y: ");
	scanf("%d%d",&x,&y);
	int t = add(x,y);
	printf("Addition is: %d",t);
}
