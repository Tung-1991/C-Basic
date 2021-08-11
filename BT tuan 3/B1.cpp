#include <iostream>

using namespace std;

int main()

{
	double a,b,c;	
	cout<<"Nhap canh a: ";cin>>a;
	cout<<"\nNhap canh b: ";cin>>b;
	cout<<"\nNhap canh c: ";cin>>c;
	if((a+b)>c&&(a+c)>b&&(b+c)>a)
        cout<<"a,b,c la canh 1 tam giac";
    else
        cout<<"khong phai tam giac";
}

