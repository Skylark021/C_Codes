#include<stdio.h>
int main()
{
	int HRA,TA,basic_pay,gross_pay,tax,total_sal;
	
	printf("Enter basic pay:");
	scanf("%d",&basic_pay);
	
	HRA=(basic_pay*10)/100;
	TA=(basic_pay*5)/100;
	gross_pay=basic_pay+TA+HRA;
	tax=(2*gross_pay)/100;
	total_sal=gross_pay-tax;
	
	printf("\nThe basic pay is: %d",basic_pay);
	printf("\nThe HRA is: %d",HRA);
	printf("\nThe TA is: %d",TA);
	printf("\nThe professional tax is: %d",tax);
	printf("\nThe total payable salary is: %d",total_sal);
	return 0;
}
