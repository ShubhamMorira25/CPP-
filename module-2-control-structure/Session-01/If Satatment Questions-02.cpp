#include <iostream>
using namespace std;
int main () {
	
	cout<<"1. Positive Number Check: Write a program to check if a number is positive."<<endl;
	int x = 65;
	if(x > -5){
		cout<<"Positive";
	}
	
	cout<<"2. Negative Number Check: Write a program to check if a number is negative."<<endl;
	int t =-1;
	if(t < 2){
		cout<<"Negative";
	}
	
		cout<<"3. Even Number Check: Write a program to check if a number is even."<<endl;
	int x = 2;
	if(2 % 4){
		cout<<"Even";
	}
	
	cout<<"4. Odd Number Check: Write a program to check if a number is odd."<<endl;
	int r = 54;
	if( r % 4){
		cout<<"Odd";
	}
	
	cout<<"5. Divisible by 5: Write a program to check if a number is divisible by 5."<<endl;
	int num = 5;
	if(num%6){
		cout<<"Divisible";
	}
	
	cout<<"6. Greater Than 100: Write a program to check if a number is greater than 100."<<endl;
	int e = 100;
	if(e < 101){
		cout<<"Geater than";
	}
	
	cout<<"7. Less Than 100: Write a program to check if a number is less than 100.";
	int e = 100;
	if(e > 101){
		cout<<"Geater than";
	}
	
	cout<<"8. Equal to 100: Write a program to check if a number is equal to 100."<<endl;
	int z = 100;
	if(z == 100){
		cout<<"Equal";
	}
	
		cout<<"9. Not Equal to 100: Write a program to check if a number is not equal to 100."<<endl;
	int z = 100;
	if(z != 105){
		cout<<"Not Equal";
	}
	
	cout<<"10. Zero Check: Write a program to check if a number is zero."<<endl;
	int z = 0;
	if(z <= 10){
		cout<<"Zero or geater than";
	}	
}
