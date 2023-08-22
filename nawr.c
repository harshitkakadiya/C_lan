#include<stdio.h>
int add ()
{
	int a,b,t;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	t=a*b;
	return t;
}
int main ()
{
	printf("ABCD");
	int x=add();
	printf("multi of A and B is : %d",x);
}