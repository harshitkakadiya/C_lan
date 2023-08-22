#include<stdio.h>
void main(){
	int a=10,b=20;
	int *x,*y;
	x=&a;
	y=&b;
	printf("1value is a: %d\n",a);
	printf("1address is a: %u\n",&a);
	printf("1value is b: %d\n",b);
	printf("1address is b: %u\n\n",&b);

	printf("2value is a: %d\n",a);
	printf("2address is a: %u\n",&b);
	printf("2value is b: %d\n",b);
	printf("2address is b: %u\n",&a);
	
}