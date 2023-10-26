#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <string.h>
#include <alloc.h>

struct node{
	int data;
	struct node*next;
};

main(){
	struct node*head,*middle,*last;
	
	head = (struct*node)malloc(sizeof(struct node));
	head->data = 10;
	middle->data = 20;
	last->data = 30;
	
	head->next = middle;
	middle->next = last;
	last->next = NULL;
	
	struct node*temp = head;
	
	while(temp != NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
}
