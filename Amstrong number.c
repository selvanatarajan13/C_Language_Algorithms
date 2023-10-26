#include<stdio.h>


void main()
{
	int a,num,b,sum,i,e,d;
	printf("Enter the number to : \n");
	scanf("%d",&e);
	for(i=1;i<=e;i++)
	{
		sum=0;
		num=i;
		b=num;
		while(num>0)
		{
			d=num%10;
			sum=sum+(d*d*d);
			num=num/10;
		}
		if(sum==b)
		{
			printf("Armstrong Number : %d\n",sum);
		}
	}
}
