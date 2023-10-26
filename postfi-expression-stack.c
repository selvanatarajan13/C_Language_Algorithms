#include <stdio.h>
#include <conio.h>

struct stack{
	int top;
	float a[50];
}s;

void main(){
	int i;
	char ep[50];
	float d1,d2;
	
	printf("Enter postfix expression : \n");
	gets(ep);
	
	for(i=0;ep[i]!='\0';i++){
		switch(ep[i]){
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				
			s.a[++s.top]=ep[i]-'0';
			break;
			case '+':
				d1=s.a[s.top--];
				d2=s.a[s.top--];
				s.a[++s.top]=d1+d2;
				break;
			case '-':
				d1=s.a[s.top--];
				d2=s.a[s.top--];
				s.a[++s.top]=d1-d2;
				break;
			case '*':
				d1=s.a[s.top--];
				d2=s.a[s.top--];
				s.a[++s.top]=d1*d2;
				break;
			case '/':
				d1=s.a[s.top--];
				d2=s.a[s.top--];
				s.a[++s.top]=d1/d2;
				break;
		}
	}
	printf("Expression value is %5.2f",s.a[s.top]);
	getch();
}
/*
			POSTFIX EXPRESSION..
1.scan postfix expression from left to right and repeats step 2 & 3 each element of postfix expression.
2.if an oprands is encountered,push it onto the stack
3.if an operator 'op' is encounterd,
a.pop the two element from the stack,where a is the top element and b is the next top element.
b.Evaluate b 'op' a.
c.push the result onto the stack.
4.the evaluated value is equal to the value at the top of the stack*/
cf
