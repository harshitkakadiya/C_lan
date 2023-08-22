#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("abc.txt","w+");
	fprintf(fp,"Welcome to Skill qode Decode your Skill hear...\n");
	fputs("Your are entering lurnig C language Now..\n",fp);
	fputs("We are enjoying every thing ...\n",fp);
	fclose(fp);
}