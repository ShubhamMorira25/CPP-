#include <iostream>
using namespace std;
int main () {
	
	cout<<"Qno1. Write a program to declare a string variable greeting and" 
    "assign it the value /'Welcome'/ Then print the value of greeting." <<endl;	
	string greeting = "Welcome";
	cout<< greeting << endl <<endl;
	
	cout<< "QNo2 What does the following code print? " <<endl;
	string  name = "Alice";
	cout<< name <<endl <<endl;
	
	cout<<"Qno3 Modify the above program to" 
  "ask the user for their name and then greet them by name."
	"input" <<endl;

	string firstname;
	string greeting;	
	
	cout<<"Your name is" <<endl;
	cin>>firstname;
	cout<<"greeting" <<endl;
	cin>> greeting;
	cout<< firstname + greeting;
	
	cout<<"Qno4 Write a program that reads two strings from the user," 
	"concatnates them, and then prints the result." <<endl <<endl;

	string firstname; 
	string lastname;
	 
	cout<<"Firstname" <<endl <<endl;
	cin>>firstname; 
		
	cout<<"Lastname" <<endl;
	cin>>lastname;
	
	cout<<"Qno5 Write a program that concatenates the strings"
	 "/'Good'/ and /'Morning'/ and prints the result." <<endl;
	 
	string shubham ="Good";
	string raj = "Morning";cout<<"Qno20 Write a program that changes the first letter of a string to uppercase and prints the result." <<endl;
	string rohan = "Akash";
	cout << rohan [0]; 
	cout<< shubham + raj <<endl <<endl;
	
	cout<< "QNo6 What will the following code output? " <<endl;
	string firstName = "John";
	string lastName = "Doe";
	cout<< firstName + lastName <<endl <<endl;
	
		cout<<"Qno7 Write a program that concatenates a user’s"
	"first name and last name with a space between them." <<endl;
	 
	string firstname_ = "Shubham";
	string Lastname_ = " Raj";
	cout<< firstname_ + Lastname_ <<endl <<endl;
	
	cout<<"Qno8 Write a program that adds two numbers and prints the result." <<endl;
	int x = 125000;
	int y = 10000;
	cout<< x + y <<endl <<endl;
	
	cout<<"Qno9 What will this program print?" <<endl;
	string X = 25;
	string Y = 45;
	cout<< X+ Y <<endl <<endl;
	
	cout<<"Qno10 What happens if you try to add an integer and a string, like this:" <<endl;
    "string x = \'Hello'\;" <<endl;
	string t = "Hello";
	int p = 5;
	string result = t + p <<endl <<endl;
	//because it is not same type,
	//so that this is not working.
	
		cout<<"Qno11 Why is adding a number to a string causing an error in the example above?" <<endl;
	Example
	int u = 5;
	string r = "shubham"; 
	cout<< u + r <<endl <<endl;
	
	cout<<"Qno12 Write a program that prints the length of the string /"C++ Programming"/" <<endl;
    string insta = "C++ programing";
    cout << insta.length() <<endl <<endl;
    
    cout<<"Qno13 What does the following code print?" <<endl;
    string sumeet = "OpenAI";
    cout << sumeet.length () <<endl <<endl;
    
    cout<<"Qno14 Write a program that reads a string from the user and prints its length." <<endl;
    string txt = "Varun Kumar";
	cout<< txt.length () <<endl <<endl;
	
	cout<<"Qno15 Explain the difference between length() and size() for strings." <<endl;
	cout<< "Length Example" <<endl;
	string Name = "Aadesh kumar";
	cout<< Name.length () <<endl <<endl;
	
	cout<<"Size Example" <<endl;
	string u = "Lakush Kumar";
	cout<< u.size() <<endl <<endl;
	
	cout<<"Qno16 Write a program that accesses and" 
	"prints the first character of the string /"Computer"/. " <<endl;
	string name = "Computer";
	cout<< name[1] <<endl;
	
	cout<<"Qno17 What will the following code output?" <<endl;
	string greeting = "Hello";
	cout<< greeting [2] <<endl <<endl; 
	
	cout<<"Qno18 Write a program that prints the last character of the string /"Programming"/." <<endl;
	string somil = "programming";
	cout<< somil [10] <<endl;
	
	cout<<"Qno19 Modify the above program to print the third character in the string entered by the user." <<endl;
	string yash = "shiwam";
	cout << yash [2] <<endl;
	
	cout<<"Qno20 Write a program that changes the first letter of a string to uppercase and prints the result." <<endl;
	string rohan = "Akash";
	cout << rohan [0]; 
	
	cout<<"Qno21 Write a program that prints a string containing a double quote"
	"("), like He said, '\Hello!\'." <<endl;
	string yash = "He said \'Hello\'";
	cout<< yash <<endl; 
	
	cout<<"Qno22 What will this code print?" <<endl;
	string shiwam = "It's a beautiful day!";
	cout<< shiwam <<endl;
	
	cout<<"Qno23 What will the following code print?" <<endl;
	string parshant = "He said, \"Helo World!\"";
	cout<< parshant <<endl;
	
	cout<<"Qno24 Write a program that prints a string with both single and double quotes, and also contains a newline." <<endl;
	string sentence = "This is sagar s watch do not \"touch\" it"; 
	cout<< sentence <<endl;
	
	cout<<"Qno25 Write a program that asks the user for their name and then prints it." <<endl;
	string x = "Abhay Morira";
	cout<< x <<endl;
	
	cout<<"Qno26 What will happen when the following code is run?" <<endl;
	string name;
	cout<<"Enter your name: ";
	cin >> name;
	cout<< "Your name is: " <<name <<endl <<endl;
	
	cout<<"Qno27  Modify the above program to accept the user’s full name (first and last) and print it." <<endl;
	string Firstname = "Shubham" ;
	cout<<"Your first name is: " << Firstname <<endl;
	string Lastname = "Morira" ;
	cout<<"Your Last name is: " <<Lastname <<endl <<endl;
	
	cout<<"Qno28 Write a program that accepts a full name from the user (with spaces) using getline() and then prints it." <<endl;
	string y = "shubham Morira";
	cout<< y <<endl;
	
	std::cout<<"Qno29 Write a program that uses std::string and std::cout without using using namespace std."; <<endl;
	std::string x = "Subhash";
	std::cout << x;
	
	cout<<"Qno30 What will the following code output, and why?" <<endl;	
	string greeting = "Hello";
	cout<< greeting <<endl;
	
	cout<<"Qno31 Explain the advantages and disadvantages of using using namespace std." <<endl;
	
	cout<<"Advantage of using namespace std" <<endl;
	cout<< "It is easy way to write a program and save time." <<endl;
	
	cout<<"Disadvantage of using namespace std" <<endl;
	cout<< "It is long process to use std:: in every line and wasting time" <<endl;
	
}