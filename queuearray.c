#include <stdio.h>
#include <stdlib.h>
int *queue;
int size;
int first = -1;
int rear = -1;

void enqueue(){
	if(rear==size-1){
		printf("Queue Overflow\n");
		return;
	}
	int num;
	printf("Enter Element: ");
	scanf("%d",&num);
	
	if(first == -1 && rear == -1){
		first = 0;
	}
	rear++;
	queue[rear] = num;
	printf("Element Pushed\n");
}
void dequeue(){
	if(first==-1 && rear==-1){
		printf("Queue Underflow\n");
		return;
	}
	int num;
	num = queue[first];
	if(first == rear){
		first = rear = -1;
	}else{
		first++;	
	}
	printf("Element Popped\n");
}
void peek(){
	if(first==-1 && rear==-1){
		printf("No Elements\n");
		return;
	}
	printf("First -> %d\tRear -> %d\n",queue[first],queue[rear]);
}
void display(){
	if(first==-1 && rear==-1){
		printf("No Elements\n");
		return;
	}
	int i;
	printf("The queue: ");
	for(i=first; i<=rear; i++){
		printf("%d\t",queue[i]);
	}
	printf("\n");
}

int main(){
	int choice;
	printf("Enter Size: ");
	scanf("%d",&size);
	queue = (int*)malloc(size*sizeof(int));
	
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
