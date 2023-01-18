#include <stdio.h>
#include <stdlib.h>
int *stack;
int size;
int top = -1;

void push(){
	if(top==size-1){
		printf("Stack Overflow\n");
		return;
	}
	int num;
	printf("Enter Element: ");
	scanf("%d",&num);
	stack[++top] = num;
	printf("Element Pushed\n");
}
void pop(){
	if(top==-1){
		printf("Stack Underflow\n");
		return;
	}
	int num;
	num = stack[top--];
	printf("Element Popped\n");
}
void peek(){
	if(top==-1){
		printf("No Elements\n");
		return;
	}
	printf("Top -> %d\n",stack[top]);
}
void display(){
	if(top==-1){
		printf("No Elements\n");
		return;
	}
	int i;
	printf("The stack: ");
	for(i=0; i<=top; i++){
		printf("%d\t",stack[i]);
	}
	printf("\n");
}

int main(){
	int choice;
	printf("Enter Size: ");
	scanf("%d",&size);
	stack = (int*)malloc(size*sizeof(int));
	
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
