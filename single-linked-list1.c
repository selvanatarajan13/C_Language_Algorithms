#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <string.h>
#include <malloc.h>

struct node{
	int label;
	struct node *next;
};
main(){
	int ch,fou=0;
	int k;
	struct node *h,*temp,*head,*h1;
	
	head = (struct node*)malloc(sizeof(struct node));
	
	head->label = -1;
	head->next = NULL;
	
	while(-1){
		printf("Single linked list\n");
		printf("1.ADD,2,DELETE,3.VIEW,4.EXIT\n");
		printf("Enter your choice \n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Enter label after to be add: \n");
				scanf("%d",&k);
				
				h = head;
				fou = 0;
				if(h->label == k){
					fou = 1;
				}
				while(h->next != NULL){
					if(h->label == k){
						fou = 1;
						break;
					}
					h = head->next;
				}
				if(h->label == k){
					fou = 1;
				}
				if(fou != 1){
					printf("sorry node not found..");
				}
				else{
					temp = (struct node*)malloc(sizeof(struct node));
					printf("Enter new node value : \n");
					scanf("%d",&temp->label);
					temp->next = h->next;
					h->next = temp;
				}
				break;
			case 2:
				printf("Enter the label of the node to be deleted ; \n");
				scanf("%d",&k);
				fou = 0;
				h = h1 = head;
				while(h->next != NULL){
					h = h->next;
					if(h->label == k){
						fou = 1;
						break;
					}
				}
				if(fou == 0){
					printf("sorry node not found..\n");
				}
				else{
					while(h1->next != h){
						h1 = h1->next;
					}
					h1->next = h->next;
					free(h);
					printf("Node deleted successfully..\n");
				}
				break;
			case 3:
				printf("\n Head ->");
				h = head;
				while(h->next != NULL){
					h = h->next;
					printf("%d->",h->label);
				}	
				printf("NULL\n");
				break;
			case 4:
				exit(0);
		}
	}
}
