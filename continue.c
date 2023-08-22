#include<stdio.h>
int main ()
{
	for (int i=1 ; i<=15 ; i++){
	if (i==4||i==9){
		continue;
	}

	printf("%d ",i);
}
}