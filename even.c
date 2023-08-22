#include<stdio.h>
void add ()
{
	int a,n;
	printf("Enter N:");
	scanf("%d",&n);
	for(a=0;a<=n;a=a+2)
	{
		printf("%d",a);
	}
	
}
int main ()
{
	add ();
}