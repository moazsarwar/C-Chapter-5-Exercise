#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a=0,b=0,c=0;
	double root=0.0;
	cin>>a>>b>>c;
	double f=b*b-4*a*c;
	if(f>=0){
		cout<<endl<<"Roots Are : ";
		root=(-b+sqrt(f))/(2*a);
		cout<<root<<"\t";
		root=(-b-sqrt(f))/(2*a);
                cout<<root<<"\t";
	}
	else{
		cout<<endl<<"Roots Are Not Real"<<endl;
	}
	return 0;
}
