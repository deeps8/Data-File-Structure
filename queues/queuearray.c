//Queue using array
#include<stdio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void display();

int queue[50],rear,front,n;

int main(){
	
	rear=-1;
	front=-1;
	
	printf("\n Enter the size of Queue max 50 ");
    scanf("%d",&n);
    
	printf("\n Queue using Array \n");
    printf("\n 1.Insert \n 2.Delete \n 3.Display \n 4.Exit");

	do{
		
		int choice;
		printf("\n Enter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			
			case 1 : enqueue(); break;
			
			case 2 : dequeue(); break;
			
			case 3 : display(); break;
			
			case 4 : exit(0);
			
			default : printf(" Entered wrong choice.");			
		}
		
	}while(1);
	
	return 0;
}

void enqueue(){
	
	int val;
	printf("\n Enter the Value to be Inserted : ");
	scanf("%d",&val);
		
	if(rear==n-1){
		printf("\n Queue is full \n");
		return;
	}else{
		
		if(front==-1)
			front++;	
		
		rear++;
		queue[rear]=val;
		
		display();	
	}
	
}


void dequeue(){
	
	
	
	if(front == - 1 || front > rear){
		printf("\n Queue is empty \n");
	}else{
		printf("\n Value to be Deleted is : %d ",queue[front]);
		front++;

		display();	
	}
	
	
}


void display(){
	
	if(front == - 1 || front > rear)
      printf("\n Queue is Empty \n");
   else{
      int i;
      printf("\n Queue elements are: ");
      for(i=front; i<=rear; i++)
	  	printf("%d ",queue[i]);
   }
	
}
