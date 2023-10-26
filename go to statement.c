#include<stdio.h>
#include<conio.h>
void main()
{
char name[25];
int idno;
float salary;
printf("Enter idno,name,salary");
scanf("%d%s%f",&idno,name,&salary);
goto ab;
printf("\n id number :%d",idno);
printf("\n name : %s",name);
ab:
printf("\n salary : %.2f",salary);
getch();
}
