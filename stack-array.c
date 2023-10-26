#include <stdio.h>
#include <conio.h>

#define max 5

static int stack[max];
int top = -1;

void push(int x){
	stack[++top] = x;
}

void pop(){
	return (stack[top--]);
}

void view(){
	int i;
	if(top<0){
		printf("\n stack empty \n");
	}
	else{
		printf("\n Top-->");
		for(i=top;i>=0;i--){
			printf("%4d",stack[i]);	
		}
		printf("\n");
	}
}
void main(){
	int ch=0,val;
	while(ch!=4){
		printf("\n Stack OPeration\n");
		printf("1.PUSH ");
		printf("2.POP ");
		printf("3.View ");
		printf("4. Quiet");
		printf("Enter choice ");
		scanf("%d",-&ch);
		switch(ch){
			case 1:
				if(top < max-1){
					printf("\nEnter Stack element : ");
					scanf("%d", &val);
					push(val);
				}
				else
					printf("\n Stack Overflow \n");
				break;
			case 2:
				if(top < 0){
					printf("\n Stack Underflow \n");
				}
				else{
					val= pop();
					printf("\n Popped element is %d\n", val);
				}
				break;
			case 3:
				view();
				break;
			case 4:
				exit(0);
			default:
				printf("\n Invalid choice \n");
		}
	}
}
