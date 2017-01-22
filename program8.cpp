#include <iostream>
using namespace std;
int main(){
	cout<<fixed;
	unsigned short int mTimeH=0,mTimeM=0;
	cout<<"Enter Military Time Hours :";
	cin>>mTimeH;
	cout<<"Enter Military Time Minutes :";
	cin>>mTimeM;
	if(mTimeH<=24 && mTimeM<60){
		if(mTimeH==24 && mTimeM==0){
			mTimeH-=24;
			cout<<endl<<"Standard Time = "<<mTimeH <<":"<<mTimeM<<" AM";
		}
		else if(mTimeH>12 && mTimeH<24){
			mTimeH-=12;
			cout<<endl<<"Standard Time = "<<mTimeH <<":"<<mTimeM<<" PM";
		}
		else if(mTimeH<12){
			cout<<endl<<"Standard Time = "<<mTimeH <<":"<<mTimeM<<" AM";
		}
		else if(mTimeH==12){
			cout<<endl<<"Standard Time = "<<mTimeH <<":"<<mTimeM<<" PM";
		}
		else{
			cout<<endl<<"Invalid Input"<<endl;
		}
	}
	else{
		cout<<endl<<"Invalid Input"<<endl;
	}
	return 0;
}
