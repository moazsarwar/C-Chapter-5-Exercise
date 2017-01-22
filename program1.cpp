#include <iostream>
using namespace std;
int main(){
	char input=' ';
	cout<<"Enter Character :";
	cin>>input;
	if(input>='a' && input<='z'){
		cout<<endl<<"Its a LowerCase"<<endl;
	}
	else {
		cout<<endl<<"Its not a LowerCase"<<endl;
	}
	return 0;
}
