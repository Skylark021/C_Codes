#include<stdio.h>
int main()
{
	int i,j,x;
	printf("enter the number:");
	scanf("%d",&x);
	for(i=0;i<=x;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("* ",j);
		}
		printf("\n");
	}
	return 0;
}
