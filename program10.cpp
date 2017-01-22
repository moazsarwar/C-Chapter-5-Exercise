#include <iostream>
using namespace std;
int main(){
	cout<<endl<<sizeof(double)<<endl<<sizeof(long double)<<endl;
	double salary=0.0;
	double netSalary=0.0;
	double incomeTax=0.0;
	cin>>salary;
	if(salary>30000.0){
		incomeTax=20.0*salary/100.0;
		netSalary=salary-incomeTax;
	}
	else if(salary<=30000.0 && salary>=20000.0){
                incomeTax=15.0*salary/100.0;
                netSalary=salary-incomeTax;
        }
	else if(salary<20000.0){
		incomeTax=10.0*salary/100.0;
                netSalary=salary-incomeTax;
	}
	cout<<endl<<endl
		<<"Total Salary="<<salary<<endl
		<<"Income Tax ="<<incomeTax<<endl
		<<"Net Salary ="<<netSalary<<endl;
	cin.get();
	return 0;
}
