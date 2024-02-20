#include<stdio.h>
struct student
{
	int s1,s2,s3,s4,s5;
	char name[30];
}std[10]; 
int main()
{
 int t,j,sum,per;
 char name[30];
 for(i=1;i<=10;i++)
{
 	printf("Enter name of student %d :\n",i);
    scanf("%s",name);
	{	    
	    printf("Enter the marks of student %d:\n",i);
	    scanf("%d %d %d %d %d",&std[i].s1,&std[i].s2,&std[i].s3,&std[i].s4,&std[i].s5;);
    }
}
   for(i=1;i<=10;i++)
   {
   	printf("Marks of five subject of student %d are \n %d %d %d %d %d",i,std[i].s1,std[i].s2,std[i].s3,std[i].s3,std[i].s4,std[i].s5);
   	printf("\n");
   }
return 0;
}
