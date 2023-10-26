#include <stdio.h>
#include <conio.h>

struct employee{
	int empid,amount;
	char ename[50];
	int interest;
	int peroid,emi;
	int annualint;
	int intrate;
};

void main(){
	
	struct employee emp[75];
	int i,n;
	
	printf("Enter number of customers : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("\n Enter Customer Details \n");
		printf("Enter customer Id : ");
		scanf("%d",&emp[i].empid);
		printf("Enter Customer name : ");
		scanf("%s",&emp[i].ename);
		printf("Enter Loan amount : ");
		scanf("%d",&emp[i].amount);
		printf("Enter time period : ");
		scanf("%d",&emp[i].peroid);
		printf("Enter EMI amount : ");
		scanf("%d",&emp[i].emi);
	}
	for(i=0;i<n;i++){
		emp[i].interest = emp[i].emi * emp[i].peroid - emp[i].amount;
		emp[i].annualint = emp[i].interest/2;
		emp[i].intrate = emp[i].annualint/12/100;
	}
	printf("\n\n\n\t\t\tXYZ& CO. Finance,Ltd..\n\n");
	for(i=0;i<90;i++){
		printf("-");
	}
	printf("\nEmpId\tName\tLA\tTime\temi\tInt\tRate\n");
	for(i=0;i<90;i++){
		printf("-");
	}
	for(i=0;i<n;i++){
		printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%d\n",emp[i].empid,emp[i].ename,emp[i].amount,emp[i].peroid,emp[i].emi,emp[i].interest,emp[i].intrate);
	}
	for(i=0;i<90;i++){
		printf("-");
	}
	getch();
}
