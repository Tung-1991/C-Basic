#include <iostream>

using namespace std;

double t(int n){
	int h,p,g;
	h=n/3600;
	if (n>3600)
		p=(n-(3600*h))/60;
	else
		p=n/60;
	if (n>60)
		g=(n-(3600*h)-(60*p));
	else
		g=n;
	cout<<"so gio,phut,giay: "<<h<<":"<<p<<":"<<g;
}

int main()
{
	int n;
	cout<<"nhap so giay: ";cin>>n;
	t(n);
}

