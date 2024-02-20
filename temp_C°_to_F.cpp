#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter temperature (in C°)");
	scanf("%f",&c);
	f=32+(9/5)*c;
	printf("The temperature in F is: %f",f);
}
