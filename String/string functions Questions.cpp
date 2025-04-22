#include <iostream>
using namespace std;
int main () {
	
	cout<<"question-01" <<endl;
	string s1;
	cout<<"Enter a string: " <<endl;
	cin>>s1;
	cout<<"Enter an index: " <<endl;
	cout<< s1.at (5);
	// Enter a string: Education;
	// Enter an index: 5; 
	//outut: Character at index: 5; 
	
	cout<<"Question-02" <<endl;
	string s2;
	cout<<"Enter a string: " <<endl;
	cin>>s2;
	cout<<"Enter an index: " <<endl;
	cout<< s2.at(10);
	//outut: Index out of bounds;
	
	cout<<"Question-03" <<endl;
	string s3;
	cout<<"Enter a string: " <<endl;
	cin>>s3;
	cout<<"Enter an index: " <<endl;
	cout<< s3.at(2);
	//outut: 2 = p; 
	
	cout<<"Question-04" <<endl;
	string s4= "Engineering";
	cout<<"string: Engineering" <<endl;
	cout<<"it's length: " <<endl;
	cout<< s4.length();
	//outut: it's length: 11;
	
	cout<<"Question-05" <<endl;
	string s5 = "AI";
	cout<<"string: AI" <<endl;
	cout<<"it's length: " <<endl;
	cout<< s5.length(); 
	//outut: it's length: 2;
	
	cout<<"Question-06" <<endl;
	string s6 = "Articficial Intelligence";
	cout<<"string: " <<endl;
	cout<<"it's length: " <<endl;
	cout<< s6.size();
	//outut: it's length = 24; 
	
	cout<<"Question-07" <<endl;
	string s7 = "Future";
	cout<< s7; 
	//outut: Future;
	
	cout<<"Question-08" <<endl;
	string s8 = "";
	cout<< s8.empty() ;
	//outut: 1;
	
	cout<<"Question-09" <<endl;
	string s9 = " ";
	cout<< s9.empty() ;
	//outut: 0;
	
	cout<<"Question-10" <<endl;
	string s10 = "Smart" ;
	string S10 = "phone";
	cout<< s10.append(S10);
	//outut: SmartPhone;
	
	cout<<"Question-11" <<endl;
	string s11 = "Super";
	string S11 = "Market";
	cout<<s11.append(S11);
	//outut: SuperMarket;
	
	cout<<"Question-12" <<endl;
	string s12 = "john.deo";
	string S12 = "@gmail.com";
	cout<<"Email: "<<endl; 
	cout<<s12.append(S12);
	//outut: john.deo@gmail.com;
	
	cout<<"Question-13" <<endl;
	string t = "Football";
	cout<<t.insert(4,"-world-");
	//outut: Foot-world-ball;
	
	cout<<"Question-14" <<endl;
	string y = "Programing";
	cout<<y.insert(3,"****");
	//outut: pro****graming;
	
	cout<<"Question-15" <<endl;
	string p = "I love coding";
	cout<<p.insert(7,"AI ");
	//outut: I love AI coding;
}