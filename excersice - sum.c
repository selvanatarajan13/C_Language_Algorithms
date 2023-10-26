#include <stdio.h>
#include <conio.h>

void main()
{
	int sum=0,i=1,n;
	printf("Enter number : %d");
	scanf("%d",&n);
	while (i<=n)
	{
		sum=sum+i;
		i=i+1;
	}
	printf("Sum = %d",sum);
	getch();
}
