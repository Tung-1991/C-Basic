#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	int n;
	double x,A;
	cout<<"Nhap gia tri cua n:";
	cin>>n;
	cout<<"Nhap vao gia tri cua x DK(x>0):";
	cin>>x;
	A = pow(3,n) + 5*abs(x) + log(3*x);
	cout<<"Gia tri cua A la:"<<A;
}

