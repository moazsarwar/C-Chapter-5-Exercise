#include <iostream>
using namespace std;
int main(){
	int a=0,b=0,c=0;
	cout<<"Enter A B C respectively :";
	cin>>a>>b>>c;
	if(a!=0){
		if(b%a==0 && c%a==0){
			cout<<endl<<"A is common Divisor of B and C"<<endl;
		}
		else{
			cout<<endl<<"A is not a common Divisor of B and C"<<endl;
		}
	}
	else{
		cout<<endl<<"A is '0' so cannot be a divisor"<<endl;
	}
	return 0;
}
