#include<stdio.h>
int main()
{
	int div,dsr,rem,quo;
	printf("Enter dividend:");
	scanf("%d",&div);
	printf("Enter divisor:");
	scanf("%d",&dsr);
	quo=div/dsr;
	rem=div-(quo*dsr);
	printf("The remainder is:%d",rem);
	return 0;
}
