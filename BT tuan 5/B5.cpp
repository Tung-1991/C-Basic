#include <iostream>
#include <cmath>

using namespace std;

double tinh(double n)
{
	double s=1;
	for (double i=2;i<=n;i++)
		s=s+(1/i);
	return s;
}
int main()
{
	double n;
	cout<<"Nhap n: ";cin>>n;
	if(n<1)
	cout<<"n=-1";
	else
	cout<<"tong: "<<tinh(n);
}

