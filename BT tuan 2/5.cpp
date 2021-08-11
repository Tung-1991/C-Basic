#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	int tien,a,b,c,d,e,f,g;
	cout<<"So tien rut:";
	cin>>tien;
	a = tien/500;
	b = tien%500; 
	cout<<"\nSo to 500k:"<<a;
	c = b/200;
	d = b%200;
	cout<<"\nSo to 200k:"<<c;
	e = d/100;
	f = d%100;
	cout<<"\nSo to 100k:"<<e;
	g = f/50;
	cout<<"\nSo to 50k:"<<g;
}

