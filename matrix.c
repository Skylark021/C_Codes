 #include<stdio.h>
int main()
{
	int r,c,i,j;
	int r1,c1;
	printf("Enter rows:");
	scanf("%d",&r);
	printf("Enter columns:");
	scanf("%d",&c);
	printf("Enter rows for 2nd matrix:");
	scanf("%d",&r1);
	printf("Enter columns for 2nd matrix:");
	scanf("%d",&c1);
	
	int a[3][3],sum[3][3],prod[3][3];
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			//printf("Matrix 1:%d");
			scanf("%d",&a[i][j]);
		}
	}
	 
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("%d  ",a[i][j]);
		}
	printf("\n");
	
	}	
	
	
	
//Second matrix
	
	int b[3][3];
	for(i=1;i<=r1;i++)
	{
		for(j=1;j<=c1;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	 
	for(i=1;i<=r1;i++)
	{
		for(j=1;j<=c1;j++)
		{
			printf("%d  ",b[i][j]);
		}
	printf("\n");
	}
	
//Addition

	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d	",sum[i][j]);
			
		}
		printf("\n");
		
	}
	
	
//Product     wrong logic for matrix multiplication

	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			prod[i][j]=2*a[i][j]*b[i][j];
			printf("%d	",prod[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
}
