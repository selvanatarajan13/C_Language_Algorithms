#include <stdio.h>
#include <conio.h>

int main()
{
	int sum=0,n,i;
	printf("Enter sum of number : %d");
	scanf("%d\n",&n);
	while (i<=n)
	{
		sum=sum+i;
	}
	printf("Sum is : %d",sum);
	getch();
}
