#include<stdio.h>
int main()
{
	int n1,n2,n3;
	n1=printf("Enter a number:");
	scanf("%d",&n1);
	n2=printf("Enter a number:");
	scanf("%d",&n2);
	n3=printf("Enter a number:");
	scanf("%d",&n3);
	if(n1>n2 & n1>n3)
		{
			printf("Largest no is:%d",n1);
		}
	else if(n2>n3 & n2>n1)
		{
			printf("Largest no is:%d",n2);
		}	
	else
		{
			printf("largest no is %d",n3);
		}
	
	if(n1<n2 & n1<n3)
		{
			printf("\nsmallest no is:%d",n1);
		}
	else if(n2<n3 & n2<n1)
		{
			printf("\nsmallest no is:%d",n2);
		}
	else
		{
			printf("\nsmallest %d",n3);
		}
	return 0;
}
