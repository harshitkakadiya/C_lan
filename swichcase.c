#include<stdio.h>
int main()
{
	int a=13,b=5,ch;
	printf("1.Aaddition\n");
	printf("2.Substraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("Enter Your Choice: \n");
	scanf("%d",&ch);

	switch (ch)
   	{
		case 1:
		   printf("Addition of A and B is: %d\n",a+b);
		   break;
		case 2:
		   printf("Substraction of A and B is: %d\n",a-b);
		   break;
		case 3:
		   printf("Multiplication of A and B is: %d\n",a*b);
		   break;
		case 4:
		   printf("Division of A and B is: %d\n",a/b);
		   break;
		
		default :
		printf("Wrong Choice.....");
		break;
   	}

}