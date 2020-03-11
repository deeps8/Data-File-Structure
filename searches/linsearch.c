//Linear Search
#include<stdio.h>
#include<stdlib.h>
int main(){
	
	system("cls");
	
	int arr[20],n,loc=0,key,i;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	printf("Enter the Array values : ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the value to be searched : ");
	scanf("%d",&key);
	
	for(i=0;i<n;i++){
		if(key==arr[i])
		{
			printf("The value is at %d \n",i+1);
			loc=1;
			break;
		}
	}
	
	if(loc==0){
		printf("Searched value is Not Found \n");
	}
	
	return 0;
}
