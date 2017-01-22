#include <iostream>
using namespace std;
int main(){
	char input=' ';
	double side1=0.0;
	double side2=0.0;
	cout<<endl<<"Enter\n\tT for  Triangle \n\tS for Square"<<endl;
	cin>>input;
	if(input=='T' || input=='t'){
		cout<<endl<<"Enter Base: ";
		cin>>side1;
		cout<<endl<<"Enter Height: ";
		cin>>side2;
		cout <<endl<<"Area of Triangle = "<<0.5*side1*side2<<endl;
	}
	else if(input=='S' || input=='s'){
		cout<<endl<<"Enter Side Length :";
		cin>>side1;
		cout<<endl<<"Area of Square = "<<side1*side1<<endl;
	}
	else{
		cout<<endl<<"Invalid Input"<<endl;
	}
	return 0;
}
