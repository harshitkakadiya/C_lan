#include<stdio.h>
int main()
{
	int i=1,n=2,ans;
	table :
	  if (i<=10){
		ans=n*i;
		printf("%d*%d=%d\n",n ,i,ans);
		i++;
		goto table;
	  }
}