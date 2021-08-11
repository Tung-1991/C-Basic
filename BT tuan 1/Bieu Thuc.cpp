#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.14159265

int main()

{
	double x,A;
	cout<<"Gia Tri cua X:";
	cin>>x;
	x = PI/180;
	A = (2*sin(2*x) + 3*cos(2*x) )*tan(5*x)/(pow(3,x) + pow(3,-x));
	cout<<"A="<<A;
}

