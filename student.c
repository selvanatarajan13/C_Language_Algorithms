#include <stdio.h>
#include <conio.h>

struct student{
	char name[10],place[10];
	int age;
};
void main(){
	struct student s[75];
	int i,j,n;
	
	printf("Enter the No stduents : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("\nEnter student Details\n");
		printf("Name : ");
		scanf("%s",s[j].name);
		printf("Age : ");
		scanf("%d",&s[j].age);
		printf("place : ");
		scanf("%s",s[j].place);
	}
	printf("\n");
	printf("\t\t\tStudent Details..\n\n");
	for(i=0;i<80;i++){
		printf("~");
	}
	printf("\n\tName\t\tAge\t\tPlace\n");
	for(i=0;i<80;i++){
		printf("~");
	}
	printf("\n%s\t\t%d\t\t%s\n",s[j].name,s[j].age,s[j].place);
	for(i=0;i<80;i++){
		printf("~");
	}
	getch();
}
