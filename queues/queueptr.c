//Queue using Pointer
#include<stdio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void display();

struct queue{
	int data;
	struct queue *link;
}*front=NULL,*rear=NULL;

int main(){
	
	printf("\n Queue using Pointer \n");
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
	
	struct queue *temp = (struct queue*)malloc(sizeof(struct queue)); 
	
	printf("\n Enter the Value to be Inserted : ");
	scanf("%d",&temp->data);
	temp->link = NULL;	
		
		if(front==NULL)
			front=temp;	
		else
			rear->link = temp;
		rear=temp;
		
		display();	
	
}


void dequeue(){
	
	
	
	if(front == NULL){
		printf("\n Queue is empty \n");
	}else{
		printf("\n Value to be Deleted is : %d ",front->data);
		struct queue *delel = front;
		front=front->link;
		
		free(delel);
		
		display();	
	}
	
	
}


void display(){
	
	if(front == NULL)
      printf("\n Queue is Empty \n");
   	else{
      struct queue *cur = front;
	  printf("\n Queue elements are: ");
      
      while(cur!=NULL){
      	printf("%d ",cur->data);
      	cur=cur->link;
	  }
	  
	  printf("\n");
	  	
   }
	
}
