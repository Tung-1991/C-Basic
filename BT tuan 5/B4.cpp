#include <iostream>
#include <cmath>

using namespace std;

double log(double a,double b)
{
	double s=log10(b)/log10(a);
	return s;
}
int main()
{
	double a,b;
	cout<<"Nhap co so a: ";cin>>a;
	cout<<"Nhap co so b: ";cin>>b;
	if (a>0)
	cout<<"ket qua: "<<log(a,b);
	else
	cout<<"khong xac dinh";
}

