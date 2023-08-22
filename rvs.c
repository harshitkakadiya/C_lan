#include<stdio.h>
int add()
{
	int x[50],y[50];
 	int i,j,a=0 ;
 	printf("Enter String =");
	scanf("%s",&x);
	for(a=0;x[a]!='\0'; a++);
	j=a;
	for(i=0; i<a; i++)
  	{
    		y[i]=x[--j];
  	}  
  	y[i]='\0';
  	printf("\n Reverse = %d",y);
}
int main()
{   
	 add();
}    