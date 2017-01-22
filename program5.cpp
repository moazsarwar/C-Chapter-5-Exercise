#include <iostream>
using namespace std;
int main(){
	char input=' ';
	double temperature=0.0;
	cout<<"Enter\n\tF For Fahrenheit to Celsius Conversion"
		<<"\n\tC For Celsius to Fahrenheit Converstion"<<endl;
	cin>>input;
	cout<<endl<<"Enter Temperature :";
	cin>>temperature;
	if(input=='F' || input=='f'){
		temperature=(temperature-32.0)*5.0/9.0;
		cout<<"F ==> C \n Temp="<<temperature;
	}
	else if(input =='C' || input =='c'){
		temperature=9.0*temperature/5.0 +32.0;
		cout<<"C ==> F \n Temp="<<temperature;
	}
	else{
		cout<<endl<<"invalid Input"<<endl;
	}
	return 0;
}
