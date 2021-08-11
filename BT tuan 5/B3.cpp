#include <iostream>
#include <cmath>

using namespace std;

void tinh(float x,float y,float z)
{
	float s=x+y+z;
	float tb=s/3;
	cout<<"\ntong 3 so: "<<s;
	cout<<"\nTBC 3 so: "<<tb;
}
int main()
{
	float a,b,c;
	cout<<"Nhap a: ";cin>>a;
	cout<<"\nNhap b: ";cin>>b;
	cout<<"\nNhap c: ";cin>>c;
	tinh(a,b,c);
}

