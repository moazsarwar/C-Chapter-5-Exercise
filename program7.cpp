#include <iostream>
using namespace std;
int main(){
	unsigned short int year=0;
	cin>>year;
	if(year%4!=0){
		cout<<endl<<"Not a Leap Year"<<endl;
	}
	else if(year%100!=0){
		cout<<endl<<"Leap Year"<<endl;
	}
	else if(year%400==0){
		cout<<endl<<"Leap Year"<<endl;
	}
	else{
		cout<<endl<<"Not a Leap Year"<<endl;
	}
	return 0;
}
