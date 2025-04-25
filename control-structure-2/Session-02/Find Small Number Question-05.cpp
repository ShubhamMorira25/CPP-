#include <iostream>
using namespace std;
int main(){
	
	int n1,n2,n3;
	cout<<"Enter your 1st number :";
	cin>>n1;
	
	cout<<"Enter your 2nd number :";
	cin>>n2;
	
	cout<<"Enter your 3rd number :";
	cin>>n3;
	
	if(n1<n2 && n1<n3) {
	cout<<"small number :"<<n1<<endl;
	}
	
	else if (n2<n1 && n2<n3){
	cout<<"small number :"<<n2<<endl;
	}
	
	else if (n3<n1 && n3<n2){
	cout<<"middle number :"<<n3<<endl;
	}
	
	else {
	cout <<"invalid number :";
	}
}
