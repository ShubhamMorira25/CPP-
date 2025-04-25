#include <iostream>
using namespace std;
int main () {
	
	cout<<"Else if Questions"<<endl;
	
	cout<<"1. Problem: Write a C++ program that takes the marks of" 
	"a student as input and prints the grade according to the following conditions:" <<endl;
		
	int marks;
	cout<<"Enter your marks " <<endl;
	cin>>marks;
	
	if(marks >= 90){
		cout<<"Grade A" <<endl;
	}
	else if(marks >= 75 && marks < 90){
		cout<<"Grade B" <<endl;
	}
	else if(marks >= 50 && marks < 75){
		cout<<"Garde C" <<endl;
	}
	else if(marks < 50){
		cout<<"Garde D" <<endl;
	}
	
	
		cout<<"2. Write a program that takes a person's age as input and categorizes them into the following:"<<endl;
	int age;
	cout<<"Enter your age: "<<endl;
	cin>>age;
	
	if(age <= 12){
	cout<<"Child"<<endl;
	}
	else if(age > 12 && age <= 19){
		cout<<"Teenger"<<endl;
	}
	else if(age > 19 && age <= 65){
		cout<<"Adult"<<endl;
	}
	else if(age > 65){
		cout<<"Citizen"<<endl;
	}
	
	cout<<"3. Write a program that takes a person's age as input and categorizes them into the following:"<<endl;
	int a = 10, b = 15, c = 12;
	int largest;
	if(a >= b ){ 
		cout<<"Small"<<endl;
	}
	else if(b > c){
		cout<<"Large"<<endl;
	}
	
		cout<<"4. Create a loan approval program where the eligibility for a loan is based on credit score:" <<endl;
	int credit_score;
	cout<<"Enter your credit score"<<endl;
	cin>>credit_score;
	
	if(credit_score >= 750){
		cout<<"High Priority Approval"<<endl;
	}
	else if(credit_score >= 600 && credit_score < 750){
		cout<<"Medium Priority Approval"<<endl;
	}
	else if(credit_score < 600){
		cout<<"Low Priroity Approval"<<endl;
	}
	
	cout<<"5.  Write a program that takes the temperature as input and outputs:"<<endl;
	int temperature;
	cout<<"Enter temperature and check climate:"<<endl;
	cin>>temperature;
	
	if(temperature <= 0){
		cout<<"Freezing"<<endl;
	} 
	else if(temperature > 0 && temperature <= 15){
		cout<<"Warm";
	} 
	else if(temperature > 30){
		cout<<"Hot"<<endl;
	}
	
	cout<<"Short Hand if else Questions:"<<endl;
	
	cout<<"6. Write a C++ program that takes an integer" 
	"as input and checks if the number is even or odd using the shorthand if else statement."<<endl;
	int num =  7;
	
	string result =(num % 3 ==0)? "Even" : "Odd";
	cout<<result <<endl;
	
	cout<<"7. Create a program that checks if a person is eligible to vote based on age (18 or above)."<<endl;
	int age = 18;
	string result =(age <= 20) ?"Eligible for vote" : "Not Eligible for vote";
	cout<<result<<endl;
	
	cout<<"8. Write a program that takes an integer input and prints whether the number is positive or negative"<<endl;
	int num = 5;
	string result =(num < -5)? "Positive":"Negative";
	cout<<result<<endl;
	
	cout<<"9. Create a program that checks if a number is divisible by both 3 and 5"<<endl;
	int num = 18;
	string result =(num % 3 ==0)? "divisible" : "Not divisible";
	cout<<result<<endl;
	
	cout<<"10. Write a program that takes two integers and outputs the larger number" <<endl;
	int a = 10, b = 20;
	string result = (a > b)? "Small" : "Large";
	cout<< result <<endl;
	
	cout<<"Switch case Questions"<<endl;
	
	cout<<"11. Write a program that takes an integer from 1 to 7 as input and outputs the corresponding day of the week"<<endl;
	int day;
	cout<<"Enter a Number"<<endl;
	cin>>day;
	
	switch(day){
		case 1:
		cout<<"Monday"<<endl;
		break;
		
		case 2:
		cout<<"Tuesday"<<endl;
		break;
		
		case 3:
		cout<<"Wedneday"<<endl;
		break;
		
		case 4:
		cout<<"Thursday"<<endl;
		break;
		
		case 5:
		cout<<"Friday"<<endl;
		break;
		
		case 6:
		cout<<"Saturday"<<endl;
		break;
		
		case 7:
		cout<<"Sunday"<<endl;
		break;
		
		default:
		cout<<"Invaild Number"<<endl;
	}
	
	cout<<"Create a simple calculator that takes two integers and an operator"<<endl;
	int num1 = 5;
	int Num2 = 3;
	char operater = '+';
	cout<<" Total number: " <<num1 + Num2 <<endl;
	switch(num1 , Num2 ){
		case '+':
		cout<< num1 + Num2;
		break;
		
		case '-':
		cout<< num1 - Num2;
		break;
		
		case '*':
		cout<< num1 * Num2;
		break;
		
		case '/':
		cout<< num1 / Num2;
		break;
		
	}
	
		
    cout<<"13.Write a program that presents a menu with the following options"<<endl;
	int meun;
	cout<<"Enter a number and check meun"<<endl;
	cin>>meun;
	switch(meun){
		case 1:
		cout<<"Coffee"<<endl;
		break;	
	case 2:
		cout<<"Tea"<<endl;
		break;
	case 3:
		cout<<"juice"<<endl;
		break;
	case 4:
		cout<<"Water"<<endl;
		break;
	case 5:
		cout<<"Pizza"<<endl;
		break;
	case 6:
		cout<<"Burger"<<endl;
		break;
	case 7:
		cout<<"Cold drink"<<endl;
		break;
	default:
		cout<<"Not Available"<<endl;
	}
	
	cout<<"14. Write a program that takes a character grade input (A, B, C, D, F) and outputs the corresponding message"<<endl;
	char grade;
	cout<<"Enter grade and check position"<<endl;
	cin>>grade;
	
	switch(grade){
		case 'A':
		cout<<"Excellent";
		break;
		
		case 'B':
		cout<<"Good";
		break;
		
		case 'C':
		cout<<"Average";
		break;
		
		case 'D':
		cout<<"Fail";
		break;
		
		case 'F':
		cout<<"Fail";
		break;
		
		default:
			cout<<"Invaild grade";
			break;
	}
	
	cout<<"15.  Write a program that takes a month number (1-12) as input and prints the number of days in that month"<<endl;
	int month;
	cout<<"Enter month number and check days: "<<endl;
	cin>>month;
	
	switch(month){
		case 1:
		cout<<"Days in January:31"<<endl;
		break;
		
		case 2:
		cout<<"Days in February :28"<<endl;
		break;
		
		case 3:
		cout<<"Days in March:31"<<endl;
		break;
		
		case 4:
		cout<<"Days in April:30"<<endl;
		break;
		
		case 5:
		cout<<"Days in May:31"<<endl;
		break;
		
		case 6:
		cout<<"Days in June:30"<<endl;
		break;
		
		case 7:
		cout<<"Days in July:31"<<endl;
		break;
		
		case 8:
		cout<<"Days in August:31"<<endl;
		break;
		
		case 9:
		cout<<"Days in September:30"<<endl;
		break;
		
		case 10:
		cout<<"Days in October:31"<<endl;
		break;
		
		case 11:
		cout<<"Days in November:30"<<endl;
		break;
		
		case 12:
		cout<<"Days in December:31"<<endl;
		break;
		
		default: 
		cout<<"Invaild month";
		break;
	}
}
