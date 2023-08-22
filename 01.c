#include<stdio.h>
void main ()
{
	int a[5],b[5],i,total;
	for (i=0;i<5;i++)
		{
		   printf("Enter value a[%d] : ",i);
		   scanf("%d",&a[i]);
		}
	for (i=0;i<5;i++)
		{
		   printf("Enter value b[%d] : ",i);
		   scanf("%d",&b[i]);
		}
	for (i=0;i<5;i++)
		{  total=a[i]+b[i];

		   printf("a:%d + b:%d = %d\n",a[i],b[i],total);
		}

}