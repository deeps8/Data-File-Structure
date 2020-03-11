#include<stdio.h>
#include<stdlib.h>

void binsrch(int a[],int n,int k){
	int f=0;
	int high=n;
	int low=0;
	int mid=(high+low)/2;
	
	while(low<=high){
		
		if(a[mid]==k){
			printf("Searched value is at : %d",mid+1);
			f=1;
			break;
		}
		else if(a[mid]<k){
			low = mid+1;
		}
		else  high = mid-1;
		
		mid = (high+low)/2;	
	}
	
	if(f==0){
		printf("Searched value is Not Found \n");
	}
}

int main(){
	
	system("cls");
	
	int n,arr[20],key,i;
	
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	
	printf("Enter the array value in sorted way : \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	printf("Enter the Value to be searched : ");
	scanf("%d",&key);
	
	binsrch(arr,n,key);
	
	
	return 0;
}
