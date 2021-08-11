#include <iostream>
#include <cmath>

using namespace std;

const double PI=3.141592;

double goc(double a, double b, double c){
	double x =(a*a-b*b-c*c)/(-2*b*c);
	cout<<cos(x*PI/180);
}

int main()

{
	double a,b,c;
	cout<<"nhap canh A: ";cin>>a;
	cout<<"nhap canh B: ";cin>>b;
	cout<<"nhap canh C: ";cin>>c;
	cout<<"\ngoc ABC: "<<goc(b,a,c);
	cout<<"\ngoc ACB: "<<goc(c,a,b);
	cout<<"\ngoc BAC: "<<goc(a,b,c);
}

