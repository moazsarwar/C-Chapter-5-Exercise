#include <iostream>
using namespace std;
int main(){
	char input=' ';
	cout<<"Enter Status :";
	cin>>input;
	if(input=='S' || input=='s'){
		cout<<endl<<"Salary is 400/week"<<endl;
	}
	else if(input=='J' || input=='j'){
		cout<<endl<<"Salary is 275/week"<<endl;
	}
	else{
		cout<<endl<<"Invalid Input"<<endl;
	}
	return 0;
}
