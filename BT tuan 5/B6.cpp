#include <iostream>
#include <cmath>

using namespace std;

double tinh(double n)
{
	double s=1;
	for (double i=2;i<=n;i++)
		s=s+(pow(-1,n)/(n+1));
	return s;
}
int main()
{
	double n;
	cout<<"Nhap n: ";cin>>n;
	if(n<0)
	cout<<"Khong tinh duoc";
	else
	cout<<"tong: "<<tinh(n);
}
