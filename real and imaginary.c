#include <stdio.h>
#include <conio.h>

struct complex
{
	int real;
	int img;
};
void main(){
	struct complex c1,c2;
	printf("Enter the real part of the number : ");
	scanf("%d",&c1.real);
	printf("Enter the imaginary part of the number : ");
	scanf("%d",&c1.img);
	printf("The first complex adittion is %d+%di",c1.real,c1.img);
}
