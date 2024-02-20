#include<stdio.h>
int main()
{
	int num,i,p;
	printf("Enter a number to find its multiplication table:");
	scanf("%d",&num);
	for(i=1;i<11;i++)
	{
		p=num*i;
		printf("\n%d*%d=%d",num,i,p);
		
	}
}
