#include<iostream>
using namespace std;
int main(){
	
	int n,i;
	bool flag=true;
	cout<<"Enter a number : ";
	cin>>n;
	
	for(i=2;i<n;i++){
		if(n%i==0){
			flag=false;
			break;
		}
	}
	
	if(flag){
		cout<<"Number entered is prime."<<endl;
	}
	else
		cout<<"Number entered is not prime."<<endl;
	
	system("pause");
	return 0;
}
