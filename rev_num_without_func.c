#include<stdio.h>
int main()
{
	int n;
	int rem,num;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		num=num*10+rem;
		n=n/10;	
	}
	printf("The reverse of the number is:%d",num);
	return 0;
}
