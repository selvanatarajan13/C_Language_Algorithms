#include <stdio.h>
#include <conio.h>
#include <string.h>

void maskpsw(char password[20]){
	char ch;int i=0;
	while((ch=_getch())!=13){
		printf("*");
		password[i]=ch;
		i++;
	}
	printf("\n");
	password[i]='\0';
}

void encrypt(char password[],char key){
	unsigned int i;
	for(i=0;i<strlen(password);i++){
		password[i]=password[i]-key;
	}
}

void decrypt(char password[],char key){
	unsigned int i;
	for(i=0;i<strlen(password);i++){
		password[i]=password[i]+key;
	}
}

int main(){
	char password[20];
	int key=4;
	printf("Enter the psw : \n");
	//scanf("%s",password);
	maskpsw(password);
	printf("psw is : \n",password);
	encrypt(password,key);
	printf("Encrypt psw is : %s\n",password);
	decrypt(password,key);
	printf("Decrypt psw is : %s\n",password);
	getch();
	return 0;
}
