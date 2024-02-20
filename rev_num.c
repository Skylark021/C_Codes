#include<stdio.h>
int rev();
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	int a=rev(n);
	printf("The reverse of the number is:%d",a);
}
int rev(int n)
{
	int rem,num;
	while(n!=0)
	{
		rem=n%10;
		num=num*10+rem;
		rev(n=n/10);	
	}
	return num;
}
