#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter a number:");
	scanf("%d",&b);
	printf("Numbers before swapping are: %d, %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nNumbers after swapping are: %d, %d",a,b);
	return 0;
}
