#include<stdio.h>
#include<stdlib.h>
int s[50],top,n;

void push();
void pop();
void display();

int main(){
	
	top=-1;
	
	printf("\n Enter the size of stack max 50 ");
    scanf("%d",&n);
    printf("\n Stack using Array \n");
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
	int val;
	printf(" Enter the Value to be pushed : ");
	scanf("%d",&val);
	if(top==n-1){
		printf(" Stack is Full \n");
	}else{
		s[++top]=val;	
		
	display();
	}
	
}


void pop(){
	
	if(top == -1){
		printf(" Stack empty.\n");
	}else{
		printf(" Value to be poped is : %d ",s[top]);	
		top--;
		display();
	}
}

void display(){
	if(top==-1){
		printf("\n Stack empty.\n");
		return ;
	}
	int i=0;
	printf("\n Stack : ");
	for(;i<=top;i++){
		printf("%d ",s[i]);
	}
	
	printf("\n");
}



