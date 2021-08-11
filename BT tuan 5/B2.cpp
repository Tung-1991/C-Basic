#include <iostream>
#include <cmath>

using namespace std;

int giay(int a,int b,int c)
{
	int s;
	s=a*60*60+b*60+c;
	return s;
}
int main()
{
	int a,b,c,a1,b1,c1;
	cout<<"Gio lan 1: ";cin>>a;
	cout<<"Phut lan 1: ";cin>>b;
	cout<<"Giay lan 1: ";cin>>c;
	cout<<"Gio lan 2: ";cin>>a1;
	cout<<"Phut lan 2: ";cin>>b1;
	cout<<"Giay lan 2: ";cin>>c1;
	cout<<"Khoang cach 2 thoi diem la: "<<abs(giay(a,b,c)-giay(a1,b1,c1))<<" giay";
}

