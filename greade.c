#include<stdio.h>
int main()
{
	int ary[5],i,total,per;
	printf("enter the marks of 5 subjects");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&ary[i]);
	}
	total=(ary[0]+ary[1]+ary[2]+ary[3]+ary[4])/5;
	printf("your percentage are %d",total);
	if(ary[0]>=40&&ary[1]>=40&&ary[2]>=40&&ary[3]>=40&&ary[4]>=40)
	{
		if(total>75)
		{
			printf(" you are passed with distinction and your percentage is :%d/n",total);
		}
	else if(75>=total>=60)
	{
		printf("you are passed with first distinction and your percentage is :%d/n",total);
	}
	else if(60>=total>=50)
	{
		printf("you are passed with second distinction and your percentage is :%d/n",total);
	}
	else
	{
		printf("you are passed with third distinction and your percentage is :%d/n",total);
	}
}
	else
	{
		printf("you are failed");
	}
    return 0;
}
	
