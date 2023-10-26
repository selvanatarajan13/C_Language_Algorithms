#include <stdio.h>
#include <conio.h>

void main(){
	int i=1,fact=1,n;
	puts("Enter the no :");
	scanf("%d",&n);
	
	while(i<=n){
		fact=fact*i;
		i=i+1;
	}
	printf("Factorial value : %d",fact);
	getch();
}
