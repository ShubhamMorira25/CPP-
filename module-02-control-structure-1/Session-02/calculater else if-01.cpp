#include<iostream>
using namespace std;
int main(){
	char op;
	int num1, num2;
	cout<<"Enter a first number: "<<endl;
	cin>>num1;
	
	cout<<"Enter operater: "<<endl;
	cin>>op;
	
	cout<<"Enter a second number: "<<endl;
	cin>>num2;
	
	if (op+num1 && op+num2){
		cout<<num1+num2;
	}
	else if (op-num1 && op - num2){
		cout<<num1-num2;
	}
	else if (op * num1 && op * num2){
		cout<<num1*num2;
	}
	else if (op / num1 && op / num2){
		cout<<num1/num2;
		cout<<"total sum";
	}
	else {
		cout<<"invalid operater";
	}
	
	
	
	
}