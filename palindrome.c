#include<stdio.h>
int main()

{
	int n1,n2;
	int rem,num;
	printf("Enter a number:");
	scanf("%d",&n1);
	n2=n1;
	while(n1!=0)
	{
		rem=n1%10;
		num=num*10+rem;
		n1=n1/10;	
	}
	
	if(n2==num)
	{
		printf("Number is a palindrome");
	}
	else
	{
		printf("Number is not a palindrome");
	}
}
