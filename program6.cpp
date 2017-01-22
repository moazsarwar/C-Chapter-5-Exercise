#include <iostream>
using namespace std;
int main(){
	unsigned short int code=0;
	cout<<endl<<"ENTER CODE :";
	cin>>code;
	switch(code){
		case 1:
			cout<<"CASE1";
			break;
		case 2:
			cout<<"CASE 2";
			break;
		case 3:
			cout<<"CASE 3";
			break;
		case 4:
			cout<<"CASE 4";
			break;
		case 5:
			cout<<"CASE 5";
			break;
		case 6:
			cout<<"CASE 6";
			break;
		default:
			cout<<"invalid Input";
	}
	return 0;
}
