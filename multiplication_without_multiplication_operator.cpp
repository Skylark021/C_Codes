#include<stdio.h>
int main()
{
	int a,b,i,res=0;
	printf("Enter the number to be multiplied:");
	scanf("%d",&a);
	printf("Enter the other number:");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		res=res+a;
	}
	printf("%d",res);
	
}
