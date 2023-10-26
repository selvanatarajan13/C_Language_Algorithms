#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b,c,d,A;
	printf("Enter the three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	d=a+b+c;
	A=d/3;
	printf("The sum of three number average :%d",A);
	getch();
}
