#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};

int size;
int top = 0;

struct node* head = NULL;
struct node* now = NULL;

void push(){
	if(top==size){
		printf("Stack Overflow\n");
		return;
	}
	int num;
	printf("Enter Element: "); 
	scanf("%d",&num);
	
	now = (struct node*)malloc(sizeof(struct node));
	now->data = num;
	now->next = NULL;
	
	if(head == NULL){
		head = now;
	} else {
		struct node* temp = NULL;
		temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = now;
	}
	top++;
	printf("ELement Pushed\n");
}
void pop(){
	if(top==0){
		printf("Stack Underflow\n");
		return;
	}

	if(head->next == NULL){
		head = NULL;
	} else {
		struct node* temp = NULL;
		temp = head;
		while(temp->next->next != NULL){
		temp = temp->next;
		}
		temp->next = NULL;
	}
	top--;
	printf("Element Popped\n");
}
void peek(){
	if(top==0){
		printf("No Element\n");
		return;
	}
	struct node* temp = NULL;
	temp = head;
	
	while(temp->next != NULL){
		temp = temp->next;
	}
	printf("Top -> %d\n",temp->data);
}
void display(){
	if(top==0){
		printf("No Elements\n");
		return;
	}
	struct node* temp = NULL;
	temp = head;
	
	printf("The stack: ");
	while(temp != NULL){
		printf("%d\t",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main(){
	int choice;
	printf("Enter Size: ");
	scanf("%d",&size);
	
	do{
		printf("0 to EXIT\n1 to PUSH\n2 to POP\n3 to DISPLAY\n4 to PEEK\nEnter Your Choice: ");
		scanf("%d",&choice);
		system("cls");
		switch(choice){
			case 0:
				printf("BYE\n");
				break;
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				peek();
				break;
			default:
				printf("Invalid Choice\n");
		}
	}while(choice);
	return 0;
}
