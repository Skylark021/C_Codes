#include<stdio.h>
float semi_per();
int main()
{
	float a=semi_per();
	printf("The semi perimeter of triangle is:%f",a);
}
float semi_per()
{
	float a,b,c,res;
	printf("Enter side 1:");
	scanf("%f",&a);
	printf("Enter side 2:");
	scanf("%f",&b);
	printf("Enter side 3:");
	scanf("%f",&c);
	res=(a+b+c)/3;
	return res;
}
