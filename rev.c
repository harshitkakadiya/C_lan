#include<stdio.h>
int reverse() 
{
	int n,rev=0,last;
	printf("Enter number: ");
	scanf("%d",&n);	
	while(n !=0)
	{
		last=n%10;
		rev=rev*10+last;
		n=n/10;
	}
	printf("reverse number: %d",rev);
}
int main()
{
	reverse();
}

