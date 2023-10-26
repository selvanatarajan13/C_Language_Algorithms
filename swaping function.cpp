#include <stdio.h>
#include <conio.h>

void swapref(int *,int *);

void main(int){
	printf("\n Enter the a value : ");
	scanf("%d\n",&a);
	printf("\n Enter the b value : ");
	scanf("%d\n",&b);
	
	/*passby value */
	swapval(a,b);
	printf("\nAfter the swap in pass value a = %d\n",a);
	printf("\nAfter the swap in pass value b = %d\n",b);
}

/*Pass by value */
void swapval(int p,int q){
	int t;
	t=p;
	p=q;
	q=t;
}
