#include<stdio.h>
float area();
int main()
{
	float a=area();
	printf("The area of rectangle is:%f",a);
}
float area()
{
	float l,b,res;
	printf("Enter length:");
	scanf("%f",&l);
	printf("Enter breadth:");
	scanf("%f",&b);
	res=l*b;
	return res;
}
