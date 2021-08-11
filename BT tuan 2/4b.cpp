#include <iostream>
#include <cmath>
using namespace std;

int main()

{
	double a,b,c,p,S;
	cout<<"gia tri cua a:";
	cin>>a;
	cout<<"gia tri cua b:";
	cin>>b;
	cout<<"gia tri cua c:";
	cin>>c;
	p = (a+b+c)/2;
	cout<<"gia tri cua p la:"<<p;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"\ngia tri cua S la:"<<S;
}

