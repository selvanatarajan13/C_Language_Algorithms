// Queue using single list ....

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>


// create the Node using "Strcut" ....
struct node{
	int label;
	struct node *next;
};


void main(int argc, char const *argv[])
{
	// variable declaration....
	int ch=0, k;
	struct node *h, *temp, *head;

	// Head node construction....

	head = (struct node*)malloc(sizeof(struct node));
	head->next = NULL;

	// Create while for the purpose switch condition one-by-one

	while(1){

		// screen printing commands....

		printf("\n\t Queue Using Single linked list\n");
		printf("\n 1.Insert 2.Delete 3.View 4.Exit \n");

		// get the value into put store the varable -> varaible name in ch = choice...

		scanf("%d",&ch);

		// create the switch

		switch(ch){

			case 1:
				// create the new node
				temp = (struct node*)malloc(sizeof(struct node));

				printf("\nEnter the label for new node value : ");
				scanf("%d",&temp->label);

				// Reorganize the links..

				h = head;
				while(h->next != NULL)
					h = h->next;


				h->next = temp;
				temp->next = NULL;
				break;

			case 2:
				break;

			case 3:
				printf("\nHead -> ");
				h=head;
				while(h->next != NULL){
					h = h->next;
					printf("%d -> ", h->label);
				}
				printf(" NULL\n");
				break;
			case 4:
				exit(0);

		}

	}
}