#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	double x,y;
	cout<<"Nhap vao so Thuc:";
	cin>>x;
	y = pow(x,1./4);
	if(x<0)
	   cout<<"Khong Tinh duoc";
	else
	   cout<<"gia tri can bac 4 cua X la:"<<y;
}

