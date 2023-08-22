#include<stdio.h>
void odd()
{
	int a,n;
	printf("Enter N:");
	scanf("%d",&n);
	for(a=1;a<=n;a=a+=2)
	{
		printf("%d ",a);
	}
	
}
void even()
{
	int a,n;
	printf("Enter N:");
	scanf("%d",&n);
	for(a=0;a<=n;a=a+=2)
	{
		printf("%d ",a);
	}
	
}
int main ()
{
	int x;
	printf("Enter x: ");
	scanf("%d",&x);
	if(x%2!=0)
	{
		odd();
	}
	else
	{
		even();
	}

}