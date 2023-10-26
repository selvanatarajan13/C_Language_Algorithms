#include <stdio.h>
#include <conio.h>
#include <string.h>

void str_ins(char str[20],char str2[10],int pos);

void main(){
	char str[20],str2[10];
	int pos;
	
	printf("\n Enter main string : \n");
	gets(str);
	printf("\n Enter substring : \n");
	gets(str2);
	printf("\n Enter the position : \n");
	scanf("%d",&pos);
	str_ins(str[20],str2[10],pos);
}
void str_ins(char str[20],char str2[10],int pos){
	char str3[30];
	int i,j,l;
	
	strncpy(str3,str,pos);
	l=strlen(str2);
	
	for(i=pos;j=0;i<pos+l;i++;j++){
		str3[i]=str2[j];
	}
	for(i=pos+l;j=pos;str[j]!='\0';i++;j++){
		str3[i]=str[j];
	}
	str3[i]='\0';
	printf("\n Resultant string is : %s",str3);
}
