//Transpose of Matrix
#include <stdio.h>
#include <conio.h>

int main(){
	int a[25][25],i,j;
	int cols,rows;
	
	puts("Enter Matrix order : ");
	scanf("%d %d",&cols,&rows);
	
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			puts("Enter Elements value : ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("matrix = \n");
	printf("\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Transpose matrix = \n");
	printf("\n");
	for(j=0;j<cols;j++){
		for(i=0;i<rows;i++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}	
	return 0;
}

