#include<stdio.h>
int dis(){
	printf("maths is: %d\n",m);
	printf("science is: %d\n",s);
	printf("english is: %d\n",e);
	printf("total is: %d\n",t);
}
int calc(){
	t=m+s+e;
	dis();
}
int setData(int m,int s,int e,int t)
{
	printf("Enter m: ");
	scanf("%d",&m);
	printf("Enter s: ");
	scanf("%d",&s);
	printf("Enter e: ");
	scanf("%d",&e);
	calc();
}
int main (){
	setData();
}