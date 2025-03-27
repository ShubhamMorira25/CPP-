#include <iostream>
using namespace std;
int main () {
	
		cout<<"1. Odd or Even: Write a program to check if a number is odd or even."<<endl;
	int x = 8;
	if(x%2){
		cout<<"Even";
	}
	else{
		cout<<"Odd";
	}
	
	cout<<"2. Positive or Negative: Write a program to check if a number is positive or negative."<<endl;
	int y = 6;
	if(y > 0){
		cout<<"Positive";
	} 
	else{
		cout<<"Negative";
	}
	
	cout<<"3. Pass or Fail: Write a program to check if a student has passed (marks >= 40) or failed."<<endl;
	int marks = 40;
	if(marks <= 73){
		cout<<"Pass";
	}
	else{
		cout<<"Fail";
	}
	
	cout<<"4. Greater or Smaller: Write a program to check if a number is greater than or smaller than 50."<<endl;
	int num = 65;
	if(num < 50){
		cout<<"Geater";
	}
	else{
		cout<<"Smaller";
	}
	
	cout<"5. Adult or Minor: Write a program to check if a person is an adult (age >= 18) or a minor."<<endl;
	int no = 18;
	if(no <= 19){
		cout<<"Adult";
	}
	else{
		cout<<"Minor";
	}
	
	cout<<"6. Divisible by 3 or 5: Write a program to check if a number is divisible by 3 or 5."<<endl;
	int num = 3;
	if(num % 5){
		cout<<"Divisble";
	}
	else{
		cout<<"Not Divisble";
	}
	
	cout<<"7. Positive or Zero: Write a program to check if a number is positive or zero."<<endl;
	int number = 5;
	if(number < 7){
		cout<<"Positive";
	}
	else{
		cout<<"Zero";
	}
	
}
