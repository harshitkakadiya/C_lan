#include<stdio.h>
int m,s,e,t;
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
int setData(){
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