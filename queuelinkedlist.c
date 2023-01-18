#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};

int size;
int first = -1;
int rear = -1;

struct node* head = NULL;
struct node* now = NULL;

void enqueue(){
	if(rear==size-1){
		printf("Queue Overflow\n");
		return;
	}
	int num;
	printf("Enter Element: "); 
	scanf("%d",&num);
	
	now = (struct node*)malloc(sizeof(struct node));
	now->data = num;
	now->next = NULL;
	
	if(head==NULL){
		head = now;
		first = 0;
	} else {
		struct node* temp = NULL;
		temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = now;
	}
	++rear;
	printf("ELement Pushed\n");
}
void dequeue(){
	if(first==-1 && rear ==-1){
		printf("Queue Underflow\n");
		return;
	}
	
	head = head->next;
	if(first == rear){
		first = rear = -1;
	}else{
		++first;	
	}
	printf("Element Popped\n");
}
void peek(){
	if(first==-1 && rear==-1){
		printf("No Element\n");
		return;
	}
	struct node* temp = NULL;
	temp = head;
	
	while(temp->next != NULL){
		temp = temp->next;
	}
	printf("First -> %d\tRear -> %d\n",head->data,temp->data);
}
void display(){
	if(first==-1 && rear==-1){
		printf("No Elements\n");
		return;
	}
	struct node* temp = head;
	
	printf("The queue: ");
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
		printf("0 to EXIT\n1 to ENQUEUE\n2 to DEQUEUE\n3 to DISPLAY\n4 to PEEK\nEnter Your Choice: ");
		scanf("%d",&choice);
		system("cls");
		switch(choice){
			case 0:
				printf("BYE\n");
				break;
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
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
