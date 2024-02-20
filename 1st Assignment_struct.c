#include<stdio.h>

struct employee{
	char emp_name[50];
	char emp_des[50];
	int basic_pay;
	int DA;
	int TA;
	int gross_sal;
}emp;
int main()
{
	printf("Enter name of employee : ");
	scanf("%s",emp.emp_name);
	printf("Enter designation : ");
	scanf("%s",emp.emp_des);
	printf("Enter basic pay : ");
	scanf("%d",&emp.basic_pay);
	
	emp.TA=(emp.basic_pay*5)/100;
	emp.DA=(2*emp.basic_pay)/100;
	emp.gross_sal=emp.basic_pay+emp.TA+emp.DA;
	
	printf("\nThe basic pay is: %d",emp.basic_pay);
	printf("\nThe DA is: %d",emp.DA);
	printf("\nThe TA is: %d",emp.TA);
	printf("\nThe gross sal is: %d",emp.gross_sal);
	return 0;
	
}
