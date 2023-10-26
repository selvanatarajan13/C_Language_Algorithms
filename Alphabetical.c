#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char a[25][25],t[25];
	int n,i,j;
	
	printf("Enter the no student: ");
	scanf("%d",&n);
	
	printf("Enter the student name : ");
	for(i=0;i<n;i++){
		scanf("%s",&a[i]);
	}
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(a[i],a[j])>0){
				strcpy(t,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],t);
			}
		}
	}
	
	printf("\n Alphatrical order\n");
	for(i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
	getch();	
}
