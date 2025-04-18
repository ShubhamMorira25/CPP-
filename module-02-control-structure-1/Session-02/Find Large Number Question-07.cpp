#include <iostream>
using namespace std;
int main(){
	int num1, num2, num3;
	cout<<"Enter a first number: "<<endl;
	cin>>num1;
	
	cout<<"Enter a second number: "<<endl;
	cin>>num2;
	
	cout<<"Enter a third number: "<<endl;
	cin>>num3;
	
	if(num1 > num2 && num2 > num1){
		cout<<"This is large number: "<<num1 <<endl;
	}	
	else if(num2 > num1 && num2 > num3){
		cout<<"This is large number: "<<num2 <<endl;
	}
	else if(num3 > num1 && num3 > num2){
		cout<<"Largest number: "<<num3 <<endl;
	}
	else{
		cout<<"invaild number"<<endl;
	}	
	
}
