#include <iostream>
#include <cmath>

using namespace std;

#define PI 3,1416

int main()

{
	double r,C,S;
	cout<<"Ban kinh hinh tron la:";
	cin>>r;
	C = 2*r*PI;
	cout<<"Chu vi hinh tron la:"<<C;
	S = r*r*PI;
	cout<<"\nDien tich hinh tron la:"<<S;
}

