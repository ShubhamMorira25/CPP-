#include <iostream>
using namespace std;
int main () {
	cout<<"1.Age Check: Write a program to check if a person is eligible to vote (age >= 18)."<<endl;
	int age = 18;
	int x = 15;
	if(age >= 18){
		cout<<"eligible to vote";
	}
	else{
		cout<<"Not eligible to vote";
	}
	//output: eligible to vote;
	
	cout<<"2. Temperature Check: Write a program to check if the temperature is above freezing (0°C)."<<endl;
	int temperature = 0;
	int f = 5;
	if(temperature > 5){
		cout<<"above temperature";
	} 
	else{
		cout<<"below temperature";
    }
	//output: below temperature;
	
	cout<<"3.Eligibility for Job: Write a program to check if a person is above 21 years old for a job."<<endl;
	int man = 21;
	int u = 25;
	if(man < u){
		cout<<"Eligibility for Job";
	}
	else{
		cout<<"Not eligibility for Job";
	}
	//output: Eligibility for Job;
}