#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	double a,b;
	cout<<"nhap a: ";cin>>a;
	cout<<"nhap b: ";cin>>b;
	cout<<"phuong trinh co dang la "<<a<<"X+"<<b<<"=0";
	if (a==0)
		cout<<"\nphuong trinh vo nghiem";
	else{
		cout<<"\nphuong trinh co nghiem: "<<(-b)/a;
	}
}

