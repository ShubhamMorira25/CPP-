#include <iostream>
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
	
	switch(op){
		case '+':
			cout<<"Total number is: ";
			cout<<num1 + num2;
			break;
	case '-':
			cout<<num1 - num2;
			break;
	case '*':
			cout<<num1 * num2;
			break;
	case '/':
			cout<<num1 / num2;
			break;
			cout<<"Total number is: "<<endl;
	default:
		cout<<"Invaild operater"<<endl;		
}
}
