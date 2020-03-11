#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

struct stk{
	int data;
	struct stk *link;
}*top = NULL;

int main(){
	
	printf("\n Stack using Pointer \n");
    printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit");
	
	do{
		int choice;
		printf("\n Enter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			
			case 1 : push(); break;
			
			case 2 : pop(); break;
			
			case 3 : display(); break;
			
			case 4 : exit(0);
			
			default : printf(" Entered wrong choice.");			
		}
		
	}while(1);
	
	return 0;
}


void push(){
	
	struct stk *temp = (struct stk *)malloc(sizeof(struct stk));
	
	printf(" Enter the Value to be pushed : ");
	scanf("%d",&temp->data);
	
	temp->link = top;
	
	top = temp;
	
	display();
}


void pop(){
	
	if(top == NULL){
		printf("\n Stack empty.\n");
	}else{
		printf("\n Value to be popped is : %d ",top->data);	
		struct stk *popped = top;
		top = top->link;
		free(popped);
		display();
	}
}

void display(){
	if(top==NULL){
		printf("\n Stack empty.\n");
		return ;
	}
	
	struct stk *cur = top;
	printf("\n Stack : ");
	while(cur!=NULL){
		printf("%d ",cur->data);
		cur = cur->link;
	}
	
	printf("\n");
}



